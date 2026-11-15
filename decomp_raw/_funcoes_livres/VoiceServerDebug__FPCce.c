// VoiceServerDebug__FPCce @0x18be10 size=110
typedef struct st_58be10_0 {
    unsigned int field_0;
} st_58be10_0;

extern float voice_serverdebug+12;
extern st_58be10_0 *g_engfuncs.pfnAlertMessage;

unsigned int VoiceServerDebug__FPCce(float a0)
{
    char v0;  // [bp-0x1004]
    char v2;  // [bp+0x8]

    if (voice_serverdebug+12 != 0.0f)
        vsnprintf@GLIBC_2.0(&v0, 0x1000, a0, &v2);
    return g_engfuncs.pfnAlertMessage(1, "%s", &v0);
}

