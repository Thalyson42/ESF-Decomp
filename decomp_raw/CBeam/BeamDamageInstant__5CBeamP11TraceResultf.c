// BeamDamageInstant__5CBeamP11TraceResultf @0xb7510 size=76
typedef struct st_4b7510_0 {
    char padding_0[480];
    float field_1e0;
    float field_1e4;
} st_4b7510_0;

typedef struct st_4b7510_1 {
    float field_0;
} st_4b7510_1;

extern st_4b7510_1 *gpGlobals;

int BeamDamageInstant__5CBeamP11TraceResultf(st_4b7510_0 **a0, int a1, float a2)
{
    *a0->field_1e0 = a2;
    *a0->field_1e4 = (float)(*(float *)gpGlobals - 1.0);
    return CBeam::BeamDamage(a0, a1);
}

