// swoop.h -- CSwoop ("swoop" = investida em voo). Embutido em CBasePlayer+0x504.
// Layout recuperado de Reset/ResetAllDT/GetSwoop* (asm). Campos sem nome ficam como f_XX.
#pragma once
class CBasePlayer;

struct double_tap_s {            // [OK] 16 bytes (ResetDT = memset 0, 16); campos internos [?]
    float f_00, f_04;            // [OK] CanSwoop: ambos != 0
    float f_08;                  // [OK] tempo; CanSwoop exige time - f_08 >= 0.05
    int f_0c;                    // [OK] != 0
};

class CSwoop {
public:
    void ManageSwoop(void);               // [?] assinatura
    void StartSwoop(int iDir);            // [?]
    void StopSwoop(void);                 // [?]
    void HandleSwoop(void);               // [?]
    int  CanSwoop(double_tap_s *pDT, int iDir);   // [?]
    int  CanUseDirections(void);          // [?]
    int  IsHolding(int iDir);             // [?]
    void ManageNullKeyset(void);          // [?]
    void AddToNullKeyset(int iFlags);     // [OK]
    void RemoveFromNullKeyset(int iFlags);// [OK]
    void AddAllToNullKeyset(void);        // [OK]
    int  DirectionsToFlags(int iDir);     // [OK] tabela 0..5 -> 2,4,0x80,0x100,8,0x10
    void ResetDT(double_tap_s *pDT);      // [OK]
    void ResetAllDT(void);                // [OK]
    void ResetAllDTExcept(int iExcept);   // [OK]
    void Reset(void);                     // [OK]
    int  SetSwoopAnim(char *szAnim, int &iActivity);   // [?] assinatura (corpo ainda não recuperado)
    float GetSwoopTime(void);             // [OK]
    float GetSwoopSpeed(void);            // [OK] StartSpeed da classe * 3.7
    float GetSwoopBoostSpeed(void);       // [OK] StartSpeed da classe * 4.6
    float SwoopSlowdown(void);            // [OK]
    int  GetSwoopStartKi(void);           // [OK]
    Vector GetCurrentDirection(void);     // [?] devolve por ponteiro oculto
    int  m_iType;                         // [OK] +0x00 tipo de investida (-1 = nenhum; 0..5; 4 = contra distancia; 5 = slowdown 0.85)
    int  f_04;                            // [OK] +0x04 flag (Ki inicial 30 se != 0)
    int  f_08;                            // [?]
    int  m_iNullKeyset;                   // [OK] +0x0c flags de teclas anuladas
    float m_flStartTime;                  // [OK] +0x10 inicio do swoop (0 = parado)
    float m_flSpeed;                      // [OK] +0x14 velocidade atual do swoop
    double_tap_s m_DT[6];                 // [OK] +0x18 .. +0x78
    CBasePlayer *m_pPlayer;               // [OK] +0x78
};
