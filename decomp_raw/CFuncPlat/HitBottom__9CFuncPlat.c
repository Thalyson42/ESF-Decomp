// HitBottom__9CFuncPlat @0xe91d0 size=181
typedef struct st_4e91d0_1 {
    struct st_4e91d0_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
    char padding_84[132];
    float field_108;
} st_4e91d0_1;

typedef struct st_4e91d0_0 {
    char padding_0[488];
    unsigned int field_1e8;
    unsigned int field_1ec;
    char padding_1f0[24];
    int field_208;
} st_4e91d0_0;

typedef struct st_4e91d0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4e91d0_2;

extern st_4e91d0_2 *gpGlobals;

unsigned int HitBottom__9CFuncPlat(st_4e91d0_1 *a0)
{
    st_4e91d0_0 *v0;  // esi
    unsigned int v1;  // eax
    st_4e91d0_0 *v2;  // edx

    v0 = a0->field_0;
    if (v0->field_1e8)
        v1 = EMIT_SOUND_DYN(v0->field_208, 6, v0->field_1e8 + gpGlobals->field_98, 0, 0, 32, 100);
    v2 = a0->field_0;
    if (v2->field_1ec)
        v1 = EMIT_SOUND_DYN(v2->field_208, 1, v2->field_1ec + gpGlobals->field_98, a0->field_108, 0.800000011920929f, 0, 100);
    a0->field_80 = 1;
    return v1;
}

