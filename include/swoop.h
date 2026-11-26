// swoop.h -- CSwoop ("swoop" = investida em voo). Declaração MÍNIMA para compilar o código recuperado;
// o resto vem de decomp_raw/CSwoop e src/headers/CSwoop.h (auto). Embutido em CBasePlayer+0x504.
#pragma once
class CBasePlayer;
class CSwoop {
public:
    void ManageSwoop(void);               // [?] assinatura
    void StopSwoop(void);                 // [?]
    void AddAllToNullKeyset(void);        // [?]
    void ResetAllDT(void);                // [OK] Reset__6CSwoop / ResetAllDT__6CSwoop
    void Reset(void);
    int  SetSwoopAnim(char *szAnim, int &iActivity);   // [?] assinatura (corpo ainda não recuperado)
    float GetSwoopTime(void);             // [?]
    Vector GetCurrentDirection(void);     // [?] devolve por ponteiro oculto
    int  m_iType;                         // [OK] +0x504 do jogador: tipo de investida (0..5; 4 = contra distancia)
    char m_pad[0x80];                     // [?] tamanho real desconhecido
};
