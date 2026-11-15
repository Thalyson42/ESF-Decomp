// DecalGunshot__FP11TraceResulti @0x137490 size=170
typedef struct st_537490_0 {
    char padding_0[128];
    char field_80;
    char padding_81[263];
    unsigned int field_188;
    unsigned int field_18c;
} st_537490_0;

typedef struct st_537490_1 {
    char padding_0[48];
    struct st_537490_0 *field_30;
} st_537490_1;

typedef struct st_537490_2 {
    unsigned int field_0;
} st_537490_2;

extern st_537490_2 *g_6168d4;
extern st_537490_2 *g_6168d8;

unsigned int * DecalGunshot__FP11TraceResulti(st_537490_1 *a0)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax
    unsigned int v2;  // edi

    v0 = sub_48c490(a0->field_30);
    if (!v0)
        return v0;
    v1 = (!a0->field_30 ? NULL : (struct st_537490_0 *)&a0->field_30->field_80);
    if (v1[67] != 4)
    {
        v1 = (!a0->field_30 ? NULL : (struct st_537490_0 *)&a0->field_30->field_80);
        if (v1[66] != 13)
            return v1;
    }
    v2 = 0;
    if (!a0->field_30 || (v1 = g_6168d8(a0->field_30), !v1))
        v2 = 1;
    if (v2 || a0->field_30)
        return v1;
    g_6168d4(0);
    return v1;
}

