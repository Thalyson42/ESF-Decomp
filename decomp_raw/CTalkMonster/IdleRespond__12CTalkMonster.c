// IdleRespond__12CTalkMonster @0x125fb0 size=132
typedef struct st_525fb0_0 {
    unsigned int field_0;
} st_525fb0_0;

extern st_525fb0_0 *g_engfuncs.pfnRandomFloat;

int IdleRespond__12CTalkMonster(double a0, float a1)
{
    char v0[12];  // [bp-0x50]
    char v1[4];  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]

    CTalkMonster::GetVoicePitch(a1);
    v3 = 2.0f;
    v2 = 0x3f800000;
    strncpy(v0, "333@", 4);
    g_engfuncs.pfnRandomFloat(v0, 3.200000047683716f);
    strncpy(v1, "333@", 4);
    return (*(int *)(*(int *)(*(unsigned int *)&a1 + 96) + 360))(a1, *(int *)(*(unsigned int *)&a1 + 692), (unsigned int)v1);
}

