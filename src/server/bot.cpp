// bot.cpp -- RECOVERED SKELETON (from hl_i386.so symbol table, ESF Beta 1.2.1)
// Bodies are NOT recovered yet. Addresses are of the Linux .so; see symbols/.
#include "extdll.h"
#include "util.h"
#include "cbase.h"


// ===== class CBot (90 methods) =====
// 0x0013afc0 size=495   CBot::CreateInit   [CreateInit__4CBotsssss]
// TODO: decompile
// 0x0013b1b0 size=314   CBot::LetBotJoinTeam   [LetBotJoinTeam__4CBot]
// TODO: decompile
// 0x0013b2f0 size=5261  CBot::LetBotPickAClass   [LetBotPickAClass__4CBot]
// TODO: decompile
// 0x0013c780 size=1233  CBot::CheckSBotStuff   [CheckSBotStuff__4CBot]
// TODO: decompile
// 0x0013cc60 size=309   CBot::BotPreThink   [BotPreThink__4CBot]
// TODO: decompile
// 0x0013cda0 size=1408  CBot::BotThink   [BotThink__4CBot]
// TODO: decompile
// 0x0013d320 size=86    CBot::Touch   [Touch__4CBotP11CBaseEntity]
// TODO: decompile
// 0x0013d380 size=1262  CBot::Spawn   [Spawn__4CBot]
// TODO: decompile
// 0x0013d870 size=73    CBot::ToggleTurbo   [ToggleTurbo__4CBotb]
// TODO: decompile
// 0x0013d8c0 size=495   CBot::MakePlayerList   [MakePlayerList__4CBot]
// TODO: decompile
// 0x0013dab0 size=316   CBot::BotCanAscend   [BotCanAscend__4CBot]
// TODO: decompile
// 0x0013dbf0 size=158   CBot::BotCanPowerUp   [BotCanPowerUp__4CBot]
// TODO: decompile
// 0x00143840 size=21    CBot::IsSuperBot   [IsSuperBot__4CBot]
// TODO: decompile
// 0x00143860 size=28    CBot::SetSkill   [SetSkill__4CBotUcP11bot_skill_s]
// TODO: decompile
// 0x00143880 size=42    CBot::EntIsInFOV   [EntIsInFOV__4CBotP11CBaseEntity]
// TODO: decompile
// 0x001438b0 size=49    CBot::EntHeadsToBot   [EntHeadsToBot__4CBotP11CBaseEntity]
// TODO: decompile
// 0x001438f0 size=39    CBot::SetIdealAngles   [SetIdealAngles__4CBotG6Vector]
// TODO: decompile
// 0x00143920 size=96    CBot::AimToVec   [AimToVec__4CBotG6Vector]
// TODO: decompile
// 0x00143980 size=103   CBot::GetAimAngles   [GetAimAngles__4CBotG6Vector]
// TODO: decompile
// 0x001439f0 size=49    CBot::GetKi   [GetKi__4CBot]
// TODO: decompile
// 0x00143a30 size=30    CBot::SetKi   [SetKi__4CBoti]
// TODO: decompile
// 0x00143a50 size=49    CBot::GetHealth   [GetHealth__4CBot]
// TODO: decompile
// 0x00143a90 size=30    CBot::SetHealth   [SetHealth__4CBoti]
// TODO: decompile
// 0x00143ab0 size=125   CBot::GetDistance   [GetDistance__4CBotG6Vector]
// TODO: decompile
// 0x00143b30 size=9     CBot::IsNetClient   [IsNetClient__4CBot]
// TODO: decompile
// 0x00153410 size=159   CBot::CanAttackPlayer   [CanAttackPlayer__4CBotP11CBasePlayer]
// TODO: decompile
// 0x001534b0 size=139   CBot::HasWeapon   [HasWeapon__4CBoti]
// TODO: decompile
// 0x00153540 size=568   CBot::AimAtEnemy   [AimAtEnemy__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00153780 size=84    CBot::AddShootDelay   [AddShootDelay__4CBot]
// TODO: decompile
// 0x001537e0 size=382   CBot::IsValidEnemy   [IsValidEnemy__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00153960 size=44    CBot::EnemyIsInList   [EnemyIsInList__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00153990 size=1338  CBot::BotFindEnemy   [BotFindEnemy__4CBot]
// TODO: decompile
// 0x00153ef0 size=829   CBot::ManageEnemyList   [ManageEnemyList__4CBot]
// TODO: decompile
// 0x00154230 size=95    CBot::GetBestEnemyFromList   [GetBestEnemyFromList__4CBot]
// TODO: decompile
// 0x00154290 size=1649  CBot::CheckForHuntEnemy   [CheckForHuntEnemy__4CBot]
// TODO: decompile
// 0x00154910 size=290   CBot::ShootHealthBeam   [ShootHealthBeam__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00154a40 size=294   CBot::EnemyIsInMeleeRange   [EnemyIsInMeleeRange__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00154b70 size=22    CBot::AttackIsBeam   [AttackIsBeam__4CBotP13weapon_info_s]
// TODO: decompile
// 0x00154b90 size=645   CBot::AvoidAttacksWhileSwoop   [AvoidAttacksWhileSwoop__4CBot]
// TODO: decompile
// 0x00154e20 size=414   CBot::GetNearestHostileAttack   [GetNearestHostileAttack__4CBotff]
// TODO: decompile
// 0x00154fc0 size=3502  CBot::MakeMeleeComboList   [MakeMeleeComboList__4CBot]
// TODO: decompile
// 0x00155d70 size=240   CBot::ClearMeleeComboList   [ClearMeleeComboList__4CBot]
// TODO: decompile
// 0x00155e60 size=471   CBot::SetComboChargeButton   [SetComboChargeButton__4CBot14MELEE_STRENGTHi]
// TODO: decompile
// 0x00156040 size=2717  CBot::ChargeMeleeCombo   [ChargeMeleeCombo__4CBot]
// TODO: decompile
// 0x00156ae0 size=704   CBot::BotShouldMakeKameTorps   [BotShouldMakeKameTorps__4CBot]
// TODO: decompile
// 0x00156da0 size=2670  CBot::MakeAttackChainSwoop   [MakeAttackChainSwoop__4CBot]
// TODO: decompile
// 0x00157810 size=2670  CBot::MakeNormalChainSwoop   [MakeNormalChainSwoop__4CBot]
// TODO: decompile
// 0x00158280 size=2670  CBot::MakeAttackAvoidChainSwoop   [MakeAttackAvoidChainSwoop__4CBot]
// TODO: decompile
// 0x00158cf0 size=3470  CBot::MakeAwayChainSwoop   [MakeAwayChainSwoop__4CBotP11CBaseEntity]
// TODO: decompile
// 0x00159a80 size=79    CBot::CanMeleeKickPlayer   [CanMeleeKickPlayer__4CBotP11CBasePlayer]
// TODO: decompile
// 0x0015aa30 size=202   CBot::MakeCombo   [MakeCombo__4CBot10EComboType]
// TODO: decompile
// 0x0015ab00 size=70    CBot::DeleteCombos   [DeleteCombos__4CBot]
// TODO: decompile
// 0x0015ab50 size=5486  CBot::MakeTeleMelee   [MakeTeleMelee__4CBotP11CBasePlayer]
// TODO: decompile
// 0x00169ed0 size=146   CBot::CheckDragonBalls   [CheckDragonBalls__4CBot]
// TODO: decompile
// 0x00169f70 size=350   CBot::SearchGatheredSpot   [SearchGatheredSpot__4CBot]
// TODO: decompile
// 0x0016a0d0 size=414   CBot::SearchDBGatherSpot   [SearchDBGatherSpot__4CBot]
// TODO: decompile
// 0x0016a270 size=1039  CBot::SearchDragonBall   [SearchDragonBall__4CBot]
// TODO: decompile
// 0x0016a680 size=299   CBot::SearchNearestWPForDBSpot   [SearchNearestWPForDBSpot__4CBot]
// TODO: decompile
// 0x0016fcc0 size=94    CBot::ResetMoveSpeed   [ResetMoveSpeed__4CBot]
// TODO: decompile
// 0x0016fd20 size=286   CBot::SetMoveDir   [SetMoveDir__4CBoti]
// TODO: decompile
// 0x0016fe40 size=1011  CBot::BotAim   [BotAim__4CBot]
// TODO: decompile
// 0x00170240 size=300   CBot::BotChangePitch   [BotChangePitch__4CBotff]
// TODO: decompile
// 0x00170370 size=298   CBot::BotChangeYaw   [BotChangeYaw__4CBotff]
// TODO: decompile
// 0x001704a0 size=896   CBot::CheckStrafe   [CheckStrafe__4CBot]
// TODO: decompile
// 0x00170820 size=123   CBot::TurnAround   [TurnAround__4CBot]
// TODO: decompile
// 0x001708a0 size=763   CBot::FindWaypoint   [FindWaypoint__4CBot]
// TODO: decompile
// 0x00170ba0 size=705   CBot::HeadToWaypoint   [HeadToWaypoint__4CBot]
// TODO: decompile
// 0x00170e70 size=274   CBot::ReachedGoalWP   [ReachedGoalWP__4CBot]
// TODO: decompile
// 0x00170f90 size=123   CBot::CurrentWPIsValid   [CurrentWPIsValid__4CBot]
// TODO: decompile
// 0x00171010 size=1754  CBot::BotCombatMovement   [BotCombatMovement__4CBot]
// TODO: decompile
// 0x001716f0 size=150   CBot::SetSwoopButton   [SetSwoopButton__4CBot]
// TODO: decompile
// 0x00171790 size=186   CBot::GoToAnPreviousLocation   [GoToAnPreviousLocation__4CBot]
// TODO: decompile
// 0x00173bf0 size=3686  CBot::GetBestEscapeSwoopDir   [GetBestEscapeSwoopDir__4CBotb]
// TODO: decompile
// 0x00174a60 size=350   CBot::BotShouldFallDown   [BotShouldFallDown__4CBot]
// TODO: decompile
// 0x00174bc0 size=157   CBot::DangerousPlForBot   [DangerousPlForBot__4CBotl]
// TODO: decompile
// 0x00174c60 size=117   CBot::TakeDamage   [TakeDamage__4CBotP9entvars_sT1fi]
// TODO: decompile
// 0x00174ce0 size=348   CBot::BotCanBeamJump   [BotCanBeamJump__4CBotb]
// TODO: decompile
// 0x00174e40 size=686   CBot::ClassifyAttack   [ClassifyAttack__4CBotPCc]
// TODO: decompile
// 0x001750f0 size=3461  CBot::SenseSurroundingAttacks   [SenseSurroundingAttacks__4CBotR13danger_info_s]
// TODO: decompile
// 0x00175e80 size=3335  CBot::SenseSurroundingPlayers   [SenseSurroundingPlayers__4CBotR13danger_info_s]
// TODO: decompile
// 0x00176b90 size=7     CBot::SenseSurroundingSounds   [SenseSurroundingSounds__4CBotR13danger_info_s]
// TODO: decompile
// 0x00176ba0 size=257   CBot::SenseHit   [SenseHit__4CBotR13danger_info_s]
// TODO: decompile
// 0x00176cb0 size=7454  CBot::BotSense   [BotSense__4CBot]
// TODO: decompile
// 0x001800f0 size=5410  CBot::MakeTask   [MakeTask__4CBot9ETaskCode]
// TODO: decompile
// 0x00181620 size=168   CBot::MakeAvoidSwoopTask   [MakeAvoidSwoopTask__4CBot]
// TODO: decompile
// 0x001816d0 size=107   CBot::KillCurrentTask   [KillCurrentTask__4CBot]
// TODO: decompile
// 0x00181740 size=225   CBot::BotPerformTasks   [BotPerformTasks__4CBot]
// TODO: decompile
// 0x00181830 size=852   CBot::CheckNecessarilyThings   [CheckNecessarilyThings__4CBot]
// TODO: decompile
// 0x00181b90 size=1369  CBot::CheckBotInternalStatus   [CheckBotInternalStatus__4CBot]
// TODO: decompile
// 0x001820f0 size=635   CBot::CheckBotMiscThings   [CheckBotMiscThings__4CBot]
// TODO: decompile
