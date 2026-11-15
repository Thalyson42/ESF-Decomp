// EquipPlayer__16CGamePlayerEquipP11CBaseEntity @0xd0db0 size=200
typedef struct st_4d0db0_0 {
    char padding_0[160];
    struct st_4d0db0_1 *field_a0;
} st_4d0db0_0;

typedef struct st_4d0db0_1 {
    unsigned int field_0;
} st_4d0db0_1;

typedef struct st_4d0db0_2 {
    char padding_0[96];
    struct st_4d0db0_0 *field_60;
} st_4d0db0_2;

typedef struct st_4d0db0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4d0db0_3;

extern st_4d0db0_3 *gpGlobals;

int * EquipPlayer__16CGamePlayerEquipP11CBaseEntity(unsigned int a0, st_4d0db0_2 *a1)
{
    int *v4;  // eax
    int *v5;  // eax
    int i;  // edi
    unsigned int v7;  // ecx
    int *v8;  // esi
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    int v2;  // [bp-0xc]
    st_4d0db0_2 *v3;  // [bp-0x8]

    v3 = NULL;
    v4 = a1->field_60->field_a0(a1);
    if (v4)
        v3 = a1;
    if (!v3)
        return v4;
    v2 = 0;
    v0 = a0 + 232;
    while (1)
    {
        v5 = v2 * 4;
        if (!*(int *)((char *)v5 + a0 + 104))
            return v5;
        i = 0;
        v7 = v2 * 4;
        if (NULL < *(int *)((char *)v5 + v0))
        {
            v1 = a0 + 104;
            do
            {
                v8 = v7;
                v5 = sub_48a270(v3, *(int *)((char *)v8 + v1) + gpGlobals->field_98);
                i += 1;
                v7 = v2 * 4;
            } while (i < *(int *)((char *)v8 + v0));
        }
        v2 += 1;
        if (v2 > 31)
            return v5;
    }
}

