// Personagens do ESF. [OK] vs decomp_raw/C<Personagem>/*.c (valores); [?] defaults de CBaseClass.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "esf_classes.h"

static const char *class_names[10] = { "base", "buu", "goku", "gohan", "krillin", "frieza", "piccolo", "trunks", "vegeta", "cell" };
const char *CBaseClass::GetName(int iClass) { return (iClass >= 0 && iClass <= 9) ? class_names[iClass] : 0; }

void CBaseClass::SetModel()   // [OK] decomp 0x9f190
{
    char model[64];
    strcpy(model, GetModelName());
    char *infobuffer = g_engfuncs.pfnGetInfoKeyBuffer(m_pPlayer->edict());
    g_engfuncs.pfnSetClientKeyValue(ENTINDEX(m_pPlayer->edict()), infobuffer, "model", model);
    UTIL_SetPlayerModel(m_pPlayer, model);   // [?] assinatura
}

const char *CGoku::GetSoundDir() { return "goku"; }
int CGoku::GetStartSpeed() { return 216; }
int CGoku::GetStartHealth() { return 110; }
int CGoku::GetStartPowerLevel() { return 750000; }
CBaseClass *CGoku::GetAscendedClass() { return new CSSJGoku(m_pPlayer); }
int CGoku::GetTransFormPowerLevel() { return 1750000; }
void CGoku::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_kamehameha");
    m_pPlayer->GiveNamedItem("weapon_spiritbomb");
    m_pPlayer->GiveNamedItem("weapon_solarflare");
    m_pPlayer->GiveNamedItem("weapon_kametorpedo");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CGoku::Classify() { return 2; }
int CGoku::GetAuraSkin() { return 0; }
const char *CGoku::GetModelName() { return "goku"; }
float CGoku::GetKiEfficiency() { return 1.0f; }
int CGoku::GetNumBodySlices() { return 3; }

int CSSJGoku::GetStartSpeed() { return 280; }
int CSSJGoku::GetStartHealth() { return 130; }
int CSSJGoku::KiCost() { return 2; }
CBaseClass *CSSJGoku::GetAscendedClass() { return 0; }
int CSSJGoku::CanDescend() { return 1; }
CBaseClass *CSSJGoku::GetDescendedClass() { return new CGoku(m_pPlayer); }
int CSSJGoku::GetTransFormPowerLevel() { return 5000000; }
float CSSJGoku::GetTransFromPLMultiplier() { return 2.0f; }
void CSSJGoku::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_kamehameha");
    m_pPlayer->GiveNamedItem("weapon_spiritbomb");
    m_pPlayer->GiveNamedItem("weapon_solarflare");
    m_pPlayer->GiveNamedItem("weapon_kametorpedo");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CSSJGoku::GetAuraSkin() { return 4; }
const char *CSSJGoku::GetModelName() { return "ssjgoku"; }
float CSSJGoku::GetKiEfficiency() { return 0.5f; }
int CSSJGoku::CanTeleportWhileCharging() { return 1; }
int CSSJGoku::GetNumBodySlices() { return 2; }

const char *CBuu::GetSoundDir() { return "fatbuu"; }
int CBuu::GetStartSpeed() { return 220; }
int CBuu::GetStartHealth() { return 160; }
int CBuu::GetStartPowerLevel() { return 1250000; }
CBaseClass *CBuu::GetAscendedClass() { return new CBuu2(m_pPlayer); }
int CBuu::GetTransFormPowerLevel() { return 3000000; }
void CBuu::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_candy");
    m_pPlayer->GiveNamedItem("weapon_mouthblast");
    m_pPlayer->GiveNamedItem("weapon_regeneration");
}
int CBuu::Classify() { return 1; }
int CBuu::GetAuraSkin() { return 2; }
const char *CBuu::GetModelName() { return "fatbuu"; }
float CBuu::GetKiEfficiency() { return 1.0f; }
int CBuu::GetNumBodySlices() { return 4; }

const char *CBuu2::GetSoundDir() { return "buu"; }
int CBuu2::GetStartSpeed() { return 320; }
int CBuu2::GetStartHealth() { return 180; }
CBaseClass *CBuu2::GetAscendedClass() { return 0; }
CBaseClass *CBuu2::GetDescendedClass() { return new CBuu(m_pPlayer); }
int CBuu2::GetTransFormPowerLevel() { return 4500000; }
float CBuu2::GetTransFromPLMultiplier() { return 1.5f; }
void CBuu2::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_candy");
    m_pPlayer->GiveNamedItem("weapon_mouthblast");
    m_pPlayer->GiveNamedItem("weapon_regeneration");
}
const char *CBuu2::GetModelName() { return "evilbuu"; }
float CBuu2::GetKiEfficiency() { return 0.5f; }
int CBuu2::GetNumBodySlices() { return 4; }

const char *CCell::GetSoundDir() { return "cell"; }
int CCell::GetStartSpeed() { return 216; }
int CCell::GetStartHealth() { return 120; }
int CCell::GetStartPowerLevel() { return 900000; }
CBaseClass *CCell::GetAscendedClass() { return new CCell2(m_pPlayer); }
int CCell::GetTransFormPowerLevel() { return 1900000; }
void CCell::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_friezadisc");
    m_pPlayer->GiveNamedItem("weapon_kamehameha");
    m_pPlayer->GiveNamedItem("weapon_specialbeamcannon");
    m_pPlayer->GiveNamedItem("weapon_solarflare");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CCell::Classify() { return 9; }
int CCell::GetAuraSkin() { return 1; }
const char *CCell::GetModelName() { return "cell"; }
float CCell::GetKiEfficiency() { return 1.0f; }
int CCell::GetNumBodySlices() { return 5; }

const char *CCell2::GetSoundDir() { return "cell2"; }
int CCell2::GetStartSpeed() { return 290; }
int CCell2::GetStartHealth() { return 140; }
CBaseClass *CCell2::GetAscendedClass() { return 0; }
CBaseClass *CCell2::GetDescendedClass() { return new CCell(m_pPlayer); }
int CCell2::GetTransFormPowerLevel() { return 2850000; }
float CCell2::GetTransFromPLMultiplier() { return 1.5f; }
void CCell2::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_friezadisc");
    m_pPlayer->GiveNamedItem("weapon_gallitgun");
    m_pPlayer->GiveNamedItem("weapon_specialbeamcannon");
    m_pPlayer->GiveNamedItem("weapon_solarflare");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
const char *CCell2::GetModelName() { return "cell2"; }
float CCell2::GetKiEfficiency() { return 0.5f; }
int CCell2::GetNumBodySlices() { return 3; }

const char *CFrieza::GetSoundDir() { return "frieza"; }
int CFrieza::GetStartSpeed() { return 180; }
int CFrieza::GetStartHealth() { return 150; }
int CFrieza::GetStartPowerLevel() { return 800000; }
CBaseClass *CFrieza::GetAscendedClass() { return new CFrieza2(m_pPlayer); }
int CFrieza::GetTransFormPowerLevel() { return 1800000; }
void CFrieza::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_fingerlaser");
    m_pPlayer->GiveNamedItem("weapon_friezadisc");
    m_pPlayer->GiveNamedItem("weapon_telekinesis");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CFrieza::Classify() { return 5; }
int CFrieza::GetAuraSkin() { return 2; }
const char *CFrieza::GetModelName() { return "frieza"; }
float CFrieza::GetKiEfficiency() { return 1.0f; }
int CFrieza::GetNumBodySlices() { return 7; }

int CFrieza2::GetStartSpeed() { return 275; }
int CFrieza2::GetStartHealth() { return 170; }
CBaseClass *CFrieza2::GetAscendedClass() { return 0; }
int CFrieza2::CanDescend() { return 1; }
CBaseClass *CFrieza2::GetDescendedClass() { return new CFrieza(m_pPlayer); }
int CFrieza2::GetTransFormPowerLevel() { return 2500000; }
float CFrieza2::GetTransFromPLMultiplier() { return 1.5f; }
void CFrieza2::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_fingerlaser");
    m_pPlayer->GiveNamedItem("weapon_friezadisc");
    m_pPlayer->GiveNamedItem("weapon_deathball");
    m_pPlayer->GiveNamedItem("weapon_telekinesis");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
const char *CFrieza2::GetModelName() { return "frieza2"; }
float CFrieza2::GetKiEfficiency() { return 0.5f; }
int CFrieza2::GetNumBodySlices() { return 6; }

const char *CGohan::GetSoundDir() { return "gohan"; }
int CGohan::GetStartSpeed() { return 180; }
int CGohan::GetStartHealth() { return 100; }
int CGohan::GetStartPowerLevel() { return 600000; }
CBaseClass *CGohan::GetAscendedClass() { return new CSSJGohan(m_pPlayer); }
int CGohan::GetTransFormPowerLevel() { return 1000000; }
void CGohan::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_shieldattack");
    m_pPlayer->GiveNamedItem("weapon_powerbeam");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CGohan::Classify() { return 3; }
int CGohan::GetAuraSkin() { return 0; }
const char *CGohan::GetModelName() { return "gohan"; }
float CGohan::GetKiEfficiency() { return 1.0f; }
int CGohan::GetNumBodySlices() { return 2; }

int CSSJGohan::GetStartSpeed() { return 280; }
int CSSJGohan::GetStartHealth() { return 120; }
int CSSJGohan::KiCost() { return 2; }
CBaseClass *CSSJGohan::GetAscendedClass() { return 0; }
int CSSJGohan::CanDescend() { return 1; }
CBaseClass *CSSJGohan::GetDescendedClass() { return new CGohan(m_pPlayer); }
int CSSJGohan::GetTransFormPowerLevel() { return 3500000; }
float CSSJGohan::GetTransFromPLMultiplier() { return 2.0f; }
void CSSJGohan::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_shieldattack");
    m_pPlayer->GiveNamedItem("weapon_kamehameha");
    m_pPlayer->GiveNamedItem("weapon_powerbeam");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CSSJGohan::GetAuraSkin() { return 4; }
const char *CSSJGohan::GetModelName() { return "ssjgohan"; }
float CSSJGohan::GetKiEfficiency() { return 0.5f; }
int CSSJGohan::GetNumBodySlices() { return 1; }

const char *CKrillin::GetSoundDir() { return "krillin"; }
int CKrillin::GetStartSpeed() { return 180; }
int CKrillin::GetStartHealth() { return 100; }
int CKrillin::GetStartPowerLevel() { return 600000; }
CBaseClass *CKrillin::GetAscendedClass() { return new CKrillin2(m_pPlayer); }
int CKrillin::GetTransFormPowerLevel() { return 3000000; }
void CKrillin::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_kamehameha");
    m_pPlayer->GiveNamedItem("weapon_destructodisc");
    m_pPlayer->GiveNamedItem("weapon_solarflare");
    m_pPlayer->GiveNamedItem("weapon_scatterbeam");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CKrillin::Classify() { return 4; }
int CKrillin::GetAuraSkin() { return 0; }
const char *CKrillin::GetModelName() { return "krillin"; }
float CKrillin::GetKiEfficiency() { return 1.0f; }
int CKrillin::GetNumBodySlices() { return 4; }

int CKrillin2::GetStartSpeed() { return 350; }
int CKrillin2::GetStartHealth() { return 150; }
CBaseClass *CKrillin2::GetAscendedClass() { return 0; }
CBaseClass *CKrillin2::GetDescendedClass() { return new CKrillin(m_pPlayer); }
int CKrillin2::GetTransFormPowerLevel() { return 8000000; }
float CKrillin2::GetTransFromPLMultiplier() { return 2.0f; }
const char *CKrillin2::GetModelName() { return "krillin2"; }
float CKrillin2::GetKiEfficiency() { return 0.5f; }
int CKrillin2::GetNumBodySlices() { return 4; }

const char *CPiccolo::GetSoundDir() { return "piccolo"; }
int CPiccolo::GetStartSpeed() { return 180; }
int CPiccolo::GetStartHealth() { return 120; }
int CPiccolo::GetStartPowerLevel() { return 650000; }
CBaseClass *CPiccolo::GetAscendedClass() { return new CPiccolo2(m_pPlayer); }
int CPiccolo::GetTransFormPowerLevel() { return 1650000; }
void CPiccolo::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_scattershot");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_eyelaser");
    m_pPlayer->GiveNamedItem("weapon_specialbeamcannon");
    m_pPlayer->GiveNamedItem("weapon_masenko");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CPiccolo::Classify() { return 6; }
int CPiccolo::GetAuraSkin() { return 0; }
const char *CPiccolo::GetModelName() { return "piccolo"; }
float CPiccolo::GetKiEfficiency() { return 1.0f; }
int CPiccolo::GetNumBodySlices() { return 3; }

int CPiccolo2::GetStartSpeed() { return 250; }
int CPiccolo2::GetStartHealth() { return 140; }
CBaseClass *CPiccolo2::GetAscendedClass() { return 0; }
int CPiccolo2::CanDescend() { return 1; }
CBaseClass *CPiccolo2::GetDescendedClass() { return new CPiccolo(m_pPlayer); }
int CPiccolo2::GetTransFormPowerLevel() { return 3975000; }
float CPiccolo2::GetTransFromPLMultiplier() { return 1.5f; }
const char *CPiccolo2::GetModelName() { return "piccolo2"; }
float CPiccolo2::GetKiEfficiency() { return 0.5f; }
int CPiccolo2::GetNumBodySlices() { return 3; }

const char *CTrunks::GetSoundDir() { return "trunks"; }
int CTrunks::GetStartSpeed() { return 180; }
int CTrunks::GetStartHealth() { return 110; }
int CTrunks::GetStartPowerLevel() { return 700000; }
CBaseClass *CTrunks::GetAscendedClass() { return new CSSJTrunks(m_pPlayer); }
int CTrunks::GetTransFormPowerLevel() { return 1000000; }
void CTrunks::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_sword");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_burningattack");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CTrunks::Classify() { return 7; }
int CTrunks::GetAuraSkin() { return 0; }
const char *CTrunks::GetModelName() { return "trunks"; }
float CTrunks::GetKiEfficiency() { return 1.0f; }
int CTrunks::GetNumBodySlices() { return 3; }
int CTrunks::HasSword() { return 1; }

int CSSJTrunks::GetStartSpeed() { return 250; }
int CSSJTrunks::GetStartHealth() { return 130; }
int CSSJTrunks::KiCost() { return 2; }
CBaseClass *CSSJTrunks::GetAscendedClass() { return 0; }
int CSSJTrunks::CanDescend() { return 1; }
CBaseClass *CSSJTrunks::GetDescendedClass() { return new CTrunks(m_pPlayer); }
int CSSJTrunks::GetTransFormPowerLevel() { return 3000000; }
float CSSJTrunks::GetTransFromPLMultiplier() { return 2.0f; }
void CSSJTrunks::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_sword");
    m_pPlayer->GiveNamedItem("weapon_kiblast");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_burningattack");
    m_pPlayer->GiveNamedItem("weapon_finishingbuster");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CSSJTrunks::GetAuraSkin() { return 4; }
const char *CSSJTrunks::GetModelName() { return "ssjtrunks"; }
float CSSJTrunks::GetKiEfficiency() { return 0.5f; }
int CSSJTrunks::GetNumBodySlices() { return 4; }

const char *CVegeta::GetSoundDir() { return "vegeta"; }
int CVegeta::GetStartSpeed() { return 216; }
int CVegeta::GetStartHealth() { return 110; }
int CVegeta::GetStartPowerLevel() { return 700000; }
CBaseClass *CVegeta::GetAscendedClass() { return new CSSJVegeta(m_pPlayer); }
int CVegeta::GetTransFormPowerLevel() { return 2000000; }
void CVegeta::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_renzoku");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_gallitgun");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CVegeta::Classify() { return 8; }
int CVegeta::GetAuraSkin() { return 0; }
const char *CVegeta::GetModelName() { return "vegeta"; }
float CVegeta::GetKiEfficiency() { return 1.0f; }
int CVegeta::GetNumBodySlices() { return 4; }

int CSSJVegeta::GetStartSpeed() { return 280; }
int CSSJVegeta::GetStartHealth() { return 120; }
int CSSJVegeta::KiCost() { return 2; }
CBaseClass *CSSJVegeta::GetAscendedClass() { return 0; }
int CSSJVegeta::CanDescend() { return 1; }
CBaseClass *CSSJVegeta::GetDescendedClass() { return new CVegeta(m_pPlayer); }
int CSSJVegeta::GetTransFormPowerLevel() { return 5000000; }
float CSSJVegeta::GetTransFromPLMultiplier() { return 2.0f; }
void CSSJVegeta::AddAllAttacks()
{
    m_pPlayer->GiveNamedItem("weapon_melee");
    m_pPlayer->GiveNamedItem("weapon_renzoku");
    m_pPlayer->GiveNamedItem("weapon_genericbeam");
    m_pPlayer->GiveNamedItem("weapon_gallitgun");
    m_pPlayer->GiveNamedItem("weapon_bigbang");
    m_pPlayer->GiveNamedItem("weapon_finalflash");
    m_pPlayer->GiveNamedItem("weapon_sensu");
}
int CSSJVegeta::GetAuraSkin() { return 4; }
const char *CSSJVegeta::GetModelName() { return "ssjvegeta"; }
float CSSJVegeta::GetKiEfficiency() { return 0.5f; }
int CSSJVegeta::GetNumBodySlices() { return 4; }

