// weapon_info_table.cpp -- BotWeaponInfoTable (CBot): GERADO por tools/gen_weapon_info.py a partir do .data do hl_i386.so.
// [OK] 33 entradas de 84 bytes (nm -S: 0xad4); id 0 termina a tabela. Campos: id, arma, secundario, combo, beamjump, beam, carga, dist.min, dist.max.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "bot.h"

bot_weapon_info_s BotWeaponInfoTable[33] =
{
    { 1, "weapon_melee", 0, 0, 0, 0, 0.0f, 80.0f, 4800.0f },
    { 2, "weapon_sword", 0, 0, 0, 0, 0.0f, 80.0f, 4800.0f },
    { 3, "weapon_kiblast", 0, 0, 0, 0, 2.5f, 150.0f, 2500.0f },
    { 3, "weapon_kiblast", 1, 0, 0, 0, 2.5f, 150.0f, 2500.0f },
    { 4, "weapon_genericbeam", 0, 1, 1, 1, 0.0f, 300.0f, 4500.0f },
    { 4, "weapon_genericbeam", 1, 1, 0, 0, 0.0f, 300.0f, 4500.0f },
    { 5, "weapon_gallitgun", 0, 1, 1, 1, 0.0f, 800.0f, 5200.0f },
    { 6, "weapon_kamehameha", 0, 1, 1, 1, 0.0f, 800.0f, 5200.0f },
    { 7, "weapon_destructodisc", 0, 1, 0, 0, 0.0f, 200.0f, 3500.0f },
    { 9, "weapon_eyelaser", 0, 0, 0, 0, 1.0f, 200.0f, 2500.0f },
    { 10, "weapon_friezadisc", 0, 1, 0, 1, 0.0f, 200.0f, 3500.0f },
    { 11, "weapon_specialbeamcannon", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 12, "weapon_spiritbomb", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 12, "weapon_spiritbomb", 1, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 13, "weapon_bigbang", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 14, "weapon_fingerlaser", 0, 0, 0, 0, 1.0f, 200.0f, 2500.0f },
    { 15, "weapon_finalflash", 0, 1, 0, 1, 0.0f, 800.0f, 5200.0f },
    { 16, "weapon_masenko", 0, 1, 1, 1, 0.0f, 400.0f, 4800.0f },
    { 17, "weapon_deathball", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 18, "weapon_burningattack", 0, 1, 1, 1, 0.0f, 300.0f, 4500.0f },
    { 19, "weapon_scatterbeam", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 22, "weapon_powerbeam", 0, 1, 1, 1, 0.0f, 400.0f, 4800.0f },
    { 23, "weapon_mouthblast", 0, 1, 1, 1, 0.0f, 800.0f, 5200.0f },
    { 24, "weapon_finishingbuster", 0, 1, 0, 0, 0.0f, 800.0f, 5500.0f },
    { 30, "weapon_renzoku", 0, 1, 0, 0, 0.0f, 150.0f, 2500.0f },
    { 30, "weapon_renzoku", 1, 0, 0, 0, 2.5f, 150.0f, 2500.0f },
    { 8, "weapon_solarflare", 0, 0, 0, 0, 0.0f, 150.0f, 2500.0f },
    { 32, "weapon_kametorpedo", 0, 1, 0, 0, 0.0f, 1500.0f, 5500.0f },
    { 33, "weapon_telekinesis", 0, 1, 0, 0, 0.0f, 600.0f, 4400.0f },
    { 20, "weapon_candy", 0, 0, 0, 0, 1.0f, 200.0f, 900.0f },
    { 21, "weapon_scattershot", 0, 0, 0, 0, 1.0f, 150.0f, 2500.0f },
    { 128, "weapon_dummy", 0, 0, 0, 0, 1.0f, 1500.0f, 5500.0f },
    { 0, "", 0, 0, 0, 0, 0.0f, 0.0f, 0.0f },
};
