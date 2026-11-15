// Save__12CGlobalStateR5CSave @0x139ea0 size=147
typedef struct st_539ea0_1 {
    struct st_539ea0_0 *field_0;
    int field_4;
} st_539ea0_1;

typedef struct st_539ea0_0 {
    char padding_0[100];
    struct st_539ea0_0 *field_64;
} st_539ea0_0;

extern int gGlobalEntitySaveData;

unsigned int Save__12CGlobalStateR5CSave(st_539ea0_1 *a0, int a1)
{
    st_539ea0_1 *v0;  // eax
    st_539ea0_0 *iter;  // esi
    int v2;  // edi

    if (!sub_48db60(a1, "GLOBAL", a0, "\n", 1))
        return 0;
    v0 = a0;
    iter = v0->field_0;
    v2 = 0;
    while (1)
    {
        if (v2 >= v0->field_4 || !iter)
            return 1;
        if (!sub_48db60(a1, "GENT", iter, &gGlobalEntitySaveData, 3))
            break;
        iter = iter->field_64;
        v2 += 1;
        v0 = a0;
    }
    return 0;
}

