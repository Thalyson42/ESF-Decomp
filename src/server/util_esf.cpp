// util_esf.cpp -- funcoes livres pequenas do ESF (util.cpp do mod).
// [OK] conferido contra o decompilado de hl_i386.so: UTIL_SetPlayerModel, IsKiBall,
//      UTIL_CreateEnt, UTIL_PlayerJoinTeam, TelePortPlayerToPlayer
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"

#define UE_INT(p, off)   (*(int *)((char *)(p) + (off)))
#define UE_FLOAT(p, off) (*(float *)((char *)(p) + (off)))

char IsNull(edict_t *pEdict);
char IsNull(CBaseEntity *pEntity);
char IsKiBall(edict_t *pEdict);
char IsBeamAttack(edict_t *pEdict);
char IsNonBeamAttack(edict_t *pEdict);
char IsOtherAttack(edict_t *pEdict);

// Define o modelo do jogador. "player" => "models/player.mdl"; senao "models/player/<nome>/<nome>.mdl".
// Tambem guarda o nome em CBasePlayer+0x168 (nome do modelo atual).
void UTIL_SetPlayerModel(CBasePlayer *pPlayer, const char *pszModel)
{
    if (!pPlayer)
        return;

    char szPath[128];
    if (!strcmp(pszModel, "player"))                       // [OK] iguais => formato curto
        sprintf(szPath, "models/%s.mdl", pszModel);
    else
        sprintf(szPath, "models/player/%s/%s.mdl", pszModel, pszModel);

    pPlayer->pev->modelindex = MODEL_INDEX(szPath);
    pPlayer->pev->model = MAKE_STRING(szPath);             // [OK] (ptr - gpGlobals->pStringBase)
    strcpy((char *)pPlayer + 0x168, pszModel);             // [?] nome do campo
}

// true se a entidade for um tiro de ki "pequeno" (kiblast / scattershot / renzoku).
char IsKiBall(edict_t *pEdict)
{
    if (pEdict && !IsNull(pEdict) && pEdict->v.classname)
    {
        char szClass[80];
        memset(szClass, 0, sizeof(szClass));
        strcpy(szClass, STRING(pEdict->v.classname));
        char bResult = 0;
        if (!strcmp(szClass, "kiblast") || !strcmp(szClass, "scattershot") || !strcmp(szClass, "renzoku"))
            bResult = 1;
        return bResult;
    }
    return 0;
}

// Cria uma entidade nomeada, posiciona, define o dono e chama Spawn. NULL se a engine falhar.
CBaseEntity *UTIL_CreateEnt(char *pszClassName, const Vector &vecOrigin, const Vector &vecAngles, edict_t *pOwner)
{
    edict_t *pent = CREATE_NAMED_ENTITY(MAKE_STRING(pszClassName));
    if (FNullEnt(pent))
        return NULL;

    CBaseEntity *pEntity = CBaseEntity::Instance(pent);
    pEntity->pev->owner = pOwner;
    pEntity->pev->origin = vecOrigin;
    pEntity->pev->angles = vecAngles;
    DispatchSpawn(pEntity->pev->pContainingEntity);
    return pEntity;
}

// Entra num time ("Good" = 1, "Evil" = 2) via vfunc do gamerules. Limite de 10 s entre trocas (se ja tem time).
void UTIL_PlayerJoinTeam(CBasePlayer *pPlayer, int iTeam)
{
    if (!g_pGameRules->IsTeamplay())                       // [OK] vtable +0x20 (no ESF vtable[6] = IsTeamplay; IsMultiplayer/IsDeathmatch foram removidos)
        return;

    if (UE_FLOAT(pPlayer, 0x79c) + 10.0 >= gpGlobals->time && pPlayer->pev->team)
        return;

    typedef void (*JoinTeamFn)(CGameRules *, CBasePlayer *, const char *);   // [?] vtable +0x114 (como em gamerules_esf.cpp)
    JoinTeamFn JoinTeam = (JoinTeamFn)(*(void ***)g_pGameRules)[0x114 / 4];

    if (iTeam == 1)
        JoinTeam(g_pGameRules, pPlayer, "Good");
    else if (iTeam == 2)
        JoinTeam(g_pGameRules, pPlayer, "Evil");

    UE_FLOAT(pPlayer, 0x79c) = gpGlobals->time;            // [?] nome do campo: hora da ultima troca de time
}

// Teleporta pB para 100 unidades a frente de pA (olhando no v_angle de pA), se o caminho estiver livre.
void TelePortPlayerToPlayer(edict_t *pA, edict_t *pB)
{
    UTIL_MakeVectors(pA->v.v_angle);

    Vector vecStart = pA->v.origin + Vector(0, 0, 20);
    Vector vecEnd = vecStart + gpGlobals->v_forward * 100;

    TraceResult tr;
    UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, head_hull, pA, &tr);   // hull 1 [OK]

    if (tr.flFraction >= 1.0)                              // [OK] fcomp 1.0
        SET_ORIGIN(pB, vecEnd);
}

// ---- IsNull (edict e CBaseEntity) [OK] ----
// TRUE se a entidade nao serve: ponteiro nulo, fora da lista da engine, slot livre ou marcada FL_KILLME (0x40000000).
char IsNull(edict_t *pEdict)
{
    if (pEdict && OFFSET(pEdict) && !pEdict->free && !(pEdict->v.flags & FL_KILLME))
        return 0;
    return 1;
}

char IsNull(CBaseEntity *pEntity)
{
    char bResult = 0;
    if (pEntity && pEntity->pev && !IsNull(pEntity->pev->pContainingEntity))
        return bResult;
    bResult = 1;
    return bResult;
}

// ---- classificacao de ataques de ki pelo classname [OK] ..0x17d1d0 ----
// copia o classname para um buffer de 80 bytes (como o original); FALSE se a entidade for invalida/sem classname
static BOOL GetAttackClassName(edict_t *pEdict, char *pszOut)
{
    if (!pEdict || IsNull(pEdict) || !pEdict->v.classname)
        return FALSE;
    memset(pszOut, 0, 80);
    strcpy(pszOut, STRING(pEdict->v.classname));
    return TRUE;
}

// raios: blueattack/burningattack/greenattack/purpleattack/yellowattack + kamehameha, gallitgun, masenko, powerbeam, mouthblast, finalflash
char IsBeamAttack(edict_t *pEdict)
{
    char szClass[80];
    if (!GetAttackClassName(pEdict, szClass))
        return 0;
    char bResult = 0;
    if (!strcmp(szClass, "blueattack") || !strcmp(szClass, "burningattack") || !strcmp(szClass, "greenattack") ||
        !strcmp(szClass, "purpleattack") || !strcmp(szClass, "yellowattack") || !strcmp(szClass, "kamehameha") ||
        !strcmp(szClass, "gallitgun") || !strcmp(szClass, "masenko") || !strcmp(szClass, "powerbeam") ||
        !strcmp(szClass, "mouthblast") || !strcmp(szClass, "finalflash"))
        bResult = 1;
    return bResult;
}

// ataques grandes que nao sao raios (note que os nomes com espaco sao os classnames reais dessas entidades)
char IsNonBeamAttack(edict_t *pEdict)
{
    char szClass[80];
    if (!GetAttackClassName(pEdict, szClass))
        return 0;
    char bResult = 0;
    if (!strcmp(szClass, "bigbang") || !strcmp(szClass, "finishingbuster") || !strcmp(szClass, "Spirit Bomb") ||
        !strcmp(szClass, "Special Beam Cannon") || !strcmp(szClass, "Death Ball") || !strcmp(szClass, "shieldattack") ||
        !strcmp(szClass, "Kame Torpedo") || !strcmp(szClass, "Scattering Beam"))
        bResult = 1;
    return bResult;
}

char IsOtherAttack(edict_t *pEdict)
{
    char szClass[80];
    if (!GetAttackClassName(pEdict, szClass))
        return 0;
    char bResult = 0;
    if (!strcmp(szClass, "Destructo Disc") || !strcmp(szClass, "Frieza Disc") || !strcmp(szClass, "rock"))
        bResult = 1;
    return bResult;
}

// qualquer ataque (raio, nao-raio, bola de ki ou outro)
char IsAttack(edict_t *pEdict)
{
    if (pEdict && !IsNull(pEdict) && pEdict->v.classname)
    {
        char bResult = 0;
        if (IsBeamAttack(pEdict) || IsNonBeamAttack(pEdict) || IsKiBall(pEdict) || IsOtherAttack(pEdict))
            bResult = 1;
        return bResult;
    }
    return 0;
}

// ---- WrapAngles [OK] ----
// Traz cada componente para perto de [-180,180]. ATENCAO: reproduz o original literalmente (trunca para zero e soma/subtrai (n+1)*360),
// entao para valores muito grandes ou muito negativos o resultado pode continuar fora do intervalo.
// UTIL_WrapAngle [OK] -- versao de um unico angulo (mesma conta de WrapAngles)
float UTIL_WrapAngle(float a)
{
    int n;
    if (a > 180.0f)
    {
        n = (int)(a / 360.0);
        a = (float)(a - (double)((n + 1) * 360));
    }
    if (a < -180.0f)
    {
        n = (int)(a / 360.0);
        a = (float)((double)((n + 1) * 360) + a);
    }
    return a;
}

Vector WrapAngles(Vector vecAngles)
{
    static Vector angles;                                  // [OK] o original usa um estatico local (guard tmp_0)
    angles = vecAngles;
    angles.x = UTIL_WrapAngle(angles.x);
    angles.y = UTIL_WrapAngle(angles.y);
    angles.z = UTIL_WrapAngle(angles.z);
    return angles;
}

// ---- UTIL_IsValidPlayer [OK] ----
// pPlayer valido e humano/bot conectado. bAlive: exige vfunc +0x8c (IsAlive?) e campo +0x328 zerado. bBotOnly: com o BotManager ativo
// (byte +0xd4a), so aceita jogadores que sejam bots (FL_FAKECLIENT).
extern class CBotManager BotManager;
#define PL_VCALL(p, off) ((int (*)(void *))(*(void ***)((char *)(p) + 0x60))[(off) / 4])((void *)(p))   // [?] vtable do jogador em +0x60 (GCC 2.95)

bool UTIL_IsValidPlayer(CBasePlayer *pPlayer, bool bAlive, bool bBotOnly)
{
    if (pPlayer && pPlayer->pev && !IsNull((CBaseEntity *)pPlayer))
    {
        bool bContinue = true;
        if (bBotOnly && *((char *)&BotManager + 0xd4a))    // [?] nome do campo do BotManager
        {
            bool bIsBot = false;
            if (!PL_VCALL(pPlayer, 0xa4))                  // [?] vfunc +0xa4 (IsNetClient?)
                bIsBot = (pPlayer->pev->flags & FL_FAKECLIENT) != 0;
            bContinue = bIsBot;
        }
        if (bContinue)
        {
            if (strcmp(STRING(pPlayer->pev->netname), "") &&
                (!bAlive || (PL_VCALL(pPlayer, 0x8c) && !UE_INT(pPlayer, 0x328))) &&   // [?] vfunc +0x8c (IsAlive?)
                (pPlayer->pev->flags & FL_CLIENT))
                return true;
        }
    }
    return false;
}

// ---- UTIL_EntDir [OK] ----
// Direcao relativa do ponto vecTarget em relacao a entidade (usa os eixos de pev->angles). Retorna flags:
//   direita 4 / esquerda 2,  abaixo 64 / acima 32,  frente 16 / tras 8
// (compara a distancia do alvo a um ponto 100 unidades a cada lado do eixo)
int UTIL_EntDir(CBaseEntity *pEntity, Vector vecTarget)
{
    Vector vecOrigin = pEntity->pev->origin;
    int iDir = 0;

    UTIL_MakeVectors(pEntity->pev->angles);

    // direita/esquerda
    Vector vecMinus = vecOrigin - gpGlobals->v_right * 100;
    Vector vecPlus = vecOrigin + gpGlobals->v_right * 100;
    float fDistMinus = (vecTarget - vecMinus).Length();
    float fDistPlus = (vecTarget - vecPlus).Length();
    if (fDistPlus < fDistMinus)
        iDir = 4;
    else if (fDistPlus > fDistMinus)
        iDir = 2;

    // altura
    if (vecOrigin.z > vecTarget.z)
        iDir |= 64;
    else if (vecOrigin.z < vecTarget.z)
        iDir |= 32;

    // frente/tras
    vecMinus = vecOrigin - gpGlobals->v_forward * 100;
    vecPlus = vecOrigin + gpGlobals->v_forward * 100;
    fDistMinus = (vecTarget - vecMinus).Length();
    fDistPlus = (vecTarget - vecPlus).Length();
    if (fDistPlus < fDistMinus)
        iDir |= 16;
    else if (fDistPlus > fDistMinus)
        iDir |= 8;

    return iDir;
}

// ---- UTIL_GetHeadingPercentage [OK] ----
// Quanto o alvo (pTarget) esta vindo na direcao de pSelf: compara a distancia atual com a distancia prevista 0.01 s depois.
// Retorna (dist_atual - dist_prevista) / (velocidade * 0.01) * 100 (truncado para short); 0 se parado ou se afastando.
extern Vector PredictEntityPos(CBaseEntity *pEntity, float fTime, bool bFlag);

short UTIL_GetHeadingPercentage(CBaseEntity *pSelf, CBaseEntity *pTarget)
{
    if (!pSelf || !pTarget)
        return 0;

    float fSpeed = pTarget->pev->velocity.Length();
    if (fSpeed == 0)
        return 0;

    Vector vecPredicted = PredictEntityPos(pTarget, 0.01f, false);
    float fDistNow = (pTarget->pev->origin - pSelf->pev->origin).Length();
    float fDistPredicted = (vecPredicted - pSelf->pev->origin).Length();
    if (fDistPredicted > fDistNow)
        return 0;

    float fSpeed2 = pTarget->pev->velocity.Length();
    return (short)(int)((fDistNow - fDistPredicted) / (fSpeed2 * 0.01f) * 100.0f);
}

// ---- PredictEntityPos [OK] ----
// Posicao prevista da entidade daqui a fTime segundos, seguindo a velocidade atual. Parada (< 10 u/s) => a propria origem.
// Com bTrace, o trajeto e limitado por um TraceHull (hull 1) e retorna o ponto final do trace.
Vector PredictEntityPos(CBaseEntity *pEntity, float fTime, bool bTrace)
{
    if (pEntity->pev->velocity.Length() < 10.0f)
        return pEntity->pev->origin;

    float fDist = pEntity->pev->velocity.Length() * fTime;
    Vector vecStart = pEntity->pev->origin;
    Vector vecDir = pEntity->pev->velocity.Normalize();    // (0,0,1) se o comprimento for 0 (SDK)
    Vector vecEnd = vecStart + vecDir * fDist;

    if (bTrace)
    {
        TraceResult tr;
        UTIL_TraceHull(vecStart, vecEnd, dont_ignore_monsters, head_hull, pEntity->pev->pContainingEntity, &tr);
        return tr.vecEndPos;
    }
    return vecEnd;
}

// ---- UTIL_DamagePlayer [OK] ----
// Causa dano em pTarget em nome de pPlayer usando uma entidade "info_target" estatica como inflictor (classname = pszClassName,
// util para o aviso de morte). O calculo de posicao antes da copia da origem e morto no original, mas e reproduzido.
float UTIL_DamagePlayer(CBasePlayer *pPlayer, CBasePlayer *pTarget, const char *pszClassName, float flDamage)
{
    static CBaseEntity *pDamageEnt = NULL;                 // [OK] estatico local (pDamageEnt.2804)

    if (!pDamageEnt)
    {
        pDamageEnt = UTIL_CreateEnt("info_target", Vector(0, 0, 0), Vector(0, 0, 0), NULL);
        if (!pDamageEnt)
            return 0;                                      // [?] valor de retorno indefinido no original
    }

    Vector vecAngles = WrapAngles(pTarget->pev->angles + Vector(180, 180, 180));
    UTIL_MakeVectors(vecAngles);

    Vector vecDir = pDamageEnt->pev->origin.Normalize();
    pDamageEnt->pev->origin = gpGlobals->v_forward * 10 + vecDir * 180;   // sobrescrito logo abaixo

    pDamageEnt->pev->origin = pPlayer->pev->origin;
    pDamageEnt->pev->owner = pPlayer->pev->pContainingEntity;
    pDamageEnt->pev->classname = MAKE_STRING(pszClassName);

    pTarget->TakeDamage(pDamageEnt->pev, pPlayer->pev, flDamage, 0);       // vtable +0x34
    return flDamage;
}

// ---- UTIL_Printf [OK] ----
// Imprime msg para pEntity (destino iDest: 1 e 2 vao para o console do servidor). Sem entidade valida, usa o host do listen server
// (BotManager+0xc, ou o mundo se vazio). Dedicado => ServerPrint.
void UTIL_Printf(const char *pszMsg, int iDest, edict_t *pEntity)
{
    if (IsNull(pEntity))
    {
        CBaseEntity *pHost = NULL;
        if (!IS_DEDICATED_SERVER())
        {
            edict_t *pHostEdict = *(edict_t **)((char *)&BotManager + 0xc);   // [?] nome do campo
            if (!pHostEdict)
                pHostEdict = INDEXENT(0);
            if (pHostEdict)
                pHost = (CBaseEntity *)pHostEdict->pvPrivateData;
        }
        if (!IsNull(pHost))
        {
            pHost = NULL;
            if (!IS_DEDICATED_SERVER())
            {
                edict_t *pHostEdict = *(edict_t **)((char *)&BotManager + 0xc);
                if (!pHostEdict)
                    pHostEdict = INDEXENT(0);
                if (pHostEdict)
                    pHost = (CBaseEntity *)pHostEdict->pvPrivateData;
            }
            pEntity = pHost->pev->pContainingEntity;
        }
    }

    if ((unsigned int)(iDest - 1) > 1 && !IsNull(pEntity))
        ClientPrint(&pEntity->v, iDest, pszMsg, NULL, NULL, NULL, NULL);
    else
        (*g_engfuncs.pfnServerPrint)(pszMsg);
}

// ---- UTIL_DrawBeam [OK] ----
// Envia (so para pPlayer) um TE_BEAMPOINTS de vecStart a vecEnd: startframe 1, framerate 10.
extern int m_iSpriteTexture;

void UTIL_DrawBeam(edict_t *pPlayer, Vector vecStart, Vector vecEnd, int iWidth, int iNoise, int iRed, int iGreen, int iBlue,
                   int iBrightness, int iSpeed, int iLife)
{
    MESSAGE_BEGIN(MSG_ONE, SVC_TEMPENTITY, NULL, pPlayer);
        WRITE_BYTE(TE_BEAMPOINTS);
        WRITE_COORD(vecStart.x);
        WRITE_COORD(vecStart.y);
        WRITE_COORD(vecStart.z);
        WRITE_COORD(vecEnd.x);
        WRITE_COORD(vecEnd.y);
        WRITE_COORD(vecEnd.z);
        WRITE_SHORT(m_iSpriteTexture);
        WRITE_BYTE(1);                 // startframe
        WRITE_BYTE(10);                // framerate
        WRITE_BYTE(iLife);             // [?] ordem dos argumentos: width, noise, r, g, b, brightness, speed, life
        WRITE_BYTE(iWidth);
        WRITE_BYTE(iNoise);
        WRITE_BYTE(iRed);
        WRITE_BYTE(iGreen);
        WRITE_BYTE(iBlue);
        WRITE_BYTE(iBrightness);
        WRITE_BYTE(iSpeed);
    MESSAGE_END();
}
