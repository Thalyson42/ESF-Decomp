// bot.h -- CBot (bot do ESF) e CBaseTask. Os campos do CBot sao lidos por offset (estrutura grande, ~0x1100 bytes);
// BOTF(bot, tipo, offset) da acesso nomeado. Offsets [OK] vem do decompilado; nomes [?] sao interpretacao.
#pragma once
class CBot;
#define BOTF(b, type, off) (*(type *)((char *)(b) + (off)))
#define BOT_ENEMY(b)         BOTF(b, CBasePlayer *, 0xb6c)   // inimigo atual
#define BOT_SKILL(b)         BOTF(b, float *, 0xa00)         // [?] tabela de habilidade: [0],[1] atraso geral; [0x30/4],[0x34/4] atraso de inimigo
#define BOT_ENEMY_DELAY(b)   BOTF(b, float, 0xb3c)           // [?] proximo instante para reavaliar inimigos
#define BOT_FASTMODE(b)      BOTF(b, short, 0xba4)           // [?] >0 = sem atraso geral
#define BOT_TASKMODE(b)      BOTF(b, int, 0x1068)            // [?] 12 = combo ativo
#define BOT_COMBO(b)         BOTF(b, CBotCombo *, 0x1070)    // combo em andamento

enum EComboType { COMBO_0 = 0 };   // [?] valores reais ainda nao mapeados

class CBotCombo
{
public:
    CBotCombo(CBot *pBot, EComboType type);   // 24 bytes [OK]
    CBot *m_pBot;                              // [?]
    EComboType m_Type;                         // [?]
    int pad[4];
};

class CBot : public CBasePlayer
{
public:
    CBasePlayer *GetBestEnemyFromList(void);
};

struct danger_info_s;
extern BOOL UTIL_IsValidPlayer(CBaseEntity *pEnt, short a, short b);   // [?] assinatura; recuperar de decomp_raw (funcao livre)

class CBaseTask
{
public:
    float m_flDelay;        // +0x00 [OK] proximo instante em que a tarefa pode agir
    int   m_iState;         // +0x04 [OK] GetTaskState (2 = combo)
    CBot *m_pBot;           // +0x08 [OK]
    CBasePlayer *m_pEnemy;  // +0x10 [OK]
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
