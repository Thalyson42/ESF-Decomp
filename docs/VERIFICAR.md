# Pontos a verificar (comparação com hl.dll / revisão do assembly)

Itens em que a recuperação ficou ambígua. Marcar como resolvido ao confirmar.

## CBotManager::CreateSkillData (0x140cc0) — chave desconhecida
- No decompilado, uma chave sem correspondência (nenhum `strcasecmp` bate) cai no final comum que grava
  `*(float *)(ponteiro + idx*4) = valor` com `v19`/`idx` não inicializados.
- Na versão recuperada, chave desconhecida é **ignorada**. Verificar no assembly (perto de 0x5410xx) se há `jmp`
  de saída ou se o original realmente grava num endereço indefinido (provável bug do original).
- Os `strcasecmp` de `uses_turbo`/`uses_meleecombos`/`uses_chainswoop` aparecem invertidos no pseudo-C; assumi
  `!strcasecmp` (igual) para os três. Confirmar polaridade dos saltos.

## CBotManager::InitSkillDate (0x1408f0) — escritas duplicadas
- O assembly grava duas vezes o mesmo endereço, com valores diferentes, em:
  `+0xfa0` (0.09 depois 0.12), `+0xfe4` (0.6 depois 0.17), `+0x1028` (0.18 depois 0.22), `+0x10b0` (2.0 depois 0.36).
- Cada tabela de skill tem 68 bytes; o 2º valor provavelmente deveria ir no campo seguinte
  (`max_enemy_search_delay`, +0x34 da tabela; +0xfa4/+0xfe8/+0x102c/+0x10b4), mas o binário usa o mesmo endereço.
  Possível bug do código-fonte original. Mantido exatamente como no binário (o último valor vence).
- Consequência: os campos +0xfa4, +0xfe8, +0x102c, +0x10b4 ficam sem valor padrão (só preenchidos pelo skill.cfg).
  Confirmar se alguém os preenche antes (construtor/MapInit).

## Outros [?] já registrados no código
- CBotManager::GetNearestDBSpotIndex: o 1º argumento (jogador) parece ser ignorado; vfunc +0xe4 (CanReachPoint).
- CBotManager::GetRandomDBSpotIndex: valor de retorno final não visível no decompilado.
- CBotManager::CreateBot/CreateSuperBot: campos +0x4 (contador) e +0x28 (guarda mp_plcatchup) com semântica incerta.

- CBotManager::DisconnectPlayer: condição para restaurar `mp_plcatchup` ao sair o último SBot (assumido `f_02c <= 0`; no pseudo-C aparece como `_ccall(4,19,f_02c-1,...)`).
- CBotManager::BotCFGFileThink: assumido que linhas iniciadas por `#` e vazias são ignoradas (outros parsers do mod fazem isso; no pseudo-C deste não aparece).
- CBotManager::MapInit: o caminho `esf\\maps\\<mapa>_bot.cfg\\` (com barras invertidas e `\\` final) nunca abre no Linux; na prática só OpenBotCFGFile abre.

## CBot::SenseSurroundingAttacks (0x1750f0)
- Cadeia final sobre o perigo total (+0x18): o binário testa `> 160`, depois `> 200`, `> 175`, `> 150` (nessa ordem, comparações com sinal);
  os ramos `> 200` e `> 175` nunca executam (o `> 160` os captura). Mantido idêntico ao binário. Provável erro do código original.
- `0xa04` é o ponteiro de personalidade (9 x 60 bytes em CBotManager+3408), não uma "skill struct": +0x34 = agressividade (0 agressivo, 1 normal, 2 defensivo).
  Os 5 pesos lidos (shorts +0x26/+0x28/+0x2e/+0x30/+0x32) correspondem a campos *_percent da personalidade (ver CreateBotPersonalities).
- O argumento de ClassifyAttack é `STRING(pev->classname)` ([?] inferido de `*v9 + gpGlobals->pStringBase`).
