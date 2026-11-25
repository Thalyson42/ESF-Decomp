// client_esf.cpp -- partes de client.cpp do ESF que diferem do SDK.
// [OK] conferido contra o decompilado de hl_i386.so: ClientDisconnect @0x49f470, ServerActivate @0x4a0ee0
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "gamerules.h"
#include "soundent.h"
#include "esf_extras.h"
#include "CBotManager.h"

extern int gmsgSayText;
extern int g_serveractive;
extern CBotManager BotManager;
void LinkUserMessages(void);

// Igual ao SDK, com o que o ESF acrescenta: avisa o BotManager, zera power level (e o maximo) e modos especiais, e forca
// UpdateClientData (vtable +0x204 do jogador) antes de mandar a mensagem de saida.
void ClientDisconnect(edict_t *pEntity)
{
    if (g_fGameOver)
        return;

    BotManager.DisconnectPlayer(pEntity);                  // [OK]

    CBasePlayer *pPlayer = (CBasePlayer *)GET_PRIVATE(pEntity ? pEntity : INDEXENT(0));
    pPlayer->SetPowerLevel(0);                             // [OK]
    pPlayer->SetMaxPowerLevel(0);                          // [OK]
    pPlayer->UpdateClientData();                           // [?] vtable +0x204 (SDK: slot UpdateClientData)
    pPlayer->RemoveSpecialModes();                         // [OK]

    char text[256];
    sprintf(text, "- %s has left the game\n", STRING(pEntity->v.netname));
    MESSAGE_BEGIN(MSG_ALL, gmsgSayText, NULL);
        WRITE_BYTE(ENTINDEX(pEntity));
        WRITE_STRING(text);
    MESSAGE_END();

    CSound *pSound = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(pEntity));
    if (pSound)
        pSound->Reset();

    pEntity->v.takedamage = DAMAGE_NO;                     // nao atrai autoaim
    pEntity->v.solid = SOLID_NOT;
    UTIL_SetOrigin(&pEntity->v, pEntity->v.origin);

    g_pGameRules->ClientDisconnected(pEntity);             // vtable do gamerules +0x34
}

// Igual ao SDK (Activate em todas as entidades nao-cliente, nao dormentes) + MapInit do BotManager no fim.
void ServerActivate(edict_t *pEdictList, int edictCount, int clientMax)
{
    g_serveractive = 1;

    for (int i = 0; i < edictCount; i++)
    {
        if (pEdictList[i].free)
            continue;
        if (i < clientMax || !pEdictList[i].pvPrivateData)
            continue;

        CBaseEntity *pClass = CBaseEntity::Instance(&pEdictList[i]);
        if (pClass && !(pClass->pev->flags & FL_DORMANT))
            pClass->Activate();
        else
            ALERT(at_console, "Can't instance %s\n", STRING(pEdictList[i].v.classname));
    }

    LinkUserMessages();
    BotManager.MapInit();
}

// ClientUserInfoChanged @0x4a0b90 -- igual ao SDK, exceto: a mensagem "changed name" e enviada SEMPRE (sem o teste maxClients > 1).
extern int g_teamplay;

void ClientUserInfoChanged(edict_t *pEntity, char *infobuffer)
{
    if (!pEntity->pvPrivateData)
        return;

    if (pEntity->v.netname && STRING(pEntity->v.netname)[0] != 0 &&
        strcmp(STRING(pEntity->v.netname), g_engfuncs.pfnInfoKeyValue(infobuffer, "name")))
    {
        char sName[256];
        char *pName = g_engfuncs.pfnInfoKeyValue(infobuffer, "name");
        strncpy(sName, pName, sizeof(sName) - 1);
        sName[sizeof(sName) - 1] = '\0';

        // remove '%' do nome (troca por espaco)
        for (char *pApersand = sName; pApersand != NULL && *pApersand != 0; pApersand++)
        {
            if (*pApersand == '%')
                *pApersand = ' ';
        }

        g_engfuncs.pfnSetClientKeyValue(ENTINDEX(pEntity), infobuffer, "name", sName);

        char text[256];
        sprintf(text, "* %s changed name to %s\n", STRING(pEntity->v.netname), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        MESSAGE_BEGIN(MSG_ALL, gmsgSayText, NULL);
            WRITE_BYTE(ENTINDEX(pEntity));
            WRITE_STRING(text);
        MESSAGE_END();

        if (g_teamplay)
        {
            UTIL_LogPrintf("\"%s<%i><%s><%s>\" changed name to \"%s\"\n",
                STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity), GETPLAYERAUTHID(pEntity),
                g_engfuncs.pfnInfoKeyValue(infobuffer, "model"), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        }
        else
        {
            UTIL_LogPrintf("\"%s<%i><%s><%i>\" changed name to \"%s\"\n",
                STRING(pEntity->v.netname), GETPLAYERUSERID(pEntity), GETPLAYERAUTHID(pEntity),
                GETPLAYERUSERID(pEntity), g_engfuncs.pfnInfoKeyValue(infobuffer, "name"));
        }
    }

    g_pGameRules->ClientUserInfoChanged(GetClassPtr((CBasePlayer *)&pEntity->v), infobuffer);   // vtable do gamerules +0x64
}
