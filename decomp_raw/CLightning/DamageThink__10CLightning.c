// DamageThink__10CLightning @0xb19f0 size=113
typedef struct st_4b19f0_0 {
    float field_0;
} st_4b19f0_0;

extern st_4b19f0_0 *gpGlobals;

void DamageThink__10CLightning(float a0)
{
    unsigned int v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x84]
    unsigned int v2;  // [bp-0x80]
    char *v3;  // [bp-0x7c]
    char v4;  // [bp-0x54]

    *(float *)(*(int *)a0 + 260) = (float)(0.1 + *(float *)gpGlobals);
    v3 = &v4;
    v2 = 0;
    v1 = 0;
    v0 = CBeam::GetEndPos(a0);
    UTIL_TraceLine(CBeam::GetStartPos(a0));
    CBeam::BeamDamage(a0, &v4);
    return;
}

