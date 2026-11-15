// FireAtPoint__6CLaserR11TraceResult @0xb32c0 size=120
typedef struct st_4b32c0_2 {
    int field_0;
} st_4b32c0_2;

typedef struct st_4b32c0_1 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4b32c0_1;

typedef struct st_4b32c0_0 {
    struct st_4b32c0_1 *field_0;
    char padding_4[96];
    struct st_4b32c0_2 *field_64;
} st_4b32c0_0;

int FireAtPoint__6CLaserR11TraceResult(st_4b32c0_0 *a0, unsigned int *a1)
{
    unsigned int *v1;  // ecx
    unsigned int *v2;  // edx
    unsigned int *v0;  // [bp-0x34]

    v1 = a1 + 5;
    v2 = a0->field_0;
    v2[20] = a1[5];
    v2[21] = v1[1];
    v2[22] = v1[2];
    if (a0->field_64)
        UTIL_SetOrigin(*(int *)a0->field_64, v1);
    CBeam::BeamDamage(a0, a1);
    v0 = a1 + 5;
    return CBeam::DoSparks(a0, CBeam::GetStartPos(a0));
}

