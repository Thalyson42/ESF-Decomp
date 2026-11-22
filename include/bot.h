// bot.h -- CBot (bot do ESF) e CBaseTask. Os campos do CBot sao lidos por offset (estrutura grande, ~0x1100 bytes);
// BOTF(bot, tipo, offset) da acesso nomeado. Offsets [OK] vem do decompilado; nomes [?] sao interpretacao.
#pragma once
class CBot;
struct danger_info_s;
#define BOTF(b, type, off) (*(type *)((char *)(b) + (off)))
#define TASKF(type, off)    (*(type *)((char *)this + (off)))   // campo proprio da tarefa por offset (a partir de this)
#define BOT_ENEMY(b)         BOTF(b, CBasePlayer *, 0xb6c)   // inimigo atual
#define BOT_SKILL(b)         BOTF(b, float *, 0xa00)         // [?] tabela de habilidade: [0],[1] atraso geral; [0x30/4],[0x34/4] atraso de inimigo
#define BOT_ENEMY_DELAY(b)   BOTF(b, float, 0xb3c)           // [?] proximo instante para reavaliar inimigos
#define BOT_FASTMODE(b)      BOTF(b, short, 0xba4)           // [?] >0 = sem atraso geral
#define BOT_TASKMODE(b)      BOTF(b, int, 0x1068)            // [?] 12 = combo ativo
#define BOT_P37C(b)          BOTF(b, int, 0x37c)             // [?] flag de estado do jogador (lutando/voando)
#define BOT_P3E4(b)          BOTF(b, int, 0x3e4)             // [?] estado: 3/4/5 = defendendo/preso
#define BOT_P770(b)          BOTF(b, int, 0x770)             // [?] 
#define BOT_COMBO(b)         BOTF(b, CBotCombo *, 0x1070)    // combo em andamento

enum EComboType { COMBO_0 = 0 };
enum EComboUse { COMBO_USE_ALWAYS = 0, COMBO_USE_NEVER = 1, COMBO_USE_RANDOM = 2 };   // [?] nomes; 0 e 2 confirmados pelo switch de PrepareAttack   // [?] valores reais ainda nao mapeados

class CBotCombo
{
public:
    CBotCombo(CBot *pBot, EComboType type);   // 24 bytes [OK]
    int   f_00;
    void *f_04;             // [?] provavelmente o CBot
    void *f_08;             // [?] tipo do combo
    int   f_0c;
    int   m_iStatus;        // +0x10 [OK] 0 = nao ativado, 2 = terminou
    int   m_iSavedMode;     // +0x14 [OK] copiado de volta para BOT_TASKMODE ao terminar
    void  Activate(void);
    void  ExcuteCombo(void);   // (sic) nome original
};

extern int g_teamplay;   // [OK] flag global de teamplay
struct bot_attack_s { int m_iAttack; char pad[0x42]; char m_fBeamJump; };   // [?] +0x00 id do ataque (7,10,12,13,15,16,19,22,24,33 usados), +0x46 usado em beam jump

// entrada de BotWeaponInfoTable [OK] 84 bytes (id 0 termina a tabela)
struct bot_weapon_info_s { int iAttack; char szWeapon[64]; char fSecondary; char fCombo; char fBeamJump; char fBeam; float flCharge; float flMinDist; float flMaxDist; };
extern bot_weapon_info_s BotWeaponInfoTable[];

class CBot : public CBasePlayer
{
public:
    virtual void Spawn(void);                                                        // vtable[0]  [OK]
    virtual int  TakeDamage(entvars_t *pevInflictor, entvars_t *pevAttacker, float flDamage, int bitsDamageType);   // [OK]
    virtual BOOL IsNetClient(void);                                                  // [OK] retorna 0
    virtual void Touch(CBaseEntity *pOther);                                         // [OK]
    int   GetHealth(void);
    int   GetKi(void);
    void  SetHealth(int iHealth);
    void  SetKi(int iKi);
    BOOL  IsSuperBot(void);
    float GetDistance(Vector vecPos);
    BOOL  EnemyIsInList(CBasePlayer *pPlayer);
    BOOL  EntIsInFOV(CBaseEntity *pEnt);
    BOOL  EntHeadsToBot(CBaseEntity *pEnt);
    BOOL  AttackIsBeam(bot_weapon_info_s *pAttack);
    BOOL  BotCanAscend(void);
    void  SetIdealAngles(Vector vecAngles);
    void  AimToVec(Vector vecTarget);
    void  SetSkill(unsigned char ucLevel, struct bot_skill_s *pSkill);
    void  MakeCombo(EComboType type);
    int   ClassifyAttack(const char *szClassname);
    void  CheckDragonBalls(void);
    void  BotThink(void);
    void  BotChangePitch(float flSpeed, float flTarget);
    void  BotChangeYaw(float flSpeed, float flTarget);
    BOOL  BotCanPowerUp(void);
    BOOL  BotShouldMakeKameTorps(void);
    void  CheckNecessarilyThings(void);
    void  BotSense(void);
    void  CheckBotInternalStatus(void);
    void  CheckBotMiscThings(void);
    void  BotAim(void);
    void  LetBotJoinTeam(void);
    void  LetBotPickAClass(void);
    void  MakeTask(int iTask);
    void  KillCurrentTask(void);
    void  BotPerformTasks(void);
    BOOL  DangerousPlForBot(long lPL);
    void  MakeMeleeComboList(void);                    // [?] CBot::MakeTask(int) (modo da tarefa +0x1068)
    void  ClearMeleeComboList(void);
    BOOL  MakeTeleMelee(CBasePlayer *pEnemy);
    BOOL  HasWeapon(int iWeapon);                       // [OK] 0x1534b0, ver src/server/bot.cpp
    void  MakeAvoidSwoopTask(void);
    EComboType MakeAttackAvoidChainSwoop(void);
    short GetBestEscapeSwoopDir(bool bFlag);
    float EnemyIsInMeleeRange(CBasePlayer *pEnemy);
    void  SenseSurroundingSounds(danger_info_s &Danger);
    void  CreateInit(short sTeam, short sClass, short sLevel, short sPersonality, short sSBot);
    void  SenseHit(danger_info_s &Danger);
    void  SenseSurroundingAttacks(danger_info_s &Danger);
    void  SenseSurroundingPlayers(danger_info_s &Danger);
    BOOL  SearchGatheredSpot(void);
    BOOL  SearchDBGatherSpot(void);
    BOOL  SearchDragonBall(void);
    short SearchNearestWPForDBSpot(void);
    void  CheckSBotStuff(void);
    CBaseEntity *GetNearestHostileAttack(float flMinDist, float flMaxDist);
    int   SetComboChargeButton(MELEE_STRENGTH iStrength, int iButtons);
    void  ManageEnemyList(void);                  // [?]
    CBasePlayer *BotFindEnemy(void);
    void  BotPreThink(void);
    CBasePlayer *GetBestEnemyFromList(void);
    void ResetMoveSpeed(void);
    void SetMoveDir(int iDir);
    void DeleteCombos(void);
    void ToggleTurbo(short fOn);
    void GoToAnPreviousLocation(void);
    void BotCombatMovement(void);
    void AddShootDelay(void);
    BOOL CanMeleeKickPlayer(CBasePlayer *pPlayer);
    BOOL CanAttackPlayer(CBasePlayer *pPlayer);
    void ShootHealthBeam(CBasePlayer *pPlayer);
    BOOL BotShouldFallDown(void);
    void MakePlayerList(void);
    void TurnAround(void);
    EComboType MakeAttackChainSwoop(void);               // [?] 38 = nenhuma
    EComboType MakeAwayChainSwoop(CBaseEntity *pEnemy);  // [OK] arg = CBaseEntity* (mangled P11CBaseEntity)
    EComboType MakeNormalChainSwoop(void);               // [?]
    EComboType AvoidAttacksWhileSwoop(void);             // [?]
    void SetSwoopButton(void);                           // [?]
    void CheckStrafe(void);
    BOOL IsValidEnemy(CBasePlayer *pPlayer);
    void AimAtEnemy(CBasePlayer *pPlayer);
    void ChargeMeleeCombo(void);
    BOOL CanReachPoint(const Vector &vecPoint);   // [?] vtable +0xe4
    BOOL ReachedGoalWP(void);
    BOOL CurrentWPIsValid(void);
    BOOL HeadToWaypoint(void);
    BOOL FindWaypoint(void);
    BOOL CheckForHuntEnemy(void);
    BOOL BotCanBeamJump(short fArg);
    void StartBlock(void);
    void StopBlock(void);
    Vector GetAimAngles(Vector vecTarget);   // [OK] mangled: GetAimAngles__4CBotG6Vector (retorna Vector por valor)
};

extern float UTIL_WrapAngle(float flAngle);   // [?] funcao livre do ESF
struct danger_info_s { float m_fl0, m_fl4, m_fl8, m_flC, m_fl10; char pad14[4]; short m_iDanger; char m_cFlags[3]; };   // [OK] SenseHit: +0x18 short (>59 = ataque), +0x1a..0x1c bytes zerados
extern BOOL UTIL_IsValidPlayer(CBaseEntity *pEnt, short a, short b);   // [?] assinatura; recuperar de decomp_raw (funcao livre)

class CBaseTask
{
public:
    float m_flDelay;        // +0x00 [OK] proximo instante em que a tarefa pode agir
    int   m_iState;         // +0x04 [OK] GetTaskState (2 = combo)
    CBot *m_pBot;           // +0x08 [OK]
    edict_t *m_pEdict;      // +0x0c [OK] edict do bot; edict+0x200 = v.button (entvars +0x180), edict+0x1e0 = v.health, +0x2e0 = v.fuser4 (ki)
    CBasePlayer *m_pEnemy;  // +0x10 [OK]
    CBaseTask(CBot *pBot);                       // [OK] __9CBaseTaskP4CBot (basetask.cpp)
    virtual ~CBaseTask() {}
    virtual int  GetNesserelyChecks(void) = 0;   // slot 1 [OK] mascaras de verificacao do bot (ver CBot::CheckBotInternalStatus etc.)
    virtual int  GetBotStatusChecks(void) = 0;   // slot 2
    virtual int  GetBotSenseChecks(void) = 0;    // slot 3
    virtual int  GetBotMiscChecks(void) = 0;     // slot 4
    virtual void TaskThink(void) = 0;            // slot 5
    virtual int  TaskIdentify(void) = 0;         // slot 6
    virtual BOOL ShouldManageEnemies(void) = 0;  // slot 7
    virtual void ManageEnemies(void);                         // slot 8
    virtual BOOL ReactOnDanger(danger_info_s *p) { return 1; }  // slot 9 [OK] retorna 1
    float GetTaskDelay(void) { return m_flDelay; }
    int   GetTaskState(void) { return m_iState; }
    void  SetGeneralDelay(void);
    void  MakeCombo(EComboType type);
};

// ---- Waypoints (funcoes livres) ----
struct waypoint_s { float x, y, z; int flags; };       // [OK] 16 bytes por waypoint
extern waypoint_s waypoints[];
extern int num_waypoints;
extern short WaypointRouteFromTo(short iFrom, short iTo, int iTeam);
extern short WaypointFindPath(void **pPath, int *pIndex, short iWP, int iTeam);   // [?] iterador de caminhos a partir de iWP
