// esf_util.h -- prototipos das funcoes livres do ESF, com a assinatura do hl_i386.so (nomes mangled em symbols/free_fns.txt).
// Incluir DEPOIS de extdll.h/util.h/cbase.h. Substitui os "extern ... // [?] assinatura" espalhados pelo codigo.
#ifndef ESF_UTIL_H
#define ESF_UTIL_H

class CBaseEntity;
class CBasePlayer;

// [OK] todas conferidas pelo mangling do original
bool   UTIL_IsValidPlayer(CBasePlayer *pPlayer, bool bFlag1, bool bFlag2);   // __FP11CBasePlayerbT1
char   IsNull(edict_t *pEdict);                                              // __FP7edict_s
char   IsNull(CBaseEntity *pEnt);                                            // __FP11CBaseEntity
BOOL   EntIsInFieldOfView(CBaseEntity *pViewer, CBaseEntity *pTarget);       // __FP11CBaseEntityT0
short  UTIL_GetHeadingPercentage(CBaseEntity *pSelf, CBaseEntity *pTarget);  // __FP11CBaseEntityT0  [?] retorno
Vector PredictEntityPos(CBaseEntity *pEnt, float flTime, bool bFlag);        // __FP11CBaseEntityfb
Vector GetFurthestCollision(CBaseEntity *pEnt, float flMaxDist);             // __FP11CBaseEntityf
BOOL   EntityHeadsToPlayer(CBasePlayer *pPlayer, CBaseEntity *pAttack);      // __FP11CBasePlayerP11CBaseEntity

Vector WrapAngles(Vector vecAngles);                                         // __FG6Vector (por valor; RETORNA o resultado, nao altera o argumento)
void   UTIL_Printf(const char *pszMsg, int iDest, edict_t *pEntity);        // __FPCciP7edict_s
int    WaypointFindNearest(edict_t *pEntity, float flRange, int iTeam);      // __FP7edict_sfi
int    WaypointFindNearest(Vector vecSrc, edict_t *pEntity, float flRange, int iTeam);   // __FG6VectorP7edict_sfi

// Adaptadores (NAO existem no original; so convertem o argumento): o codigo recuperado as chama com entvars_t*.
inline char IsNull(entvars_t *pev)                                    { return IsNull(CBaseEntity::Instance(pev)); }
inline BOOL EntIsInFieldOfView(entvars_t *pevA, entvars_t *pevB)      { return EntIsInFieldOfView(CBaseEntity::Instance(pevA), CBaseEntity::Instance(pevB)); }
inline BOOL EntityHeadsToPlayer(CBasePlayer *pPlayer, entvars_t *pev) { return EntityHeadsToPlayer(pPlayer, CBaseEntity::Instance(pev)); }

#endif
