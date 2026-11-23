// candy.h -- itens do Buu (doces), feijao Sensu e armas CSensuBean/CCandyAttack. RECUPERADO de decomp_raw (CCandy*, CBean, CSensuBean, CCandyAttack).
#pragma once
#include "items.h"
class CCandy : public CBaseEntity            // item que o Buu cria ao transformar um jogador em doce
{
public:
    void Spawn(void);
    void Precache(void);
    virtual void Touch(CBaseEntity *pOther);
    virtual void GetStuff(CBasePlayer *pPlayer);   // [OK] vtable slot 56: efeito ao comer (vazio na base)
};
class CCookie : public CCandy { public:
    static CCookie *CreateCookie(Vector vecOrigin, entvars_t *pevOwner);
    void GetStuff(CBasePlayer *pPlayer); };
class CChocolate : public CCandy { public:
    static CChocolate *CreateChocolate(Vector vecOrigin, entvars_t *pevOwner);
    void GetStuff(CBasePlayer *pPlayer); };
class CDonut : public CCandy { public:
    static CDonut *CreateDonut(Vector vecOrigin, entvars_t *pevOwner);
    void GetStuff(CBasePlayer *pPlayer); };

class CBean : public CBaseEntity             // feijao Sensu solto no chao / arremessado
{
public:
    void Spawn(void);
    void Precache(void);
    virtual void Touch(CBaseEntity *pOther);
    static CBean *ThrowBean(entvars_t *pevOwner, Vector vecStart, Vector vecVelocity);
};

class CSensuBean : public CBasePlayerWeapon  // arma de inventario: primario come, secundario arremessa
{
public:
    int   m_fPrimaryDone;   // +0xc4 [OK]
    int   m_fSecondaryDone; // +0xc8 [OK]
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 9; }
    BOOL Deploy(void);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
};

class CCandyAttack : public CBasePlayerWeapon  // raio de doce do Buu
{
public:
    CBeam   *m_pBeam;       // +0xc4 [OK]
    CSprite *m_pSprite;     // +0xc8 [OK]
    char     m_fSoundPlayed;// +0xcc [OK]
    float GetPowerRatio(void) { return m_pPlayer->GetPowerRatio(); }   // [OK] CBasePlayerWeapon::GetPowerRatio
    void Spawn(void);
    void Precache(void);
    int  GetItemInfo(ItemInfo *p);
    int  iItemSlot(void) { return 5; }
    BOOL Deploy(void);
    void Holster(int skiplocal = 0);
    void WeaponIdle(void);
    void PrimaryAttack(void);
    void SecondaryAttack(void);
};

class CSensuBeanBag : public CItem          // item_sensubeanbag: saco com 3 feijoes (so existe se allowsensubeans == 1)
{
public:
    void Spawn(void);
    void Precache(void);
    BOOL MyTouch(CBasePlayer *pPlayer);
};
