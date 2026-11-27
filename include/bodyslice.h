// bodyslice.h -- CBodySlice: pedacos "fatiados" do corpo do jogador (Death by sword/disc). Deriva de CGib.
#pragma once
#define ESF_BODYSLICE_FULL
class CBodySlice : public CGib
{
public:
    static void SpawnBodySlices(entvars_t *pevVictim, bool bFlyOff);   // [OK] assinatura (P9entvars_sb)
    void FlyOffThink(void);                                            // [OK]
    // direcoes do jogador no momento do corte; [?] offsets esperados +0x2b8 / +0x2c4 / +0x2d0 (fim do CGib)
    Vector m_vecForward;       // +0x2b8
    Vector m_vecSide;          // +0x2c4 (direita, ou esquerda nas fatias pares)
    Vector m_vecUp;            // +0x2d0
};
