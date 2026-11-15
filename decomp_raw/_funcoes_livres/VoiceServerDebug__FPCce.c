// VoiceServerDebug__FPCce @0x18be10 size=110
typedef struct st_58be10_0 {
    unsigned int field_0;
} st_58be10_0;

extern float g_5cccdc;
extern st_58be10_0 *g_6168b4;

unsigned int VoiceServerDebug__FPCce(float a0)
{
    char v0;  // [bp-0x1004]
    char v2;  // [bp+0x8]

    if (g_5cccdc != 0.0f)
        sub_489310(&v0, 0x1000, a0, &v2);
    return g_6168b4(1, "%s", &v0);
}

