// Init__13CVoiceGameMgrP19IVoiceGameMgrHelperi @0x18bf00 size=221
typedef struct st_58bf00_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    int field_c;
} st_58bf00_0;

typedef struct st_58bf00_1 {
    unsigned int field_0;
} st_58bf00_1;

extern char voice_serverdebug;
extern char sv_alltalk;
extern st_58bf00_1 *g_engfuncs;
extern st_58bf00_1 *g_engfuncs.pfnCVarRegister;
extern st_58bf00_1 *g_engfuncs.pfnRegUserMsg;
extern st_58bf00_1 *g_engfuncs.pfnCVarGetPointer;

char Init__13CVoiceGameMgrP19IVoiceGameMgrHelperi(st_58bf00_0 *a0, unsigned int a1, int a2)
{
    a0->field_8 = a1;
    if (a2 > 32)
        a2 = 32;
    a0->field_c = a2;
    g_engfuncs("sprites/voiceicon.spr");
    a0->field_0 = g_engfuncs.pfnRegUserMsg("VoiceMask", 8);
    a0->field_4 = g_engfuncs.pfnRegUserMsg("ReqState", 0);
    if (!g_engfuncs.pfnCVarGetPointer("voice_serverdebug"))
        g_engfuncs.pfnCVarRegister(&voice_serverdebug);
    if (!g_engfuncs.pfnCVarGetPointer("sv_alltalk"))
        g_engfuncs.pfnCVarRegister(&sv_alltalk);
    return 1;
}

