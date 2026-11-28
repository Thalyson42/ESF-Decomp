// util_esf.cpp -- funcoes livres pequenas do ESF (util.cpp do mod).
// [OK] conferido contra o decompilado de hl_i386.so: UTIL_SetPlayerModel, IsKiBall,
//      UTIL_CreateEnt, UTIL_PlayerJoinTeam, TelePortPlayerToPlayer
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "esf_util.h"

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

// ---- UTIL_AngleMod ----
// Versao do ESF (NAO e a do SDK, que usa mascara de 16 bits): trunca a/360 para zero e soma (n+1)*360 se negativo,
// ou subtrai n*360 se >= 360. Valores em [0,360) passam sem mudanca.
float UTIL_AngleMod(float a)
{
    if (a < 0.0f)
    {
        int n = (int)(a / 360.0);
        return (float)(a + (double)((n + 1) * 360));
    }
    else if (a >= 360.0f)
    {
        int n = (int)(a / 360.0);
        return (float)(a - (double)(n * 360));
    }
    return a;
}

// ---- UTIL_DrawBeamToAll ----
// Desenha o mesmo feixe (vida 4) para todos os jogadores conectados, exceto bots (FL_FAKECLIENT).
void UTIL_DrawBeamToAll(Vector vecStart, Vector vecEnd, int iWidth, int iNoise, int iRed, int iGreen, int iBlue,
                        int iBrightness, int iSpeed)
{
    for (int i = 1; i <= gpGlobals->maxClients; i++)
    {
        edict_t *pPlayer = INDEXENT(i);
        if (IsNull(pPlayer))
            continue;
        if (pPlayer->v.flags & FL_FAKECLIENT)
            continue;
        UTIL_DrawBeam(pPlayer, vecStart, vecEnd, iWidth, iNoise, iRed, iGreen, iBlue, iBrightness, iSpeed, 4);
    }
}

// ---- FEntIsVisible ----
// Linha de visao entre os "olhos" (origin + view_ofs) de pev e de pevTarget, ignorando monstros e o proprio pev.
// ATENCAO: o binario testa (!fInOpen || !fInWater) && flFraction == 1.0 (confirmado no assembly), nao fAllSolid/fStartSolid.
BOOL FEntIsVisible(entvars_t *pev, entvars_t *pevTarget)
{
    Vector vecLookerOrigin = pev->origin + pev->view_ofs;
    Vector vecTargetOrigin = pevTarget->origin + pevTarget->view_ofs;

    TraceResult tr;
    UTIL_TraceLine(vecLookerOrigin, vecTargetOrigin, ignore_monsters, pev->pContainingEntity, &tr);

    if ((!tr.fInOpen || !tr.fInWater) && tr.flFraction == 1.0f)
        return TRUE;
    return FALSE;
}

// ---- BuildBotFileName ----
// szOut = "esf/esf_bot/" + szDir + "/" + szFile (a barra e o nome so entram se ambos szDir e szFile forem nao vazios;
// com so szDir, vira "esf/esf_bot/<szDir>"). Sem szDir, fica "esf/esf_bot/".
void BuildBotFileName(char *szOut, const char *szDir, const char *szFile)
{
    strcpy(szOut, "esf/esf_bot/");
    if (!szDir)
        return;
    if (*szDir && szFile && *szFile)
    {
        strcat(szOut, szDir);
        strcat(szOut, "/");
        strcat(szOut, szFile);
        return;
    }
    if (!*szDir)
        return;
    strcat(szOut, szDir);
}

// ---- IsValidFile ---- true se o arquivo abre para leitura
BOOL IsValidFile(const char *szPath)
{
    FILE *fp = fopen(szPath, "r");
    if (fp)
    {
        fclose(fp);
        return 1;
    }
    return 0;
}

// ---- UTIL_PlayerByIndex ---- igual ao SDK: indice 1..maxClients, edict nao livre -> instancia
CBaseEntity *UTIL_PlayerByIndex(int playerIndex)
{
    if (playerIndex <= 0 || playerIndex > gpGlobals->maxClients)
        return NULL;
    edict_t *pEdict = INDEXENT(playerIndex);
    if (!pEdict || pEdict->free)
        return NULL;
    return CBaseEntity::Instance(pEdict);
}

// ---- UTIL_DBsAreActive ---- [?] offsets +0x108/+0x10c/+0x110 do dragonball sem nome conhecido
BOOL UTIL_DBsAreActive(void)
{
    CBaseEntity *pDB = UTIL_FindEntityByClassname(NULL, "dragonball");
    if (IsNull(pDB))
        return FALSE;
    int *f = (int *)pDB;
    if (f[0x10c / 4] && f[0x108 / 4] != 8)
        return !f[0x110 / 4];
    return FALSE;
}

// ---- UTIL_DBsAreGathered ---- [?] campo +0x15c == 19
BOOL UTIL_DBsAreGathered(void)
{
    CBaseEntity *pDB = UTIL_FindEntityByClassname(NULL, "dragonball");
    if (IsNull(pDB))
        return FALSE;
    return *(int *)((char *)pDB + 0x15c) == 19;
}

// ---- UTIL_GetAttackFromPlayerByName ---- primeiro ent de classname cujo dono (+0x198) e o do jogador (+0x208) [?]
CBaseEntity *UTIL_GetAttackFromPlayerByName(CBasePlayer *pPlayer, const char *szClassname)
{
    CBaseEntity *pEnt = NULL;
    while ((pEnt = UTIL_FindEntityByClassname(pEnt, szClassname)) != NULL)
    {
        if (*(int *)((char *)pEnt + 0x198) == *(int *)((char *)pPlayer + 0x208) && !IsNull(pEnt))
            return pEnt;
    }
    return NULL;
}

// ---- UTIL_GetLastAttackFromPlayer ---- ultimo "magic_attack" (globalname) do jogador
CBaseEntity *UTIL_GetLastAttackFromPlayer(CBasePlayer *pPlayer)
{
    CBaseEntity *pEnt = NULL, *pLast = NULL;
    int owner = *(int *)((char *)pPlayer + 0x208);
    while ((pEnt = UTIL_FindEntityByString(pEnt, "globalname", "magic_attack")) != NULL)
    {
        if (!IsNull(pEnt) && *(int *)((char *)pEnt + 0x198) == owner)
            pLast = pEnt;
    }
    return pLast;
}

// ---- FileIsOlder ---- sempre TRUE
BOOL FileIsOlder(const char *szFile1, const char *szFile2)
{
    return 1;
}

// ---- EntityHeadsToPlayer [OK] ---- heading (short) > 64, comparacao com sinal
BOOL EntityHeadsToPlayer(CBasePlayer *pPlayer, CBaseEntity *pEnt)
{
    return UTIL_GetHeadingPercentage(pPlayer, pEnt) > 64;
}

// ---------------------------------------------------------------------------------------------------------
// UTIL_PrintEntity @0x179db0 [OK] -- despeja todos os campos do entvars de uma entidade em "botN.txt" (ou no arquivo dado).
// Funcao de debug. Reproduz (por fidelidade) o descuido do original: Length/Length2D de basevelocity, clbasevelocity e
// avelocity sao calculados a partir da VELOCITY. O ESF nao imprime iuser4.
static const char *PE_Name(int v, const char *const *names, int n)   // nome por indice, "???" fora da faixa
{
    return (v >= 0 && v < n && names[v]) ? names[v] : "???";
}
static void PE_Trim(char *sz)     // tira o " | " final
{
    int n = (int)strlen(sz);
    if (n > 2)
        sz[n - 3] = 0;
}
static void PE_Ent(char *out, edict_t *pEnt)        // "Entity #%d (\"%s\")" ou "NULL"
{
    if (pEnt)
        sprintf(out, "Entity #%d (\"%s\")", ENTINDEX(pEnt), STRING(pEnt->v.classname));
    else
        sprintf(out, "NULL");
}
static void PE_Vec(FILE *f, const char *name, const float *v)
{
    fprintf(f, "pEntity->v.%s = Vector (%.1f, %.1f, %.1f)\n", name, v[0], v[1], v[2]);
}
static void PE_VecLen(FILE *f, const char *name, const float *v, const float *vel)
{
    float fl2D = sqrt(vel[0] * vel[0] + vel[1] * vel[1]);
    float fl3D = sqrt(vel[0] * vel[0] + vel[1] * vel[1] + vel[2] * vel[2]);
    fprintf(f, "pEntity->v.%s = Vector (%.1f, %.1f, %.1f) - Length %.3f - Length2D %.3f\n", name, v[0], v[1], v[2], fl3D, fl2D);
}

void UTIL_PrintEntity(edict_t *pEntity, const char *szFile)
{
    char szName[256], sz[256];
    if (!szFile)
        sprintf(szName, "bot%i.txt", ENTINDEX(pEntity));
    else
        strcpy(szName, szFile);
    FILE *f = fopen(szName, "a");
    entvars_t *v = &pEntity->v;
    fprintf(f, "\n");
    fprintf(f, "pEntity->v.classname = %d (\"%s\")\n", v->classname, STRING(v->classname));
    fprintf(f, "pEntity->v.globalname = %d (\"%s\")\n", v->globalname, STRING(v->globalname));
    PE_Vec(f, "origin", v->origin);
    PE_Vec(f, "oldorigin", v->oldorigin);
    PE_VecLen(f, "velocity", v->velocity, v->velocity);
    PE_VecLen(f, "basevelocity", v->basevelocity, v->velocity);
    PE_VecLen(f, "clbasevelocity", v->clbasevelocity, v->velocity);
    PE_Vec(f, "movedir", v->movedir);
    PE_Vec(f, "angles", v->angles);
    PE_VecLen(f, "avelocity", v->avelocity, v->velocity);
    PE_Vec(f, "punchangle", v->punchangle);
    PE_Vec(f, "v_angle", v->v_angle);
    PE_Vec(f, "endpos", v->endpos);
    PE_Vec(f, "startpos", v->startpos);
    fprintf(f, "pEntity->v.impacttime = %.3f\n", v->impacttime);
    fprintf(f, "pEntity->v.starttime = %.3f\n", v->starttime);
    {
        static const char *const n[] = { "nothing", "force view angles", "add velocity" };
        fprintf(f, "pEntity->v.fixangle = %d (%s)\n", v->fixangle, PE_Name(v->fixangle, n, 3));
    }
    fprintf(f, "pEntity->v.idealpitch = %.3f\n", v->idealpitch);
    fprintf(f, "pEntity->v.pitch_speed = %.3f\n", v->pitch_speed);
    fprintf(f, "pEntity->v.ideal_yaw = %.3f\n", v->ideal_yaw);
    fprintf(f, "pEntity->v.yaw_speed = %.3f\n", v->yaw_speed);
    fprintf(f, "pEntity->v.modelindex = %d\n", v->modelindex);
    fprintf(f, "pEntity->v.model = %d (\"%s\")\n", v->model, STRING(v->model));
    fprintf(f, "pEntity->v.viewmodel = %d (\"%s\")\n", v->viewmodel, STRING(v->viewmodel));
    fprintf(f, "pEntity->v.weaponmodel = %d (\"%s\")\n", v->weaponmodel, STRING(v->weaponmodel));
    PE_Vec(f, "absmin", v->absmin);
    PE_Vec(f, "absmax", v->absmax);
    PE_Vec(f, "mins", v->mins);
    PE_Vec(f, "maxs", v->maxs);
    PE_Vec(f, "size", v->size);
    fprintf(f, "pEntity->v.ltime = %.3f (current time is %.3f)\n", v->ltime, gpGlobals->time);
    fprintf(f, "pEntity->v.nextthink = %.3f (current time is %.3f)\n", v->nextthink, gpGlobals->time);
    {
        static const char *const n[] = { "MOVETYPE_NONE", NULL, NULL, "MOVETYPE_WALK", "MOVETYPE_STEP", "MOVETYPE_FLY", "MOVETYPE_TOSS",
            "MOVETYPE_PUSH", "MOVETYPE_NOCLIP", "MOVETYPE_FLYMISSILE", "MOVETYPE_BOUNCE", NULL, "MOVETYPE_FOLLOW", "MOVETYPE_PUSHSTEP",
            NULL, NULL, "MOVETYPE_BOUNCEMISSILE" };   // [OK] ESF: BOUNCEMISSILE vale 16; 11 e o modo de voo do ESF (sem nome aqui)
        fprintf(f, "pEntity->v.movetype = %d (%s)\n", v->movetype, PE_Name(v->movetype, n, 17));
    }
    {
        static const char *const n[] = { "SOLID_NOT", "SOLID_TRIGGER", "SOLID_BBOX", "SOLID_SLIDEBOX", "SOLID_BSP" };
        fprintf(f, "pEntity->v.solid = %d (%s)\n", v->solid, PE_Name(v->solid, n, 5));
    }
    fprintf(f, "pEntity->v.skin = %d (\"%s\")\n", v->skin, STRING(v->skin));      // [OK] imprime como string, como o original
    fprintf(f, "pEntity->v.body = %d (\"%s\")\n", v->body, STRING(v->body));
    {
        static const char *const n[8] = { "EF_BRIGHTFIELD | ", "EF_MUZZLEFLASH | ", "EF_BRIGHTLIGHT | ", "EF_DIMLIGHT | ", "EF_INVLIGHT | ",
            "EF_NOINTERP | ", "EF_LIGHT | ", "EF_NODRAW | " };
        sz[0] = 0;
        for (int i = 0; i < 8; i++)
            if (v->effects & (1 << i)) strcat(sz, n[i]);
        PE_Trim(sz);
        fprintf(f, "pEntity->v.effects = %d (%s)\n", v->effects, sz);
    }
    fprintf(f, "pEntity->v.gravity = %.3f (fraction /1 of normal)\n", v->gravity);
    fprintf(f, "pEntity->v.friction = %.3f\n", v->friction);
    fprintf(f, "pEntity->v.light_level = %d\n", v->light_level);
    fprintf(f, "pEntity->v.sequence = %d (\"%s\")\n", v->sequence, STRING(v->sequence));
    fprintf(f, "pEntity->v.gaitsequence = %d (\"%s\")\n", v->gaitsequence, STRING(v->gaitsequence));
    fprintf(f, "pEntity->v.frame = %.3f (position /255 of total in sequence)\n", v->frame);
    fprintf(f, "pEntity->v.animtime = %.3f (current time is %.3f)\n", v->animtime, gpGlobals->time);
    fprintf(f, "pEntity->v.framerate = %.3f (times normal speed)\n", v->framerate);
    fprintf(f, "pEntity->v.controller = {%d, %d, %d, %d}\n", v->controller[0], v->controller[1], v->controller[2], v->controller[3]);
    fprintf(f, "pEntity->v.blending = {%d, %d}\n", v->blending[0], v->blending[1]);
    fprintf(f, "pEntity->v.scale = %.3f\n", v->scale);
    {
        static const char *const n[] = { "kRenderNormal", "kRenderTransColor", "kRenderTransTexture", "kRenderGlow", "kRenderTransAlpha", "kRenderTransAdd" };
        fprintf(f, "pEntity->v.rendermode = %d (%s)\n", v->rendermode, PE_Name(v->rendermode, n, 6));
    }
    fprintf(f, "pEntity->v.renderamt = %.3f\n", v->renderamt);
    fprintf(f, "pEntity->v.rendercolor = Vector (%.1f, %.1f, %.1f) (RGB)\n", v->rendercolor[0], v->rendercolor[1], v->rendercolor[2]);
    {
        static const char *const n[] = { "kRenderFxNone", "kRenderFxPulseSlow", "kRenderFxPulseFast", "kRenderFxPulseSlowWide",
            "kRenderFxPulseFastWide", "kRenderFxFadeSlow", "kRenderFxFadeFast", "kRenderFxSolidSlow", "kRenderFxSolidFast",
            "kRenderFxStrobeSlow", "kRenderFxStrobeFast", "kRenderFxStrobeFaster", "kRenderFxFlickerSlow", "kRenderFxFlickerFast",
            "kRenderFxNoDissipation", "kRenderFxDistort", "kRenderFxHologram", "kRenderFxDeadPlayer", "kRenderFxExplode",
            "kRenderFxGlowShell", "kRenderFxClampMinScale" };
        fprintf(f, "pEntity->v.renderfx = %d (%s)\n", v->renderfx, PE_Name(v->renderfx, n, 21));
    }
    fprintf(f, "pEntity->v.health = %.3f\n", v->health);
    fprintf(f, "pEntity->v.frags = %.3f\n", v->frags);
    {
        strcpy(sz, "00000000000000000000000000000000");     // bit i da mascara = caractere i
        for (int i = 0; i < 32; i++)
            if ((v->weapons >> i) & 1) sz[i] = '1';
        fprintf(f, "pEntity->v.weapons = %d (%s)\n", v->weapons, sz);
    }
    {
        const char *s = (v->takedamage == 0.0f) ? "DAMAGE_NO" : (v->takedamage == 1.0f) ? "DAMAGE_YES" : (v->takedamage == 2.0f) ? "DAMAGE_AIM" : "???";
        fprintf(f, "pEntity->v.takedamage = %.3f (%s)\n", v->takedamage, s);
    }
    {
        static const char *const n[] = { "DEAD_NO", "DEAD_DYING", "DEAD_DEAD", "DEAD_RESPAWNABLE", "DEAD_DISCARDBODY" };
        fprintf(f, "pEntity->v.deadflag = %d (%s)\n", v->deadflag, PE_Name(v->deadflag, n, 5));
    }
    PE_Vec(f, "view_ofs", v->view_ofs);
    {
        static const char *const n[16] = { "IN_ATTACK | ", "IN_JUMP | ", "IN_DUCK | ", "IN_FORWARD | ", "IN_BACK | ", "IN_USE | ", "IN_CANCEL | ",
            "IN_LEFT | ", "IN_RIGHT | ", "IN_MOVELEFT | ", "IN_MOVERIGHT | ", "IN_ATTACK2 | ", "IN_RUN | ", "IN_RELOAD | ", "IN_ALT1 | ", "IN_SCORE | " };
        sz[0] = 0;
        for (int i = 0; i < 16; i++)
            if (v->button & (1 << i)) strcat(sz, n[i]);
        PE_Trim(sz);
        fprintf(f, "pEntity->v.button = %d (%s)\n", v->button, sz);
    }
    fprintf(f, "pEntity->v.impulse = %d\n", v->impulse);
    PE_Ent(sz, v->chain);          fprintf(f, "pEntity->v.chain = %s\n", sz);
    PE_Ent(sz, v->dmg_inflictor);  fprintf(f, "pEntity->v.dmg_inflictor = %s\n", sz);
    PE_Ent(sz, v->enemy);          fprintf(f, "pEntity->v.enemy = %s\n", sz);
    PE_Ent(sz, v->aiment);         fprintf(f, "pEntity->v.aiment = %s\n", sz);
    PE_Ent(sz, v->owner);          fprintf(f, "pEntity->v.owner = %s\n", sz);
    PE_Ent(sz, v->groundentity);   fprintf(f, "pEntity->v.groundentity = %s\n", sz);
    fprintf(f, "pEntity->v.spawnflags = %d\n", v->spawnflags);
    {
        // bits em ordem; 0 = sem nome (o original nao testa os bits 0x4000/0x8000..: ver lista)
        static const struct { int bit; const char *name; } fl[] = {
            { 0x1, "FL_FLY | " }, { 0x2, "FL_SWIM | " }, { 0x4, "FL_CONVEYOR | " }, { 0x8, "FL_CLIENT | " }, { 0x10, "FL_INWATER | " },
            { 0x20, "FL_MONSTER | " }, { 0x40, "FL_GODMODE | " }, { 0x80, "FL_NOTARGET | " }, { 0x100, "FL_SKIPLOCALHOST | " },
            { 0x200, "FL_ONGROUND | " }, { 0x400, "FL_PARTIALGROUND | " }, { 0x800, "FL_WATERJUMP | " }, { 0x1000, "FL_FROZEN | " },
            { 0x2000, "FL_FAKECLIENT | " }, { 0x8000, "FL_FLOAT | " }, { 0x10000, "FL_GRAPHED | " }, { 0x20000, "FL_IMMUNE_WATER | " },
            { 0x40000, "FL_IMMUNE_SLIME | " }, { 0x80000, "FL_IMMUNE_LAVA | " }, { 0x100000, "FL_PROXY | " }, { 0x200000, "FL_ALWAYSTHINK | " },
            { 0x400000, "FL_BASEVELOCITY | " }, { 0x800000, "FL_MONSTERCLIP | " }, { 0x1000000, "FL_ONTRAIN | " }, { 0x2000000, "FL_WORLDBRUSH | " },
            { 0x4000000, "FL_SPECTATOR | " }, { 0x20000000, "FL_CUSTOMENTITY | " }, { 0x40000000, "FL_KILLME | " }, { (int)0x80000000, "FL_DORMANT | " } };
        sz[0] = 0;
        for (unsigned i = 0; i < sizeof(fl) / sizeof(fl[0]); i++)
            if (v->flags & fl[i].bit) strcat(sz, fl[i].name);
        PE_Trim(sz);
        fprintf(f, "pEntity->v.flags = %d (%s)\n", v->flags, sz);
    }
    fprintf(f, "pEntity->v.colormap = %d (0x%X)\n", v->colormap, v->colormap);
    fprintf(f, "pEntity->v.team = %d\n", v->team);
    fprintf(f, "pEntity->v.max_health = %.3f\n", v->max_health);
    fprintf(f, "pEntity->v.teleport_time = %.3f\n", v->teleport_time);
    fprintf(f, "pEntity->v.armortype = %.3f\n", v->armortype);
    fprintf(f, "pEntity->v.armorvalue = %.3f\n", v->armorvalue);
    {
        const char *s = (v->waterlevel == 0) ? "not in water" : (v->waterlevel == 2) ? "walking in water" : (v->waterlevel == 3) ? "swimming in water" : "???";   // [?] ordem lida do decompilado
        fprintf(f, "pEntity->v.waterlevel = %d (%s)\n", v->waterlevel, s);
    }
    fprintf(f, "pEntity->v.watertype = %d\n", v->watertype);
    fprintf(f, "pEntity->v.target = %d (\"%s\")\n", v->target, STRING(v->target));
    fprintf(f, "pEntity->v.targetname = %d (\"%s\")\n", v->targetname, STRING(v->targetname));
    fprintf(f, "pEntity->v.netname = %d (\"%s\")\n", v->netname, STRING(v->netname));
    fprintf(f, "pEntity->v.message = %d (\"%s\")\n", v->message, STRING(v->message));
    fprintf(f, "pEntity->v.dmg_take = %.3f\n", v->dmg_take);
    fprintf(f, "pEntity->v.dmg_save = %.3f\n", v->dmg_save);
    fprintf(f, "pEntity->v.dmg = %.3f\n", v->dmg);
    fprintf(f, "pEntity->v.dmgtime = %.3f (current time is %.3f)\n", v->dmgtime, gpGlobals->time);
    fprintf(f, "pEntity->v.noise = %d (\"%s\")\n", v->noise, STRING(v->noise));
    fprintf(f, "pEntity->v.noise1 = %d (\"%s\")\n", v->noise1, STRING(v->noise1));
    fprintf(f, "pEntity->v.noise2 = %d (\"%s\")\n", v->noise2, STRING(v->noise2));
    fprintf(f, "pEntity->v.noise3 = %d (\"%s\")\n", v->noise3, STRING(v->noise3));
    fprintf(f, "pEntity->v.speed = %.3f\n", v->speed);
    fprintf(f, "pEntity->v.air_finished = %.3f\n", v->air_finished);
    fprintf(f, "pEntity->v.pain_finished = %.3f\n", v->pain_finished);
    fprintf(f, "pEntity->v.radsuit_finished = %.3f\n", v->radsuit_finished);
    PE_Ent(sz, v->pContainingEntity);    fprintf(f, "pEntity->v.pContainingEntity = %s\n", sz);
    fprintf(f, "pEntity->v.playerclass = %d\n", v->playerclass);
    fprintf(f, "pEntity->v.maxspeed = %.3f\n", v->maxspeed);
    fprintf(f, "pEntity->v.fov = %.3f\n", v->fov);
    fprintf(f, "pEntity->v.weaponanim = %d\n", v->weaponanim);
    fprintf(f, "pEntity->v.pushmsec = %d\n", v->pushmsec);
    fprintf(f, "pEntity->v.bInDuck = %d (%s)\n", v->bInDuck, v->bInDuck > 0 ? "TRUE" : "FALSE");
    fprintf(f, "pEntity->v.flTimeStepSound = %d (current time is %.3f)\n", v->flTimeStepSound, gpGlobals->time);
    fprintf(f, "pEntity->v.flSwimTime = %d (current time is %.3f)\n", v->flSwimTime, gpGlobals->time);
    fprintf(f, "pEntity->v.flDuckTime = %d (current time is %.3f)\n", v->flDuckTime, gpGlobals->time);
    fprintf(f, "pEntity->v.iStepLeft = %d\n", v->iStepLeft);
    fprintf(f, "pEntity->v.flFallVelocity = %.3f\n", v->flFallVelocity);
    fprintf(f, "pEntity->v.gamestate = %d\n", v->gamestate);
    fprintf(f, "pEntity->v.oldbuttons = %d\n", v->oldbuttons);
    fprintf(f, "pEntity->v.groupinfo = %d\n", v->groupinfo);
    fprintf(f, "pEntity->v.iuser1 = %d\n", v->iuser1);
    fprintf(f, "pEntity->v.iuser2 = %d\n", v->iuser2);
    fprintf(f, "pEntity->v.iuser3 = %d\n", v->iuser3);
    fprintf(f, "pEntity->v.fuser1 = %.3f\n", v->fuser1);
    fprintf(f, "pEntity->v.fuser2 = %.3f\n", v->fuser2);
    fprintf(f, "pEntity->v.fuser3 = %.3f\n", v->fuser3);
    fprintf(f, "pEntity->v.fuser4 = %.3f\n", v->fuser4);
    PE_Vec(f, "vuser1", v->vuser1);
    PE_Vec(f, "vuser2", v->vuser2);
    PE_Vec(f, "vuser3", v->vuser3);
    PE_Vec(f, "vuser4", v->vuser4);
    PE_Ent(sz, v->euser1);  fprintf(f, "pEntity->v.euser1 = %s\n", sz);
    PE_Ent(sz, v->euser2);  fprintf(f, "pEntity->v.euser2 = %s\n", sz);
    PE_Ent(sz, v->euser3);  fprintf(f, "pEntity->v.euser3 = %s\n", sz);
    PE_Ent(sz, v->euser4);  fprintf(f, "pEntity->v.euser4 = %s\n", sz);
    fprintf(f, "\n");
    fclose(f);
}
