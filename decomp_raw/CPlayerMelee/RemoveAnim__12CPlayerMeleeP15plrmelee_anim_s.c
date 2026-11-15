// RemoveAnim__12CPlayerMeleeP15plrmelee_anim_s @0x100820 size=225
typedef struct st_500820_2 {
    char padding_0[132];
    struct st_500820_0 *field_84;
    char padding_88[156];
    struct st_500820_3 *field_124;
} st_500820_2;

typedef struct st_500820_3 {
    struct st_500820_1 *field_0;
} st_500820_3;

typedef struct st_500820_1 {
    char padding_0[520];
    unsigned int field_208;
} st_500820_1;

typedef struct st_500820_0 {
    char padding_0[664];
    unsigned int field_298;
    char padding_29c[8];
    struct st_500820_0 *field_2a4;
} st_500820_0;

typedef struct st_500820_4 {
    unsigned int field_0;
} st_500820_4;

extern st_500820_4 *g_engfuncs.pfnIndexOfEdict;

st_500820_0 * RemoveAnim__12CPlayerMeleeP15plrmelee_anim_s(st_500820_2 *a0, st_500820_0 *a1)
{
    st_500820_0 *iter;  // ecx
    st_500820_0 *v2;  // ecx

    if (a1)
    {
        if (a1->field_298 && a0->field_124)
            UTIL_Model_RemoveAll(g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_124 + 520)));
        if (a0->field_84 == a1)
        {
            a0->field_84 = a1->field_2a4;
            __builtin_delete(a1);
            return a0->field_84;
        }
        for (iter = a0->field_84; iter->field_2a4; iter = iter->field_2a4)
        {
            if (iter->field_2a4 == a1)
            {
                if (iter->field_2a4)
                {
                    v2 = iter->field_2a4;
                    iter->field_2a4 = v2->field_2a4;
                    __builtin_delete(v2);
                    break;
                }
            }
        }
    }
    return NULL;
}

