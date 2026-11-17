// Classes de personagem do ESF (Goku, Vegeta...). Recuperado de hl_i386.so.
// [OK] valores lidos do decomp; [?] hierarquia (ascendida herda da forma base) deduzida pelos métodos ausentes.
#pragma once
class CBasePlayer;

class CBaseClass {   // [?] layout: +0 CBasePlayer*, +4 vptr (GCC 2.95); vtable: slots 0..18
public:
    CBaseClass(CBasePlayer *pPlayer) : m_pPlayer(pPlayer) {}
    virtual ~CBaseClass() {}
    virtual const char *GetSoundDir() = 0;
    virtual int GetStartSpeed() = 0;
    virtual int GetStartHealth() = 0;
    virtual int GetStartPowerLevel() = 0;
    virtual int KiCost() { return 1; }                           // [?] padrão
    virtual CBaseClass *GetAscendedClass() { return 0; }
    virtual int CanDescend() { return 0; }
    virtual CBaseClass *GetDescendedClass() { return 0; }
    virtual int GetTransFormPowerLevel() = 0;
    virtual float GetTransFromPLMultiplier() { return 1.0f; }    // [?] padrão
    virtual void AddAllAttacks() = 0;
    virtual int Classify() = 0;
    virtual int GetAuraSkin() = 0;
    virtual const char *GetModelName() = 0;
    virtual float GetKiEfficiency() = 0;
    virtual int CanTeleportWhileCharging() { return 0; }
    virtual int GetNumBodySlices() = 0;
    virtual int HasSword() { return 0; }
    static const char *GetName(int iClass);   // class_names[]: base,buu,goku,gohan,krillin,frieza,piccolo,trunks,vegeta,cell
    void SetModel();
    CBasePlayer *m_pPlayer;
};

class CGoku : public CBaseClass {
public:
    CGoku(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CSSJGoku : public CGoku {
public:
    CSSJGoku(CBasePlayer *p) : CGoku(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int KiCost();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int CanTeleportWhileCharging();
    virtual int GetNumBodySlices();
};

class CBuu : public CBaseClass {
public:
    CBuu(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CBuu2 : public CBuu {
public:
    CBuu2(CBasePlayer *p) : CBuu(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual CBaseClass *GetAscendedClass();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CCell : public CBaseClass {
public:
    CCell(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CCell2 : public CCell {
public:
    CCell2(CBasePlayer *p) : CCell(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual CBaseClass *GetAscendedClass();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CFrieza : public CBaseClass {
public:
    CFrieza(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CFrieza2 : public CFrieza {
public:
    CFrieza2(CBasePlayer *p) : CFrieza(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CGohan : public CBaseClass {
public:
    CGohan(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CSSJGohan : public CGohan {
public:
    CSSJGohan(CBasePlayer *p) : CGohan(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int KiCost();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CKrillin : public CBaseClass {
public:
    CKrillin(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CKrillin2 : public CKrillin {
public:
    CKrillin2(CBasePlayer *p) : CKrillin(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual CBaseClass *GetAscendedClass();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CPiccolo : public CBaseClass {
public:
    CPiccolo(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CPiccolo2 : public CPiccolo {
public:
    CPiccolo2(CBasePlayer *p) : CPiccolo(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CTrunks : public CBaseClass {
public:
    CTrunks(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
    virtual int HasSword();
};

class CSSJTrunks : public CTrunks {
public:
    CSSJTrunks(CBasePlayer *p) : CTrunks(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int KiCost();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CVegeta : public CBaseClass {
public:
    CVegeta(CBasePlayer *p) : CBaseClass(p) {}
    virtual const char *GetSoundDir();
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int GetStartPowerLevel();
    virtual CBaseClass *GetAscendedClass();
    virtual int GetTransFormPowerLevel();
    virtual void AddAllAttacks();
    virtual int Classify();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

class CSSJVegeta : public CVegeta {
public:
    CSSJVegeta(CBasePlayer *p) : CVegeta(p) {}
    virtual int GetStartSpeed();
    virtual int GetStartHealth();
    virtual int KiCost();
    virtual CBaseClass *GetAscendedClass();
    virtual int CanDescend();
    virtual CBaseClass *GetDescendedClass();
    virtual int GetTransFormPowerLevel();
    virtual float GetTransFromPLMultiplier();
    virtual void AddAllAttacks();
    virtual int GetAuraSkin();
    virtual const char *GetModelName();
    virtual float GetKiEfficiency();
    virtual int GetNumBodySlices();
};

