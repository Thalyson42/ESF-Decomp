// RestoreBots__11CBotManager @0x13f520 size=308
typedef struct st_53f520_1 {
    char field_0;
    char field_1;
    short field_2;
    short field_4;
    char field_6;
    char padding_7[33];
    short field_28;
} st_53f520_1;

typedef struct st_53f520_3 {
    char padding_0[4];
    struct st_53f520_2 *field_4;
} st_53f520_3;

typedef struct st_53f520_2 {
    char padding_0[8];
    unsigned int field_8;
} st_53f520_2;

typedef struct st_53f520_0 {
    float field_0;
} st_53f520_0;

extern st_53f520_0 *gpGlobals;

unsigned int RestoreBots__11CBotManager(float idx)
{
    st_53f520_3 **v1;  // edx
    st_53f520_1 *v2;  // esi
    st_53f520_3 *v3;  // ecx
    st_53f520_2 *v4;  // eax
    unsigned int v5;  // eax

    if (1.0 <= *(float *)(*(unsigned int *)&idx + 32) && *(float *)(*(unsigned int *)&idx + 32) <= *(float *)gpGlobals)
    {
        if (*(int *)*(int *)idx)
        {
            if (!*(char *)(*(unsigned int *)&idx + 36))
                *(char *)(*(unsigned int *)&idx + 36) = 1;
            v1 = *(int *)idx;
            if (!*v1)
            {
                v2 = NULL;
            }
            else
            {
                v2 = (st_53f520_1 *)*v1->padding_0;
                v3 = *v1;
                if (v3)
                {
                    if (v3 == v1[1])
                        v1[1] = v3->field_4;
                    v4 = *v1->field_4;
                    *v1 = v4;
                    if (v4)
                        v4->field_8 = 0;
                    v3->field_4 = NULL;
                    __builtin_delete(v3);
                }
            }
            if (v2->field_28 > 0)
                CBotManager::CreateSuperBot(idx, v2->field_2, &v2->field_6, v2->field_1 + 1, v2->field_28);
            else
                CBotManager::CreateBot(idx, v2->field_4, v2->field_2, &v2->field_6, v2->field_0 + 1, v2->field_1);
            *(float *)(*(unsigned int *)&idx + 32) = (float)(2.0 + *(float *)gpGlobals);
            v5 = __builtin_delete(v2);
            return v5;
        }
        *(unsigned int *)(*(unsigned int *)&idx + 32) = 0;
    }
    else if (!*(char *)(*(unsigned int *)&idx + 36))
    {
        return v5;
    }
    *(char *)(*(unsigned int *)&idx + 36) = 0;
    return v5;
}

