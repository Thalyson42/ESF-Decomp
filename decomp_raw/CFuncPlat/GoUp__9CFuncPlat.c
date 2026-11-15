// GoUp__9CFuncPlat @0xe9290 size=202
typedef struct st_4e9290_1 {
    char padding_0[488];
    unsigned int field_1e8;
} st_4e9290_1;

typedef struct st_4e9290_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9290_0;

extern char CallHitTop__9CFuncPlat;
extern st_4e9290_0 *gpGlobals;

short GoUp__9CFuncPlat(float idx)
{
    st_4e9290_1 *v4;  // edx
    unsigned int v5;  // eax
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v4 = *(int *)idx;
    if (v4->field_1e8)
        v5 = sub_489390(*(int *)&v4[1].padding_0[28], 6, v4->field_1e8 + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 2;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(v5, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 224) = &CallHitTop__9CFuncPlat;
    v7 = *(unsigned int *)&idx + 156;
    *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 156);
    *(float *)&v1 = *(float *)&v7[1];
    *(float *)&v2 = *(float *)&v7[2];
    return sub_488220(idx, &v0, *(float *)(*(int *)idx + 504));
}

