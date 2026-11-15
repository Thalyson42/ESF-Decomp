// HitTop__9CFuncPlat @0xe9360 size=243
typedef struct st_4e9360_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e9360_0;

extern char CallGoDown__9CFuncPlat;
extern st_4e9360_0 *gpGlobals;

unsigned int HitTop__9CFuncPlat(float idx)
{
    unsigned int *v1;  // esi
    unsigned int *v2;  // edx
    unsigned int v3;  // eax
    unsigned int *v4;  // eax

    v1 = *(int *)idx;
    if (v1[122])
        sub_489390(v1[130], 6, v1[122] + gpGlobals->field_98, 0, 0, 32, 100);
    v2 = *(int *)idx;
    if (v2[123])
        sub_489390(v2[130], 1, v2[123] + gpGlobals->field_98, *(float *)(*(unsigned int *)&idx + 264), 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 0;
    v3 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 236))(idx);
    if (v3)
        return v3;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &CallGoDown__9CFuncPlat;
    v4 = *(int *)idx;
    *(float *)&v4[65] = (float)(*(float *)&v4[64] + 3.0);
    return v4;
}

