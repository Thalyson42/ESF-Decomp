// globals_esf.cpp -- variaveis globais do servidor do ESF (nm -S do hl_i386.so; static_assert confere os tamanhos em -m32).
// [OK] = tipo/tamanho/valor inicial conferidos no binario.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "skill.h"
#include "activity.h"

// ---- do globals.cpp do SDK (identicos) ----
DLL_GLOBAL ULONG        g_ulFrameCount;                 // [OK] .bss 4
DLL_GLOBAL ULONG        g_ulModelIndexPlayer;           // [OK] .bss 4
DLL_GLOBAL Vector       g_vecAttackDir;                 // [OK] .bss 12
DLL_GLOBAL int          gDisplayTitle;                  // [OK] .bss 4
DLL_GLOBAL BOOL         g_fGameOver;                    // [OK] .bss 4
DLL_GLOBAL const Vector g_vecZero = Vector(0, 0, 0);    // [OK] .bss 12
DLL_GLOBAL int          g_Language;                     // [OK] .bss 4
DLL_GLOBAL skilldata_t  gSkillData;                     // [OK] .bss 0x154 (skill.cpp do SDK)

// ---- activity_map: tabela do SDK (activitymap.h) ----
#include "activitymap.h"                                // [OK] .data 0x268 = 77 entradas de 8 bytes

// ---- ESF ----
float g_flWeaponCheat;                                  // [OK] .bss 4 (esf_mods.cpp: sv_cheats)
int   g_serveractive = 0;                               // [OK] .data 4, inicial 0 (client_esf.cpp)
int   m_iSpriteTexture;                                 // [OK] .bss 4 (sprite do feixe das waypoints/aura)

const char *g_pAuraColorString[5] = { "blue", "green", "purple", "red", "yellow" };   // [OK] .data 0x14: ponteiros para as 5 strings

// waypoints: bytes consecutivos no .data (0x1ccc95..0x1ccc98); [OK] valores iniciais lidos do binario
char g_waypoint_on = 0;
char g_auto_waypoint = 0;
char g_path_waypoint = 0;
char g_path_waypoint_enable = 1;
char DrawDBSpots = 0;                                   // [OK] .data 1

Vector GatherDBPosForTeamGood;                          // [OK] .bss 12
Vector GatherDBPosForTeamEvil;                          // [OK] .bss 12

// BotManager: objeto global de 0x10f8 bytes em .bss, sem construtor estatico (nm: nenhum _GLOBAL_.I.BotManager).
// So o endereco importa: o header CBotManager.h descreve apenas os campos conhecidos, por isso o armazenamento e bruto.
char BotManager[0x10f8] __attribute__((aligned(4)));

#define ESF_SIZE_CHECK(name, n) typedef char name##_size_check[(sizeof(name) == (n)) ? 1 : -1]
ESF_SIZE_CHECK(g_vecAttackDir, 12);
ESF_SIZE_CHECK(gSkillData, 0x154);
ESF_SIZE_CHECK(activity_map, 0x268);
ESF_SIZE_CHECK(g_pAuraColorString, 0x14);
ESF_SIZE_CHECK(BotManager, 0x10f8);
