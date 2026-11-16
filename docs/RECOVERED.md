# Funções recuperadas à mão

| Classe | Arquivo | Funções | Observação |
|---|---|---|---|
| CKamehameha | src/server/kamehameha.cpp | 11/11 | Todas as chamadas resolvidas ([OK]); campos de base ainda `f_XXX`. |
| CGallitGun | src/server/gallitgun.cpp | 9/10 | Sem GrowChargeSprite próprio (herda). |
| CControlledBeam | src/server/controlledweapon.cpp | 30/30 | Completa. Pontos `[?]` marcados no código (virtuais do feixe +0x1fc/+0x200/+0x208, campos +0x37c do jogador e +0x2c4/+0x2dc do feixe). |

`tools/data/entvars_offsets.txt` = offsets de `entvars_t` (calculados do SDK) para traduzir `*(pev+N)`.
Descoberto: CKamehameha e CGallitGun::Spawn gravam os mesmos campos da classe-base (+0xdc..+0x1fc).
| CBasePlayer (ESF) | src/server/player_esf.cpp | 21 (IsPlayer, IsAlive, SetPowerLevel, GetPowerRatio, UseKi, GetMaxSpeed, DrawChargeBar, EmitClassSound, StartFly, StopFly...) | Campos em `include/player_esf.h`. StartFly/StopFly ainda com condições `m_fXXX` sem nome. ki = `pev->fuser4`. |
| CPowerStruggle | src/server/powerstruggle.cpp | 7/7 + CExplodingAttack::StartPowerStruggle/PowerStruggleThink/Release | Disputa de feixes: força = pev->dmg; empate de 5 s encerra. `[?]` nos virtuais +0x1fc/+0x200 do ataque. |
| CMagicAttack / CBeamAttack / CGuidedAttack | src/server/magicattack.cpp | 10/10 + 2 + 5 | Família completa (ShootGuidedMagic e FollowThink com `[?]` só na ordem dos args da trilha). Slots de vtable confirmados em include/magicattack.h. |
| CExplodingAttack | src/server/explodingattack.cpp | 13/13 | Colisão entre ataques (ExplodeTouch): vaporiza se um é <20% do outro, senão power struggle; jogador em guarda -> block struggle (movetype 15). Completa (Explode, DrawExplosionFX, BlockStruggleThink, SwatAway com `[?]` nos campos +0x2b4/+0x2d8/+0x730). |
| CPlayerMelee | src/server/playermelee.cpp + include/playermelee.h | 201/201 | Sistema de melee avançado completo (prepunch, charge, grab, exe/combos, struggle, toss/roll/lay, bloqueio, HUD). Nomes de campos e argumentos `[?]` onde só o uso indica; ainda não compilado. |
| CBasePlayer (modificadas do SDK) | src/server/player.cpp | 7/7 (Jump, SetSuitUpdate, PostThink, TakeDamage, PreThink, Killed, PlayerDeathThink) | SDK + mudanças do ESF: pulo gasta ki, queda segura até 2000, dano reduzido (turbo ×0.75, block ×0.25 de frente ±75°), PL ganho ao causar dano, regeneração/consumo de ki a cada 0.2 s (+3.5 parado, +70 carregando; voo 1, turbo 2, swoop 16), morte por Destructo Disc corta o corpo, deathcam em 12 s. Campos `f_XXX`/`[?]` ainda sem nome. |
| 864 funções "provável igual ao SDK" | src/server/sdk/*.cpp (31 arquivos, gerados por tools/assemble_sdk.py) | 864/864 | Corpos extraídos do HL SDK (similaridade ≥ 0.86 com o decompilado, ver docs/sdk_match.csv). Falta conferir ao compilar: diferenças pequenas do ESF podem aparecer na comparação com hl.dll. `CGraph::FindNearestNode` existe em nodes.cpp e mpstubb.cpp (o stub do SDK; usar só um no build). |
