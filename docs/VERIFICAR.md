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

## CBot::SenseSurroundingPlayers (0x175e80)
- Mesma cadeia final de ramos mortos (>160 / >200 / >175 / >150) que SenseSurroundingAttacks.
- O ramo "jogador voando" assume `pev->movetype == 11` (offset 0x108 inferido de `(*v10)[13].padding_0[4]` com elementos de 20 bytes);
  o teste `EntIsInFieldOfView` aparece duas vezes no pseudo-C (a segunda é redundante).

## CBot::BotSense (0x176cb0)
- Layout das 4 `danger_info_s` locais assumido de 32 bytes cada (memset); o decompilado mostra variáveis soltas.
- Bloco final (SelectItem "weapon_solarflare" + `pev->button |= 1`) só executa se o flag de solarflare (`bFlare`) for verdadeiro; a ação 0 chama `CBasePlayer::Teleport`
  nesse caso (o nome da função pode ser enganoso). `RandomLong(1,3)` na ação 3: o ramo `== 0` nunca ocorre (como no binário).
- `+0xb74` (float) é um tempo de espera de combo; `+0xaf8` guarda flags/valor do combo de tarefa 23; `+0xb08`, `+0xbf8`, `+0xa10`, `+0xa14` nomes [?].
- `g_pBotManager[3398]` ainda sem nome (usado junto com `[3399]` botshoot para "pode lutar").

## CBot::HasWeapon (0x1534b0)
- Offsets +0x940 (10 listas), +0x84 (próximo), +0x88 (id) lidos do decompilado; ids 7 e 10 = discos.

## NMenu (src/bot/nmenu.cpp)
- [?] ShowMenu (host local): ordem exata do fallback do edict do host e argumentos de UTIL_IsValidPlayer (lixo de pilha no decompilado).
- [?] MainMenu opcao 3 usa `cout <<` (virtual call em cout+0x200 no binario); texto "This option is NOT available in free fight" quando g_teamplay == 0.
- [OK] Menu de Debug: o texto diz "Bots Ignore Human Players" na opcao 3 mas o binario liga ela ao campo "observer" (+3402); mantido.
- [OK] ChatMenu: opcoes 1 e 2 levam ao mesmo menu (toggle de chat).

## CChatClass (src/bot/chat.cpp)
- [?] CutTags 2a passada: indice `q[-len(tag2)]` copiado literalmente do binario (ponteiro anterior ao deslocamento).
- [?] StoreChatMsg: o decompilado perdeu o `return` do teste de mensagem repetida.
- [?] ReadChatFile: o binario nao limita o tamanho da linha (aqui limitado a 78); buffer estatico server_cmd sem uso.
- [?] Secoes taunt/whine copiam "All" como chave (o binario passa a string literal "All" independente do keyword).
- [OK] Tamanho da classe 0x394: 5 mensagens antigas (168 bytes), 4 ponteiros, 3 listas de 5 frases recentes (+0x358 normal, +0x36c whine, +0x380 taunt).
