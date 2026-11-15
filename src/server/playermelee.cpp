// playermelee.cpp -- RECOVERED SKELETON (from hl_i386.so symbol table, ESF Beta 1.2.1)
// Bodies are NOT recovered yet. Addresses are of the Linux .so; see symbols/.
#include "extdll.h"
#include "util.h"
#include "cbase.h"


// ===== class CPlayerMelee (201 methods) =====
// 0x000ff6e0 size=748   CPlayerMelee::Reset   [Reset__12CPlayerMelee]
// TODO: decompile
// 0x000ffa30 size=49    CPlayerMelee::GetSkillValues   [GetSkillValues__12CPlayerMelee]
// TODO: decompile
// 0x000ffa70 size=55    CPlayerMelee::GetOrigDefender   [GetOrigDefender__12CPlayerMelee]
// TODO: decompile
// 0x000ffab0 size=59    CPlayerMelee::GetSoundEdict   [GetSoundEdict__12CPlayerMelee]
// TODO: decompile
// 0x000ffaf0 size=19    CPlayerMelee::SetAttacker   [SetAttacker__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x000ffb10 size=46    CPlayerMelee::SetAttackerOther   [SetAttackerOther__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x000ffb40 size=46    CPlayerMelee::SetDefender   [SetDefender__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x000ffb70 size=426   CPlayerMelee::ManageMelee   [ManageMelee__12CPlayerMelee]
// TODO: decompile
// 0x000ffd20 size=98    CPlayerMelee::ManageInvulnerability   [ManageInvulnerability__12CPlayerMelee]
// TODO: decompile
// 0x000ffd90 size=154   CPlayerMelee::ManageList   [ManageList__12CPlayerMelee]
// TODO: decompile
// 0x000ffe30 size=23    CPlayerMelee::SetAnimPriority   [SetAnimPriority__12CPlayerMelee13ANIM_PRIORITYP15plrmelee_anim_s]
// TODO: decompile
// 0x000ffe50 size=88    CPlayerMelee::PlayMedPriorityAnim   [PlayMedPriorityAnim__12CPlayerMelee]
// TODO: decompile
// 0x000ffeb0 size=124   CPlayerMelee::PlayLowPriorityAnim   [PlayLowPriorityAnim__12CPlayerMelee]
// TODO: decompile
// 0x000fff30 size=194   CPlayerMelee::ManagePriority   [ManagePriority__12CPlayerMelee]
// TODO: decompile
// 0x00100000 size=276   CPlayerMelee::AddAnimationExe   [AddAnimationExe__12CPlayerMeleefPc]
// TODO: decompile
// 0x00100120 size=151   CPlayerMelee::AddAnimationAFix   [AddAnimationAFix__12CPlayerMeleeG6VectorbfPCc]
// TODO: decompile
// 0x001001c0 size=489   CPlayerMelee::AddAnimation   [AddAnimation__12CPlayerMeleebfie]
// TODO: decompile
// 0x001003b0 size=102   CPlayerMelee::AddToCurAnim   [AddToCurAnim__12CPlayerMeleebPc]
// TODO: decompile
// 0x00100420 size=134   CPlayerMelee::GetCurrentAnim   [GetCurrentAnim__12CPlayerMelee]
// TODO: decompile
// 0x001004b0 size=95    CPlayerMelee::GetCurrentExeAnim   [GetCurrentExeAnim__12CPlayerMelee]
// TODO: decompile
// 0x00100510 size=65    CPlayerMelee::GetAnimForMove   [GetAnimForMove__12CPlayerMeleeP12melee_move_sPc]
// TODO: decompile
// 0x00100560 size=250   CPlayerMelee::GetAnimForMove   [GetAnimForMove__12CPlayerMeleei14MELEE_STRENGTHPc]
// TODO: decompile
// 0x00100660 size=51    CPlayerMelee::CanPlayAnimation   [CanPlayAnimation__12CPlayerMelee]
// TODO: decompile
// 0x001006a0 size=378   CPlayerMelee::MeleeFrameAdvance   [MeleeFrameAdvance__12CPlayerMelee]
// TODO: decompile
// 0x00100820 size=225   CPlayerMelee::RemoveAnim   [RemoveAnim__12CPlayerMeleeP15plrmelee_anim_s]
// TODO: decompile
// 0x00100910 size=140   CPlayerMelee::RemoveAnim   [RemoveAnim__12CPlayerMeleePc]
// TODO: decompile
// 0x001009a0 size=100   CPlayerMelee::RemoveAllAnims   [RemoveAllAnims__12CPlayerMelee]
// TODO: decompile
// 0x00100a10 size=410   CPlayerMelee::GetThrowDirection   [GetThrowDirection__12CPlayerMeleei]
// TODO: decompile
// 0x00100bb0 size=274   CPlayerMelee::GetThrowAnimDirection   [GetThrowAnimDirection__12CPlayerMeleeiiPc]
// TODO: decompile
// 0x00100cd0 size=61    CPlayerMelee::GetThrowAnimDirection   [GetThrowAnimDirection__12CPlayerMeleeiPc]
// TODO: decompile
// 0x00100d10 size=390   CPlayerMelee::GetThrowActivity   [GetThrowActivity__12CPlayerMelee]
// TODO: decompile
// 0x00100ea0 size=879   CPlayerMelee::SetThrowAnim   [SetThrowAnim__12CPlayerMeleePcR8Activity]
// TODO: decompile
// 0x00101210 size=160   CPlayerMelee::ManageToss   [ManageToss__12CPlayerMelee]
// TODO: decompile
// 0x001012b0 size=753   CPlayerMelee::StartToss   [StartToss__12CPlayerMeleeP11CBasePlayeriG6Vectorffff]
// TODO: decompile
// 0x001015b0 size=651   CPlayerMelee::MakeCreater   [MakeCreater__12CPlayerMelee]
// TODO: decompile
// 0x00101840 size=82    CPlayerMelee::ApplyVelocity   [ApplyVelocity__12CPlayerMelee]
// TODO: decompile
// 0x001018a0 size=103   CPlayerMelee::DeaccelerateToss   [DeaccelerateToss__12CPlayerMelee]
// TODO: decompile
// 0x00101910 size=1362  CPlayerMelee::CheckForObsticales   [CheckForObsticales__12CPlayerMelee]
// TODO: decompile
// 0x00101e70 size=160   CPlayerMelee::HandleToss   [HandleToss__12CPlayerMelee]
// TODO: decompile
// 0x00101f10 size=118   CPlayerMelee::StartRoll   [StartRoll__12CPlayerMelee]
// TODO: decompile
// 0x00101f90 size=101   CPlayerMelee::CheckCreater   [CheckCreater__12CPlayerMelee]
// TODO: decompile
// 0x00102000 size=180   CPlayerMelee::HandleRecover   [HandleRecover__12CPlayerMelee]
// TODO: decompile
// 0x001020c0 size=178   CPlayerMelee::HandleRoll   [HandleRoll__12CPlayerMelee]
// TODO: decompile
// 0x00102180 size=204   CPlayerMelee::Recover   [Recover__12CPlayerMelee]
// TODO: decompile
// 0x00102250 size=266   CPlayerMelee::StartLandRecover   [StartLandRecover__12CPlayerMelee]
// TODO: decompile
// 0x00102360 size=82    CPlayerMelee::HandleLandRecover   [HandleLandRecover__12CPlayerMelee]
// TODO: decompile
// 0x001023c0 size=1024  CPlayerMelee::LandRecoverDash   [LandRecoverDash__12CPlayerMelee]
// TODO: decompile
// 0x001027c0 size=259   CPlayerMelee::StartLay   [StartLay__12CPlayerMelee]
// TODO: decompile
// 0x001028d0 size=63    CPlayerMelee::HandleLay   [HandleLay__12CPlayerMelee]
// TODO: decompile
// 0x00102910 size=180   CPlayerMelee::InflictWallhitDmg   [InflictWallhitDmg__12CPlayerMeleei]
// TODO: decompile
// 0x001029d0 size=283   CPlayerMelee::StartWallStick   [StartWallStick__12CPlayerMeleeG6VectorT1]
// TODO: decompile
// 0x00102af0 size=771   CPlayerMelee::HandleWallStick   [HandleWallStick__12CPlayerMelee]
// TODO: decompile
// 0x00102e00 size=150   CPlayerMelee::UpdateStruggleBar   [UpdateStruggleBar__12CPlayerMeleei]
// TODO: decompile
// 0x00102ea0 size=129   CPlayerMelee::RemoveStruggleBar   [RemoveStruggleBar__12CPlayerMelee]
// TODO: decompile
// 0x00102f30 size=40    CPlayerMelee::StopThrow   [StopThrow__12CPlayerMelee]
// TODO: decompile
// 0x00102f60 size=561   CPlayerMelee::StopThrow   [StopThrow__12CPlayerMeleei]
// TODO: decompile
// 0x001031a0 size=120   CPlayerMelee::AddComboMoves   [AddComboMoves__12CPlayerMelee]
// TODO: decompile
// 0x00103220 size=217   CPlayerMelee::AddMove   [AddMove__12CPlayerMeleeiiie]
// TODO: decompile
// 0x00103300 size=132   CPlayerMelee::GetPowerRatio   [GetPowerRatio__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x00103390 size=57    CPlayerMelee::CanInflictDamage   [CanInflictDamage__12CPlayerMeleeP11CBasePlayeri]
// TODO: decompile
// 0x001033d0 size=62    CPlayerMelee::ExecuteCombo   [ExecuteCombo__12CPlayerMelee]
// TODO: decompile
// 0x00103410 size=58    CPlayerMelee::CanSwitch   [CanSwitch__12CPlayerMelee]
// TODO: decompile
// 0x00103450 size=229   CPlayerMelee::Switch   [Switch__12CPlayerMelee]
// TODO: decompile
// 0x00103540 size=53    CPlayerMelee::SimpleSwitch   [SimpleSwitch__12CPlayerMeleeP12CPlayerMelee]
// TODO: decompile
// 0x00103580 size=224   CPlayerMelee::SimpleSwitch   [SimpleSwitch__12CPlayerMeleeP12CPlayerMeleef16ADV_MELEE_STATUS]
// TODO: decompile
// 0x00103660 size=306   CPlayerMelee::EmitComboDamage   [EmitComboDamage__12CPlayerMeleeP17melee_combo_hit_s]
// TODO: decompile
// 0x001037a0 size=309   CPlayerMelee::HandleExeAttack   [HandleExeAttack__12CPlayerMelee]
// TODO: decompile
// 0x001038e0 size=146   CPlayerMelee::CanRetaliate   [CanRetaliate__12CPlayerMelee]
// TODO: decompile
// 0x00103980 size=139   CPlayerMelee::HandleExeDefend   [HandleExeDefend__12CPlayerMelee]
// TODO: decompile
// 0x00103a10 size=71    CPlayerMelee::StartExeAttack   [StartExeAttack__12CPlayerMelee]
// TODO: decompile
// 0x00103a60 size=253   CPlayerMelee::StopExeAttack   [StopExeAttack__12CPlayerMelee]
// TODO: decompile
// 0x00103b60 size=180   CPlayerMelee::CanUseTrunksSword   [CanUseTrunksSword__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x00103c20 size=1397  CPlayerMelee::EmitDamage   [EmitDamage__12CPlayerMelee]
// TODO: decompile
// 0x001041a0 size=238   CPlayerMelee::PushAfterDeath   [PushAfterDeath__12CPlayerMelee]
// TODO: decompile
// 0x00104290 size=410   CPlayerMelee::SetComboMoves   [SetComboMoves__12CPlayerMelee]
// TODO: decompile
// 0x00104430 size=317   CPlayerMelee::CopyMoveToExe   [CopyMoveToExe__12CPlayerMelee]
// TODO: decompile
// 0x00104570 size=79    CPlayerMelee::AddExeMove   [AddExeMove__12CPlayerMeleeP17melee_execution_s]
// TODO: decompile
// 0x001045c0 size=182   CPlayerMelee::CreateExeMove   [CreateExeMove__12CPlayerMeleeiifi18MELEE_COMBO_STATUS14MELEE_STRENGTHPc]
// TODO: decompile
// 0x00104680 size=109   CPlayerMelee::ResetComboArray   [ResetComboArray__12CPlayerMeleeP17melee_execution_s]
// TODO: decompile
// 0x001046f0 size=68    CPlayerMelee::GetMeleeStrength   [GetMeleeStrength__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00104740 size=118   CPlayerMelee::GetMeleeStrength   [GetMeleeStrength__12CPlayerMeleef]
// TODO: decompile
// 0x001047c0 size=145   CPlayerMelee::GetDamageDelay   [GetDamageDelay__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00104860 size=151   CPlayerMelee::GetDamage   [GetDamage__12CPlayerMelee]
// TODO: decompile
// 0x00104900 size=266   CPlayerMelee::EmitExeSound   [EmitExeSound__12CPlayerMeleeP7edict_s]
// TODO: decompile
// 0x00104a10 size=112   CPlayerMelee::EmitClientSound   [EmitClientSound__12CPlayerMeleeP7edict_sii]
// TODO: decompile
// 0x00104a80 size=140   CPlayerMelee::Block   [Block__12CPlayerMeleeii]
// TODO: decompile
// 0x00104b10 size=62    CPlayerMelee::GetBlockRatio   [GetBlockRatio__12CPlayerMeleeii]
// TODO: decompile
// 0x00104b50 size=282   CPlayerMelee::PredictBlockRatio   [PredictBlockRatio__12CPlayerMeleeP17melee_execution_sP12melee_move_sf]
// TODO: decompile
// 0x00104c70 size=160   CPlayerMelee::PredictBlockRatio   [PredictBlockRatio__12CPlayerMeleeP12melee_move_sT1f]
// TODO: decompile
// 0x00104d10 size=159   CPlayerMelee::SetBlock   [SetBlock__12CPlayerMeleeP17melee_execution_s]
// TODO: decompile
// 0x00104db0 size=57    CPlayerMelee::GetBlockStunAmt   [GetBlockStunAmt__12CPlayerMelee14MELEE_STRENGTH]
// TODO: decompile
// 0x00104df0 size=133   CPlayerMelee::ContinueBlockStun   [ContinueBlockStun__12CPlayerMeleeRi14MELEE_STRENGTHT2]
// TODO: decompile
// 0x00104e80 size=154   CPlayerMelee::SetBlockStun   [SetBlockStun__12CPlayerMeleeP17melee_execution_s]
// TODO: decompile
// 0x00104f20 size=79    CPlayerMelee::GetAnimForCombo   [GetAnimForCombo__12CPlayerMeleeiPc]
// TODO: decompile
// 0x00104f70 size=85    CPlayerMelee::AddExeCombo   [AddExeCombo__12CPlayerMeleeP17melee_execution_sffPFP11CBasePlayerP11CBasePlayer_v]
// TODO: decompile
// 0x00104fd0 size=598   CPlayerMelee::SetupCombo   [SetupCombo__12CPlayerMeleei]
// TODO: decompile
// 0x00105230 size=82    CPlayerMelee::AddCombo   [AddCombo__12CPlayerMeleeP17melee_execution_si]
// TODO: decompile
// 0x00105290 size=114   CPlayerMelee::CanEXECombo   [CanEXECombo__12CPlayerMeleeP17melee_execution_s]
// TODO: decompile
// 0x00105310 size=93    CPlayerMelee::GetNextExe   [GetNextExe__12CPlayerMelee]
// TODO: decompile
// 0x00105370 size=189   CPlayerMelee::NextExeMove   [NextExeMove__12CPlayerMelee]
// TODO: decompile
// 0x00105430 size=242   CPlayerMelee::NewExeMovePost   [NewExeMovePost__12CPlayerMelee]
// TODO: decompile
// 0x00105530 size=365   CPlayerMelee::SetDirections   [SetDirections__12CPlayerMelee]
// TODO: decompile
// 0x001056a0 size=160   CPlayerMelee::SetBlockingDirections   [SetBlockingDirections__12CPlayerMelee]
// TODO: decompile
// 0x00105740 size=205   CPlayerMelee::SetMovementFlags   [SetMovementFlags__12CPlayerMeleeRi]
// TODO: decompile
// 0x00105810 size=215   CPlayerMelee::CanAddDirection   [CanAddDirection__12CPlayerMelee]
// TODO: decompile
// 0x001058f0 size=292   CPlayerMelee::AddDirection   [AddDirection__12CPlayerMeleei]
// TODO: decompile
// 0x00105a20 size=25    CPlayerMelee::IsDirectionless   [IsDirectionless__12CPlayerMeleei]
// TODO: decompile
// 0x00105a40 size=54    CPlayerMelee::SetDirection   [SetDirection__12CPlayerMeleeP12melee_move_si]
// TODO: decompile
// 0x00105a80 size=165   CPlayerMelee::RemoveDir   [RemoveDir__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00105b30 size=105   CPlayerMelee::ResetDirection   [ResetDirection__12CPlayerMeleeiP12melee_move_s]
// TODO: decompile
// 0x00105ba0 size=65    CPlayerMelee::SetAttackFlags   [SetAttackFlags__12CPlayerMeleeRi]
// TODO: decompile
// 0x00105bf0 size=294   CPlayerMelee::HoldDirection   [HoldDirection__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00105d20 size=368   CPlayerMelee::LetGoDirection   [LetGoDirection__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00105e90 size=91    CPlayerMelee::CanLetGo   [CanLetGo__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00105ef0 size=97    CPlayerMelee::DelAllDirectionsAttacker   [DelAllDirectionsAttacker__12CPlayerMelee]
// TODO: decompile
// 0x00105f60 size=97    CPlayerMelee::DelAllDirectionsDefender   [DelAllDirectionsDefender__12CPlayerMelee]
// TODO: decompile
// 0x00105fd0 size=50    CPlayerMelee::DelAllDirections   [DelAllDirections__12CPlayerMelee]
// TODO: decompile
// 0x00106010 size=63    CPlayerMelee::GetCurrentDirection   [GetCurrentDirection__12CPlayerMelee]
// TODO: decompile
// 0x00106050 size=51    CPlayerMelee::GetMoveCount   [GetMoveCount__12CPlayerMelee]
// TODO: decompile
// 0x00106090 size=51    CPlayerMelee::GetMoveCountFinishedOnly   [GetMoveCountFinishedOnly__12CPlayerMelee]
// TODO: decompile
// 0x001060d0 size=81    CPlayerMelee::GetMoveCountFinishedOnly   [GetMoveCountFinishedOnly__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00106130 size=75    CPlayerMelee::GetMoveCount   [GetMoveCount__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00106180 size=64    CPlayerMelee::UseAttackerMoves   [UseAttackerMoves__12CPlayerMelee]
// TODO: decompile
// 0x001061c0 size=24    CPlayerMelee::GetCmbTime   [GetCmbTime__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x001061e0 size=160   CPlayerMelee::GetMoveStrength   [GetMoveStrength__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00106280 size=87    CPlayerMelee::TotalCmbTime   [TotalCmbTime__12CPlayerMelee]
// TODO: decompile
// 0x001062e0 size=90    CPlayerMelee::TotalCmbTimeNC   [TotalCmbTimeNC__12CPlayerMelee]
// TODO: decompile
// 0x00106340 size=1115  CPlayerMelee::SendBlockFlash   [SendBlockFlash__12CPlayerMeleeP11CBasePlayerP12melee_move_s]
// TODO: decompile
// 0x001067a0 size=126   CPlayerMelee::MeleeHud   [MeleeHud__12CPlayerMeleeii]
// TODO: decompile
// 0x00106820 size=108   CPlayerMelee::MeleeHudRemove   [MeleeHudRemove__12CPlayerMeleei]
// TODO: decompile
// 0x00106890 size=126   CPlayerMelee::MeleeText   [MeleeText__12CPlayerMeleeii]
// TODO: decompile
// 0x00106910 size=131   CPlayerMelee::FlagsToDirections   [FlagsToDirections__12CPlayerMeleei]
// TODO: decompile
// 0x001069a0 size=191   CPlayerMelee::DirectionsToFlags   [DirectionsToFlags__12CPlayerMeleei]
// TODO: decompile
// 0x00106a60 size=61    CPlayerMelee::MeleeHudFlags   [MeleeHudFlags__12CPlayerMeleeii]
// TODO: decompile
// 0x00106aa0 size=435   CPlayerMelee::UpdateBlockClient   [UpdateBlockClient__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00106c60 size=190   CPlayerMelee::MeleeHudFlags   [MeleeHudFlags__12CPlayerMeleeiif]
// TODO: decompile
// 0x00106d20 size=47    CPlayerMelee::MeleeHudSwitchAtk   [MeleeHudSwitchAtk__12CPlayerMeleeP12melee_move_s]
// TODO: decompile
// 0x00106d50 size=350   CPlayerMelee::SendPredictVars   [SendPredictVars__12CPlayerMeleef]
// TODO: decompile
// 0x00106eb0 size=104   CPlayerMelee::MeleeHudDisable   [MeleeHudDisable__12CPlayerMelee]
// TODO: decompile
// 0x00106f20 size=291   CPlayerMelee::SetMode   [SetMode__12CPlayerMelee16ADV_MELEE_STATUS]
// TODO: decompile
// 0x00107050 size=772   CPlayerMelee::InitMelee   [InitMelee__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x00107360 size=40    CPlayerMelee::StopMelee   [StopMelee__12CPlayerMelee]
// TODO: decompile
// 0x00107390 size=2847  CPlayerMelee::StopMelee   [StopMelee__12CPlayerMeleei]
// TODO: decompile
// 0x00107eb0 size=1188  CPlayerMelee::PushAwayOtherPlayers   [PushAwayOtherPlayers__12CPlayerMelee]
// TODO: decompile
// 0x00108360 size=140   CPlayerMelee::CheckStunTime   [CheckStunTime__12CPlayerMelee]
// TODO: decompile
// 0x001083f0 size=42    CPlayerMelee::GetStunTime   [GetStunTime__12CPlayerMelee]
// TODO: decompile
// 0x00108420 size=127   CPlayerMelee::SetActiveStunTime   [SetActiveStunTime__12CPlayerMeleef]
// TODO: decompile
// 0x001084a0 size=19    CPlayerMelee::SetTotalStunTime   [SetTotalStunTime__12CPlayerMeleef]
// TODO: decompile
// 0x001084c0 size=625   CPlayerMelee::GetEnemyPrepunch   [GetEnemyPrepunch__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x00108740 size=297   CPlayerMelee::SetAtkBehindAndBlocking   [SetAtkBehindAndBlocking__12CPlayerMelee]
// TODO: decompile
// 0x00108870 size=914   CPlayerMelee::StartPrePunchAttack   [StartPrePunchAttack__12CPlayerMelee]
// TODO: decompile
// 0x00108c10 size=765   CPlayerMelee::StopPrepunchAttack   [StopPrepunchAttack__12CPlayerMelee]
// TODO: decompile
// 0x00108f10 size=102   CPlayerMelee::GetStunPerPunch   [GetStunPerPunch__12CPlayerMelee]
// TODO: decompile
// 0x00108f80 size=179   CPlayerMelee::GetDmgPerPunch   [GetDmgPerPunch__12CPlayerMelee]
// TODO: decompile
// 0x00109040 size=1786  CPlayerMelee::HandlePrepunchAttack   [HandlePrepunchAttack__12CPlayerMelee]
// TODO: decompile
// 0x00109740 size=815   CPlayerMelee::HandlePrepunchDefend   [HandlePrepunchDefend__12CPlayerMelee]
// TODO: decompile
// 0x00109a70 size=468   CPlayerMelee::StartChargedAttack   [StartChargedAttack__12CPlayerMelee]
// TODO: decompile
// 0x00109c50 size=163   CPlayerMelee::StartChargedAttackRetaliate   [StartChargedAttackRetaliate__12CPlayerMelee]
// TODO: decompile
// 0x00109d00 size=154   CPlayerMelee::StopChargedAttack   [StopChargedAttack__12CPlayerMelee]
// TODO: decompile
// 0x00109da0 size=111   CPlayerMelee::HandleDelayedBlock   [HandleDelayedBlock__12CPlayerMeleeP12melee_move_sT1]
// TODO: decompile
// 0x00109e10 size=125   CPlayerMelee::SetDelayEndBlock   [SetDelayEndBlock__12CPlayerMeleeP12melee_move_sT1]
// TODO: decompile
// 0x00109e90 size=150   CPlayerMelee::HandleChargeAttack   [HandleChargeAttack__12CPlayerMelee]
// TODO: decompile
// 0x00109f30 size=50    CPlayerMelee::HandleChargeDefend   [HandleChargeDefend__12CPlayerMelee]
// TODO: decompile
// 0x00109f70 size=445   CPlayerMelee::StartGrabbedAttack   [StartGrabbedAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010a130 size=249   CPlayerMelee::StopGrabbedAttack   [StopGrabbedAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010a230 size=665   CPlayerMelee::CanThrow   [CanThrow__12CPlayerMeleeiR6Vector]
// TODO: decompile
// 0x0010a4d0 size=400   CPlayerMelee::Throw   [Throw__12CPlayerMeleeP11CBasePlayerifG6Vector]
// TODO: decompile
// 0x0010a660 size=1081  CPlayerMelee::HandleGrabAttack   [HandleGrabAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010aaa0 size=114   CPlayerMelee::SetGrabbedOrigin   [SetGrabbedOrigin__12CPlayerMelee]
// TODO: decompile
// 0x0010ab20 size=140   CPlayerMelee::HandleGrabDefend   [HandleGrabDefend__12CPlayerMelee]
// TODO: decompile
// 0x0010abb0 size=774   CPlayerMelee::StartStruggleAttack   [StartStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010aec0 size=126   CPlayerMelee::RetryStruggleAttack   [RetryStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010af40 size=504   CPlayerMelee::StartBurstStruggleAttack   [StartBurstStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010b140 size=292   CPlayerMelee::StopStruggleAttack   [StopStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010b270 size=365   CPlayerMelee::ManageStruggleArrows   [ManageStruggleArrows__12CPlayerMelee]
// TODO: decompile
// 0x0010b3e0 size=444   CPlayerMelee::CheckStruggleArrows   [CheckStruggleArrows__12CPlayerMelee]
// TODO: decompile
// 0x0010b5a0 size=580   CPlayerMelee::WinStruggle   [WinStruggle__12CPlayerMelee]
// TODO: decompile
// 0x0010b7f0 size=38    CPlayerMelee::HandleStruggleAttack   [HandleStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010b820 size=38    CPlayerMelee::HandleBurstStruggleAttack   [HandleBurstStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010b850 size=38    CPlayerMelee::HandleStruggleDefend   [HandleStruggleDefend__12CPlayerMelee]
// TODO: decompile
// 0x0010b880 size=768   CPlayerMelee::StartKnockPreStruggle   [StartKnockPreStruggle__12CPlayerMelee]
// TODO: decompile
// 0x0010bb80 size=104   CPlayerMelee::HandleKnockPreStruggleAttack   [HandleKnockPreStruggleAttack__12CPlayerMelee]
// TODO: decompile
// 0x0010bbf0 size=678   CPlayerMelee::BlowbackStruggle   [BlowbackStruggle__12CPlayerMeleeG6VectorffP11CBasePlayer]
// TODO: decompile
// 0x0010bea0 size=170   CPlayerMelee::EmitShockwave   [EmitShockwave__12CPlayerMelee]
// TODO: decompile
// 0x0010bf50 size=353   CPlayerMelee::EmitExplosionRocks   [EmitExplosionRocks__12CPlayerMeleeG6VectorT1fii]
// TODO: decompile
// 0x0010c0c0 size=76    CPlayerMelee::BlocksAttack   [BlocksAttack__12CPlayerMeleeP11CBasePlayer]
// TODO: decompile
// 0x0010c110 size=375   CPlayerMelee::SetPowerhitAnim   [SetPowerhitAnim__12CPlayerMeleeG6Vectori]
// TODO: decompile
// 0x0010c290 size=120   CPlayerMelee::Powerhit   [Powerhit__12CPlayerMeleeP11CBasePlayerG6Vectorifffff]
// TODO: decompile
// 0x0010c310 size=724   CPlayerMelee::Powerhit   [Powerhit__12CPlayerMeleeiP11CBasePlayerG6Vectorifffff]
// TODO: decompile
// 0x0010c5f0 size=492   CPlayerMelee::Powerhit   [Powerhit__12CPlayerMeleeP11CBasePlayerG6Vectori]
// TODO: decompile
// 0x0010c7e0 size=210   CPlayerMelee::SimpleMeleePowerhit   [SimpleMeleePowerhit__12CPlayerMeleeP11CBasePlayerG6Vectori]
// TODO: decompile
// 0x0010c8c0 size=22    CPlayerMelee::InThrow   [InThrow__12CPlayerMelee]
// TODO: decompile
// 0x0010c8e0 size=35    CPlayerMelee::SpecialLaserReduction   [SpecialLaserReduction__12CPlayerMelee]
// TODO: decompile
// 0x0010c910 size=16    CPlayerMelee::GetAttacker   [GetAttacker__12CPlayerMelee]
// TODO: decompile
// 0x0010c920 size=16    CPlayerMelee::GetAttackerOther   [GetAttackerOther__12CPlayerMelee]
// TODO: decompile
// 0x0010c930 size=16    CPlayerMelee::GetDefender   [GetDefender__12CPlayerMelee]
// TODO: decompile
// 0x0010c940 size=16    CPlayerMelee::GetAttackerMoves   [GetAttackerMoves__12CPlayerMelee]
// TODO: decompile
// 0x0010c950 size=16    CPlayerMelee::GetDefenderMoves   [GetDefenderMoves__12CPlayerMelee]
// TODO: decompile
// 0x0010c960 size=16    CPlayerMelee::IsAttacker   [IsAttacker__12CPlayerMelee]
// TODO: decompile
// 0x0010c970 size=16    CPlayerMelee::IsDefender   [IsDefender__12CPlayerMelee]
// TODO: decompile
// 0x0010c980 size=16    CPlayerMelee::InAdvMeleeBattle   [InAdvMeleeBattle__12CPlayerMelee]
// TODO: decompile
