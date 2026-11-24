// util_esf.cpp -- funcoes livres pequenas do ESF (util.cpp do mod).
// [OK] conferido contra o decompilado de hl_i386.so: UTIL_SetPlayerModel @0x1347d0, IsKiBall @0x17d070,
//      UTIL_CreateEnt @0x17f430, UTIL_PlayerJoinTeam @0x180010, TelePortPlayerToPlayer @0x17c390
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
    if (!g_pGameRules->IsMultiplayer())                    // [OK] vtable +0x20
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

    if (tr.flFraction >= 1.0)                              // [OK] fcomp 1.0 @0x17c482
        SET_ORIGIN(pB, vecEnd);
}

// ---- IsNull [OK] @0x179a70 / @0x179b40 ----
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

// ---- classificacao de ataques de ki pelo classname [OK] @0x17cb50..0x17d1d0 ----
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

// ---- WrapAngles [OK] @0x179740 ----
// Traz cada componente para perto de [-180,180]. ATENCAO: reproduz o original literalmente (trunca para zero e soma/subtrai (n+1)*360),
// entao para valores muito grandes ou muito negativos o resultado pode continuar fora do intervalo.
static inline float WrapAngle1(float a)
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
    angles.x = WrapAngle1(angles.x);
    angles.y = WrapAngle1(angles.y);
    angles.z = WrapAngle1(angles.z);
    return angles;
}

// ---- UTIL_IsValidPlayer [OK] @0x179b90 ----
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
