// WishGrantThink__9CShenlong @0x118030 size=447
typedef struct st_518030_4 {
    char padding_0[260];
    float field_104;
} st_518030_4;

typedef struct st_518030_0 {
    char padding_0[300];
    unsigned int field_12c;
} st_518030_0;

typedef struct st_518030_1 {
    char padding_0[296];
    unsigned int field_128;
    char padding_12c[4];
    unsigned int field_130;
} st_518030_1;

typedef struct st_518030_5 {
    char padding_0[332];
    float field_14c;
} st_518030_5;

typedef struct st_518030_7 {
    struct st_518030_5 *field_0;
} st_518030_7;

typedef struct st_518030_6 {
    struct st_518030_4 *field_0;
    char padding_4[680];
    struct st_518030_7 *field_2ac;
    unsigned int field_2b0;
} st_518030_6;

typedef struct st_518030_3 {
    char padding_0[688];
    int field_2b0;
    unsigned int field_2b4;
} st_518030_3;

typedef struct st_518030_2 {
    float field_0;
} st_518030_2;

extern st_518030_2 *gpGlobals;

unsigned int * WishGrantThink__9CShenlong(float idx)
{
    unsigned int v2;  // edi
    int v3;  // esi
    st_518030_6 *v12;  // ecx
    int *v4;  // eax
    st_518030_0 **v5;  // edx
    unsigned int v6;  // eax
    st_518030_1 **v7;  // ecx
    st_518030_3 *v8;  // edx
    unsigned int *v9;  // ecx
    unsigned int v10;  // eax
    unsigned int v11;  // 4116
    unsigned int v0;  // [bp-0x24]

    if (*(int *)(*(unsigned int *)&idx + 696) < 0)
    {
        sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 700) + 520), 1, "dragon/grantwish.wav", 0x3f800000, 0, 0, 100);
        v2 = *(unsigned int *)&idx + 700;
        v3 = 0;
        do
        {
            v4 = v3 * 4;
            if (*(int *)((char *)v4 + v2))
                sub_487e60(*(int *)((char *)v4 + v2));
        } while ((v3 += 1, v3 <= 6));
        sub_48cc00(*(int *)(*(unsigned int *)&idx + 680));
        sub_48cc00(*(int *)(*(unsigned int *)&idx + 684));
        v5 = (st_518030_0 **)idx;
        *v5->field_12c = 0;
        v6 = sub_48afe0(v5, "wish_granted");
        v7 = (st_518030_1 **)idx;
        *v7->field_128 = v6;
        *v7->field_130 = 0;
        sub_488850(v7);
        return sub_48b5d0(idx);
    }
    else
    {
        v8 = (st_518030_3 *)idx;
        if (v8->field_2b4)
        {
            v8->field_2b0 = v8->field_2b0 + 60;
            if (v8->field_2b0 > 0xff)
            {
                v8->field_2b0 = 0xff;
                v8->field_2b4 = 0;
            }
        }
        else
        {
            v9 = (unsigned int *)idx;
            v10 = v9[172];
            v9[172] = v10 - 60;
            v11 = _ccall(8, 3, v10, 0xffffffc4, 0);
            if (v11 & 1)
            {
                v9[172] = 0;
                v9[174] = v9[174] - 1;
                v9[173] = 1;
            }
        }
        v0 = *(int *)(*(unsigned int *)&idx + 688);
        *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 680) + 332) = (float)(int)v0;
        v12 = (st_518030_6 *)idx;
        v0 = v12->field_2b0;
        *(float *)(*(int *)v12->field_2ac + 332) = (float)(int)v0;
        v12->field_0->field_104 = (float)(0.2 + *(float *)gpGlobals);
        return gpGlobals;
    }
}

