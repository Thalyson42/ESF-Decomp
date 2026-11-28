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

## Layout em +0x2dc (CExplodingAttack / CScatterSplit)
CExplodingAttack declara f_2dc/m_fReleased em +0x2dc, mas CScatterSplit::m_hTarget tambem usa +0x2dc e CBurningBeam/ShootGuidedMagic escrevem m_fReleased na mesma posicao. Conferir na comparacao com hl.dll se m_fReleased pertence a CGuidedAttack (nao a CExplodingAttack).

## CMelee::SecondaryAttack
Campos do jogador lidos por offset cru: +0x400 (modo), +0x380 (CPlayerMelee), +0x504 (CSwoop), +0x508, +0x968 (arma ativa). Nomes `[?]`.

## pm_esf.cpp (movimento ESF)
- `pmove->flDuckTime` (+0x8c) e usado como cronometro do wall jump (1160 -> 0); conferir se o playermove_t do ESF tem campo proprio.
- `PM_PlayerSwoopMove`: formula do atrito (`[?]`) e o trace de colisao (start = end com z + 1 + stepsize) lidos do decompilado, nao do asm completo.
- `PM_MakeJump`: o multiplicador e a constante 0.0 no binario (fldz); o parametro nao e usado.
- PM_PlayerToss/PM_RideBeam: corpos identicos (velocity = vuser4); sentido de vuser4 incerto.

## movetype 16 em PM_Physics_Toss
Onde o SDK compara com MOVETYPE_BOUNCEMISSILE (11), pm_shared do binario usa o literal 16, enquanto o codigo do dll (CBot etc.) compara com 11. Conferir o const.h do ESF (movetype extra?). Tambem: PM_WallJump testa movetype 14 e PM_UpdateStepSound movetype 15.

- CBasePlayer::Descend: a chamada em g_pGameRules vtable +0xf0 é UpdatePlayerStats (identificada pelos headers em src/headers/CGameRules.h). Como IsValidClass (ChangeClass), é virtual no original mas está ligada diretamente ao símbolo da base CGameRules; ao compilar de verdade tem de virar chamada virtual (CHalfLifeMultiplay sobrescreve ambas).
- CBasePlayer::Ascend/Descend: `f_3a4` é gravado com gpGlobals->time (float no binário; aqui int por causa da declaração em esf_extras.h).
- CBasePlayer::StartAscend: `f_774` é float no binário (src/headers/CBasePlayer.h), mas esf_extras.h o declara como int; a checagem de sintaxe passa por conversão implícita. Corrigir a declaração em esf_extras.h para float antes de compilar de verdade.
- player_walljump.cpp: (1) GetWallJumpAnim(prefix, vec, out) compara v_forward/v_right/-v_right com a normal da parede (limiar 0.8); o decompilado calcula -v_forward mas não o usa na comparação (reproduzido assim). (2) em EnableWallJump o caminho de falha chama ResetWallJumpVars e restaura m_flSpeedMult, mas não zera +0x6c4. (3) vfunc +300 do item ativo (m_pActiveItem) foi assumida como GetWeaponPtr e +0x9c/+0xa0 como m_flNextPrimary/SecondaryAttack — conferir. (4) f_3a8 (+0x3a8) bloqueia o wall jump em CheckWallJump: nome/uso desconhecido.
- player_anim.cpp: PlayFullBodyAnimation no ramo f_37c (preso/wall jump) só chama SetSwoopAnim/SetThrowAnim se +0x508 / +0x3a8; senão `buf` fica vazio (o binário usa buf sem inicializar nesse caso). +0x144 de CPlayerMelee e +0x338, +0x360, +0x9ac (sufixo "ref_charge_"/"ref_control_") ainda sem nome. CSwoop::SetSwoopAnim declarado em swoop.h mas sem corpo.
- ChangeClass (player_class.cpp): f_798 (+0x798) é o instante da última troca (cooldown 2 s); f_4c4/f_364/f_728 bloqueiam a troca (nomes desconhecidos); quando o jogador tinha classe e não era espectador, a troca o mata com TakeDamage(world, world, 900, 0x1000) antes de aplicar a nova classe; f_738 vai na ScoreInfo (campo desconhecido).
- player_spectator.cpp: layout do observador igual ao SDK 2.x (m_hObserverTarget +0x788, m_flNextObserverInput +0x790, m_iHideHUD +0x930, m_iFOV +0x938). Incertos: TE 125 enviado em StartSpectator (mensagem própria do ESF), vfunc +0x104 (Holster) e +0xb8 (Use) do item/entidade seguradas, campos +0x8fc, +0x344, +0x90c, e m_szTeamName[0] em +0x99c (assumido).
- CBasePlayer::Swoop (player_swoop_hit.cpp): recuperado lendo o assembly. As duas variantes (m_Melee.f_080 != 0 = A, senão B) diferem em && / || nas comparações de tempo e no tratamento do choque; offsets +0x3a8, +0x380 (estado do melee do alvo), +0x490 (direção salva), +0x508/+0x50c do CSwoop sem nome confirmado. SetMode 9/12/1 = STRUGGLE_ATTACK / KNOCK_PRESTRUGGLE_ATTACK / PREPUNCH_ATTACK.
- Mensagens de usuário: StartPowerUp/StopPowerUp/StopAscending usam dest 2 (MSG_ALL, origem ignorada); Descend e AddClientAfterFX usam dest 4 (MSG_PVS). Corrigido em player_state.cpp (antes estavam como MSG_PVS).
- player_misc.cpp: RemoveSpecialModes chama CAura::Destroy sem testar nulo no binário (aqui protegido por if); campos +0x344, +0x348, +0x584, +0x590, +0x598, +0x59c, +0x6a4, +0x6c0 sem nome. CanMelee: +0x3e4 (estado do CPlayerMelee do alvo), +0x3a4 (tempo), FPlayerCanTakeDamage ligado direto ao símbolo (virtual no original, vtable +0x40). UpdateOldPositions: histórico de 5 pontos de 16 bytes em +0x6d4.
- player_misc2.cpp: a vtable de CBaseClass tem slot i em +4+4*i (sem cabeçalho RTTI) — confere com todos os offsets usados (+0x1c asc., +0x28 PL de forma, +0x2c multiplicador, +0x3c modelo, +0x44 teleporte carregando). Campos +0x364/+0x340/+0x59c (cooldown do Teleport; também zerado em RemoveSpecialModes), +0x584/+0x588/+0x598/+0x6a0 (sub-modelo agendado) e +0x5a0 (nome do modelo) sem nome. TransformFX(-1.0f) manda coord -1 (efeito final).
- player_misc3.cpp: UpdatePlayerSound/Precache/BodyTarget são iguais ao SDK (BodyTarget é inline em player.h, não precisa de corpo); TraceAttack do ESF não tem multiplicador por hitgroup; Precache chama LinkUserMessages (versão do ESF, usermsgs_esf.cpp). SwitchWeapon: vtable do item +0xf8 CanDeploy, +0x100 CanHolster, +0x104 Holster, +0xfc Deploy (nomes conferir contra o header do SDK).
- CBasePlayer::ObjectCaps: no ESF retorna 0 (9 bytes); o SDK define inline em player.h (CBaseMonster::ObjectCaps() & ~FCAP_ACROSS_TRANSITION). Ao montar o header final, trocar por `return 0;`. player_misc4.cpp: +0x908 (m_fWeapon?) e +0x374 em ForceClientDllUpdate sem nome confirmado.

- gamerules_base_esf.cpp: virtuais ESF do CGameRules (IsTeamplay, GetGameDescription, SetMeleeSettings, ...) estao como funcoes livres com asm label (o gamerules.h do SDK nao os declara). Ao linkar de verdade: declarar na classe e remover os labels. SetMeleeSettings escreve em +8..+0x44 (3 niveis x 5 floats); GetMeleeSkillValues indexa por am_skill 0..2. Tabela de modelos g_szModelList (18 de 20 usados) copiada do .rodata.

- CGib no ESF deriva de CBaseAnimating (CBodySlice chama CBaseAnimating::ResetSequenceInfo/LookupSequence em this); o monsters.h do SDK deriva de CBaseEntity: ajustar na hora de linkar. Offsets m_vecForward/Side/Up de CBodySlice (+0x2b8/+0x2c4/+0x2d0) e m_bloodColor (+0x2a8) conferir com sizeof(CGib).
- CBotCombo::MakeRandomTeleports: um destino por passo (flags v4..v10 do decompilado reduzidas a uma tentativa); RANDOM_FLOAT(300,500) como divisor confirmado no asm; conferir na comparacao de bytes.
- CBotCombo::CBotCombo (combo_ctor.cpp): casos 20/25 nao testam inimigo nulo no original (20 ganhou guarda); casos 21/23/24 usam `while (n != 1)` como no asm (n==0 daria volta no short); casos 33-36 usam direcao 0 e SwoopAWhile(0.2). Conferir na comparacao de bytes.
