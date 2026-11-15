// GoDown__9CFuncPlat @0xe9100 size=202
typedef struct st_4e9100_1 {
    char padding_0[488];
    unsigned int field_1e8;
} st_4e9100_1;

typedef struct st_4e9100_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9100_0;

extern char CallHitBottom__9CFuncPlat;
extern st_4e9100_0 *gpGlobals;

short GoDown__9CFuncPlat(float idx)
{
    st_4e9100_1 *v4;  // edx
    unsigned int v5;  // eax
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v4 = *(int *)idx;
    if (v4->field_1e8)
        v5 = EMIT_SOUND_DYN(*(int *)&v4[1].padding_0[28], 6, v4->field_1e8 + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 3;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(v5, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 224) = &CallHitBottom__9CFuncPlat;
    v7 = *(unsigned int *)&idx + 168;
    *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 168);
    *(float *)&v1 = *(float *)&v7[1];
    *(float *)&v2 = *(float *)&v7[2];
    return CBaseToggle::LinearMove(idx, &v0, *(float *)(*(int *)idx + 504));
}

