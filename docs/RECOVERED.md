# Funções recuperadas à mão

| Classe | Arquivo | Funções | Observação |
|---|---|---|---|
| CKamehameha | src/server/kamehameha.cpp | 11/11 | Todas as chamadas resolvidas ([OK]); campos de base ainda `f_XXX`. |
| CGallitGun | src/server/gallitgun.cpp | 9/10 | Sem GrowChargeSprite próprio (herda). |
| CControlledBeam | src/server/controlledweapon.cpp | 26/30 | Faltam PrimaryAttack, SecondaryAttack, WeaponIdle, Holster. Campos do jogador/feixe ainda sem nome (`f_XXX`). Pontos `[?]` marcados no código. |

`tools/data/entvars_offsets.txt` = offsets de `entvars_t` (calculados do SDK) para traduzir `*(pev+N)`.
Descoberto: CKamehameha e CGallitGun::Spawn gravam os mesmos campos da classe-base (+0xdc..+0x1fc).
| CBasePlayer (ESF) | src/server/player_esf.cpp | 21 (IsPlayer, IsAlive, SetPowerLevel, GetPowerRatio, UseKi, GetMaxSpeed, DrawChargeBar, EmitClassSound, StartFly, StopFly...) | Campos em `include/player_esf.h`. StartFly/StopFly ainda com condições `m_fXXX` sem nome. ki = `pev->fuser4`. |
| CPowerStruggle | src/server/powerstruggle.cpp | 7/7 + CExplodingAttack::StartPowerStruggle/PowerStruggleThink/Release | Disputa de feixes: força = pev->dmg; empate de 5 s encerra. `[?]` nos virtuais +0x1fc/+0x200 do ataque. |
