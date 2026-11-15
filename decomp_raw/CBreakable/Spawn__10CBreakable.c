// Spawn__10CBreakable @0xc1c30 size=266
typedef struct st_4c1c30_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4c1c30_0;

typedef struct st_4c1c30_1 {
    unsigned int field_0;
} st_4c1c30_1;

extern char BreakTouch__10CBreakableP11CBaseEntity;
extern st_4c1c30_1 *g_6167c8;
extern st_4c1c30_0 *gpGlobals;

unsigned int Spawn__10CBreakable(float idx)
{
    unsigned int *v1;  // eax
    unsigned int v3;  // eax
    unsigned int *v4;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    if (*(char *)(*(int *)idx + 416) & 1)
        *(unsigned int *)(*(int *)idx + 364) = 0;
    else
        *(unsigned int *)(*(int *)idx + 364) = 0x3f800000;
    *(unsigned int *)(*(int *)idx + 268) = 4;
    *(unsigned int *)(*(int *)idx + 264) = 7;
    v1 = *(int *)idx;
    *(float *)(*(unsigned int *)&idx + 120) = *(float *)&v1[21];
    v1[21] = 0;
    if (!*(int *)(*(unsigned int *)&idx + 108))
        *(unsigned int *)(*(int *)idx + 524) = 1;
    *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(g_6167c8(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 24) = &BreakTouch__10CBreakableP11CBaseEntity;
    if (*(char *)(*(int *)idx + 416) & 1)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    }
    v3 = sub_48c7c0(idx);
    if (v3)
        return v3;
    v4 = *(int *)idx;
    if (!v4[82])
        return v4;
    *((char *)&v4[105] + 3) = *((char *)&v4[105] + 3) | 2;
    return v4;
}

