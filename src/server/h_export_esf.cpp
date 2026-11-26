// Ponto de entrada da DLL: a engine entrega a tabela de funcoes e os globais. Igual ao SDK (h_export.cpp).
// O binario copia 144 dwords (576 bytes = sizeof(enginefuncs_t)) para g_engfuncs e guarda o ponteiro dos globais.
#include "extdll.h"
#include "util.h"

enginefuncs_t g_engfuncs;
globalvars_t *gpGlobals;

extern "C" void GiveFnptrsToDll(enginefuncs_t *pengfuncsFromEngine, globalvars_t *pGlobals)
{
    memcpy(&g_engfuncs, pengfuncsFromEngine, sizeof(enginefuncs_t));
    gpGlobals = pGlobals;
}
