// playerbag.h -- CPlayerBag: saco de sensu beans que o jogador larga ao morrer; quem encosta ganha os beans.
#pragma once
class CPlayerBag : public CBaseEntity
{
public:
    void Spawn(void);
    void Precache(void);
    void Touch(CBaseEntity *pOther);   // [OK] vtable[43]
    static CPlayerBag *CreateBag(int iBeans, CBasePlayer *pPlayer);
    int m_iBeans;                  // [OK] +0x64 (vptr em +0x60)
};
