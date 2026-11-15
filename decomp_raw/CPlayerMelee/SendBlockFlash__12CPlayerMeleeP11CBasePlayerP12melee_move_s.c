// SendBlockFlash__12CPlayerMeleeP11CBasePlayerP12melee_move_s @0x106340 size=1115
typedef struct st_506340_4 {
    char padding_0[164];
    struct st_506340_5 *field_a4;
} st_506340_4;

typedef struct st_506340_6 {
    struct st_506340_2 *field_0;
    char padding_4[92];
    struct st_506340_4 *field_60;
    char padding_64[796];
    char field_380;
    char padding_381[2051];
    struct st_506340_2 *field_b84;
    struct st_506340_2 *field_b88;
} st_506340_6;

typedef struct st_506340_0 {
    char padding_0[292];
    int field_124;
} st_506340_0;

typedef struct st_506340_5 {
    unsigned int field_0;
} st_506340_5;

typedef struct st_506340_2 {
    unsigned int field_0;
    struct st_506340_3 *field_4;
    unsigned int field_8;
    char padding_c[409];
    char field_1a5;
} st_506340_2;

typedef struct st_506340_1 {
    char padding_0[4];
    unsigned int field_4;
} st_506340_1;

typedef struct st_506340_3 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_506340_2 *field_8;
} st_506340_3;

extern st_506340_5 *g_616928;

st_506340_2 * SendBlockFlash__12CPlayerMeleeP11CBasePlayerP12melee_move_s(st_506340_0 *a0, st_506340_6 *a1, st_506340_1 *a2)
{
    int v10;  // edi
    int v11;  // esi
    st_506340_2 *v20;  // eax
    st_506340_2 *v21;  // esi
    st_506340_2 *v22;  // eax
    st_506340_3 *v23;  // esi
    st_506340_3 *v24;  // eax
    st_506340_2 *v25;  // eax
    int v12;  // eax
    int v13;  // eax
    st_506340_2 *v14;  // eax
    st_506340_2 **v15;  // edi
    st_506340_2 *v16;  // esi
    st_506340_3 *v17;  // esi
    st_506340_3 *v18;  // eax
    int v0;  // [bp-0x24]
    char v1;  // [bp-0x1d]
    st_506340_2 *v2;  // [bp-0x1c]
    char v3;  // [bp-0x15]
    unsigned int v4;  // [bp-0x14]
    char v5;  // [bp-0xe]
    char v6;  // [bp-0xd]
    st_506340_2 *v7;  // [bp-0xc]
    char v8;  // [bp-0x6]
    char v9;  // [bp-0x5]

    if (!sub_48dbf0(a0, a2))
    {
        v10 = 15;
    }
    else
    {
        v10 = 35;
        if (sub_48dbf0(a0, a2) == 1)
            v10 = 25;
    }
    v0 = sub_48bb90(a0->field_124);
    v11 = v10 + v0 / sub_48bb90(a1) * 10;
    v12 = v11;
    v13 = v12 - v10;
    if (v12 - v10 < NULL)
        v13 = -v13;
    if (v13 > 10)
        v11 = (v11 <= v10 ? v10 - 10 : v10 + 10);
    if ((int)g_616928(0, 100) < v11)
    {
        sub_4889d0(&a1->field_380, 2, 16);
        v9 = 0;
        v14 = a1->field_60->field_a4(a1);
        if (!v14)
        {
            v14 = a1->field_0;
            v9 = (a1->field_0->field_1a5 & 32) != 0;
        }
        if (!v9)
        {
            return v14;
        }
        else if (a1)
        {
            v15 = &a1->field_b84;
            if (!a1->field_b84)
            {
                v16 = sub_48d6a0(12);
                v8 = 1;
                v16->field_4 = NULL;
                v16->field_8 = 0;
                sub_48d0e0(v16, 0, 4);
                v8 = 0;
                a1->field_b84 = v16;
                if (v8)
                    sub_48d4e0(v16);
                *v15->field_0 = 0;
            }
            else
            {
                v7 = v15[1];
                v17 = sub_48d6a0(12);
                v6 = 1;
                v17->field_4 = 0;
                v17->field_8 = NULL;
                sub_48d0e0(v17, 0, 4);
                v6 = 0;
                v7->field_4 = v17;
                if (v6)
                    sub_48d4e0(v17);
                v15[1]->field_4->field_8 = v15[1];
                v18 = v15[1]->field_4;
                v15[1] = v18;
                v18->field_0 = 0;
                v25 = v15[1];
                v25->field_4 = NULL;
                return v25;
            }
        }
        else
        {
            return v14;
        }
    }
    else
    {
        sub_4889d0(&a1->field_380, 2, sub_488390(a0, a2->field_4));
        v5 = 0;
        v20 = a1->field_60->field_a4(a1);
        if (!v20)
        {
            v20 = a1->field_0;
            v5 = (a1->field_0->field_1a5 & 32) != 0;
        }
        if (!v5)
        {
            return v20;
        }
        else if (a1)
        {
            v15 = &a1->field_b84;
            v4 = a2->field_4;
            if (!a1->field_b84)
            {
                v21 = sub_48d6a0(12);
                v3 = 1;
                v21->field_4 = NULL;
                v21->field_8 = 0;
                sub_48d0e0(v21, 0, 4);
                v3 = 0;
                a1->field_b84 = v21;
                if (v3)
                    sub_48d4e0(v21);
                *v15->field_0 = v4;
            }
            else
            {
                v2 = v15[1];
                v23 = sub_48d6a0(12);
                v1 = 1;
                v23->field_4 = 0;
                v23->field_8 = NULL;
                sub_48d0e0(v23, 0, 4);
                v1 = 0;
                v2->field_4 = v23;
                if (v1)
                    sub_48d4e0(v23);
                v15[1]->field_4->field_8 = v15[1];
                v24 = v15[1]->field_4;
                v15[1] = v24;
                v24->field_0 = v4;
                v25 = v15[1];
                v25->field_4 = NULL;
                return v25;
            }
        }
        else
        {
            return v20;
        }
    }
    *v15->field_4 = NULL;
    *v15->field_8 = 0;
    v22 = *v15;
    v15[1] = v22;
    return v22;
}

