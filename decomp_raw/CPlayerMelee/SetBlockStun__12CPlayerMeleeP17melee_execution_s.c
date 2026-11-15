// SetBlockStun__12CPlayerMeleeP17melee_execution_s @0x104e80 size=154
typedef struct st_504e80_2 {
    char padding_0[304];
    int field_130;
} st_504e80_2;

typedef struct st_504e80_0 {
    char padding_0[60];
    unsigned int field_3c;
    char padding_40[16];
    int field_50;
    char padding_54[772];
    struct st_504e80_0 *field_358;
} st_504e80_0;

typedef struct st_504e80_1 {
    char padding_0[60];
    unsigned int field_3c;
    char padding_40[4];
    unsigned int field_44;
    char padding_48[8];
    int field_50;
    unsigned int field_54;
    char padding_58[768];
    struct st_504e80_0 *field_358;
} st_504e80_1;

int SetBlockStun__12CPlayerMeleeP17melee_execution_s(st_504e80_2 *a0, st_504e80_1 *a1)
{
    unsigned int v1;  // eax
    int v2;  // edi
    st_504e80_0 *iter;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int i;  // [bp-0x8]

    if (a1->field_54 != 2)
    {
        return v6;
    }
    else if (a1->field_3c)
    {
        return v5;
    }
    else if (!a1->field_44)
    {
        v1 = sub_48cca0(a0->field_130, a1->field_50);
        if (!v1)
            return v1;
        v2 = a1->field_50;
        i = v1;
        for (iter = a1->field_358; iter; i -= 1)
        {
            if ((int)i <= 0)
                return v1;
            v1 = sub_48db20(a0, &i, v2, iter->field_50);
            if (!v1)
                return v1;
            iter->field_3c = 1;
            iter = iter->field_358;
        }
        return v1;
    }
    else
    {
        return v4;
    }
}

