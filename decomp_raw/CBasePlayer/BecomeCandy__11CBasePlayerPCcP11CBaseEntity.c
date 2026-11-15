// BecomeCandy__11CBasePlayerPCcP11CBaseEntity @0xf0390 size=357
typedef struct st_4f0390_2 {
    unsigned int field_0;
} st_4f0390_2;

typedef struct st_4f0390_1 {
    char padding_0[52];
    struct st_4f0390_2 *field_34;
    char padding_38[424];
    struct st_4f0390_2 *field_1e0;
} st_4f0390_1;

typedef struct st_4f0390_0 {
    char padding_0[280];
    char field_118;
    char padding_119[140];
    char field_1a5;
    char padding_1a6[98];
    int field_208;
} st_4f0390_0;

typedef struct st_4f0390_3 {
    struct st_4f0390_0 *field_0;
    char padding_4[92];
    struct st_4f0390_1 *field_60;
    char padding_64[768];
    unsigned int field_364;
} st_4f0390_3;

unsigned int BecomeCandy__11CBasePlayerPCcP11CBaseEntity(st_4f0390_3 *a0, char *a1, unsigned int *a2)
{
    char *v1;  // eax
    char *v2;  // edi
    char *v11;  // edi
    unsigned int v12;  // ecx
    unsigned int v13;  // cc_op
    unsigned int v14;  // cc_dep1
    unsigned int v15;  // cc_dep2
    char *v16;  // esi
    char *v17;  // esi
    char *v18;  // edi
    unsigned int v19;  // 4101
    char *v20;  // edi
    unsigned int v3;  // ecx
    unsigned int v21;  // ecx
    unsigned int v22;  // cc_op
    unsigned int v23;  // cc_dep1
    unsigned int v24;  // cc_dep2
    char *v25;  // esi
    char *v26;  // edi
    unsigned int v27;  // 4101
    st_4f0390_3 *v28;  // edx
    st_4f0390_3 *v29;  // edx
    unsigned int v4;  // cc_op
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    char *v7;  // esi
    char *v8;  // esi
    char *v9;  // edi
    unsigned int v10;  // 4101
    char v0;  // [bp-0x24]

    v1 = a1;
    v2 = "cookie";
    v3 = 7;
    v4 = 13;
    v5 = 0;
    v6 = 0;
    v7 = v1;
    do
    {
        v8 = v7;
        v9 = v2;
        if (!v3)
            break;
        v3 -= 1;
        v4 = 4;
        v5 = *v8;
        v6 = *v9;
        v2 = v9 + 1;
        v7 = v8 + 1;
    } while (*v8 == *v9);
    v10 = _ccall(4, v4, v5, v6, 0);
    if (v10 & 1)
    {
        a0->field_60->field_1e0(&v0, a0);
        sub_48a850(&v0, a0->field_0);
    }
    else
    {
        v11 = "chocolate";
        v12 = 10;
        v13 = 13;
        v14 = 0;
        v15 = 0;
        v16 = v1;
        do
        {
            v17 = v16;
            v18 = v11;
            if (!v12)
                break;
            v12 -= 1;
            v13 = 4;
            v14 = *v17;
            v15 = *v18;
            v11 = v18 + 1;
            v16 = v17 + 1;
        } while (*v17 == *v18);
        v19 = _ccall(4, v13, v14, v15, 0);
        if (v19 & 1)
        {
            a0->field_60->field_1e0(&v0, a0);
            sub_489420(&v0, a0->field_0);
        }
        else
        {
            v20 = "donut";
            v21 = 6;
            v22 = 13;
            v23 = 0;
            v24 = 0;
            do
            {
                v25 = v1;
                v26 = v20;
                if (!v21)
                    break;
                v21 -= 1;
                v22 = 4;
                v23 = *v25;
                v24 = *v26;
                v20 = v26 + 1;
                v1 = v25 + 1;
            } while (*v25 == *v26);
            v27 = _ccall(4, v22, v23, v24, 0);
            if (!(v27 & 1))
                return 0;
            a0->field_60->field_1e0(&v0, a0);
            sub_48c540(&v0, a0->field_0);
        }
    }
    sub_489390(a0->field_0->field_208, 4, "weapons/candypop.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v28 = a0;
    v28->field_0->field_118 = v28->field_0->field_118 | 128;
    v28->field_60->field_34(a0, *a2, *a2, 900.0f, 0x1000);
    v29 = a0;
    v29->field_0->field_1a5 = v29->field_0->field_1a5 & 239;
    v29->field_364 = 0;
    return 1;
}

