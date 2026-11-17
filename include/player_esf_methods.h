// Métodos de CBasePlayer definidos pelo ESF (gerado a partir das assinaturas dos .cpp; tools/gen_player_methods.py)
#pragma once
#define ESF_PLAYER_METHODS \
    BOOL IsSpectator(void); \
    BOOL UseKi(int iCost); \
    float GetPowerRatio(void); \
    int GetMaxSpeed(void); \
    int GetPowerLevel(void); \
    void DrawChargeBar(int iPercent); \
    void EmitClassSound(const char *pszSound); \
    void IncreasePL(int iAmount); \
    void IncreaseStrength(CBasePlayer *pOther, int iFactor); \
    void SetMaxHealth(int iMax); \
    void SetMaxPowerLevel(int iPL); \
    void SetPowerLevel(int iPL); \
    void StartFly(void); \
    void StopFly(void); \
    void StopSwoop(void);
