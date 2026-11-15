// MakePlayerList__4CBot @0x13d8c0 size=495
typedef struct st_53d8c0_0 {
    char padding_0[144];
    struct st_53d8c0_0 *field_90;
} st_53d8c0_0;

typedef struct st_53d8c0_4 {
    char padding_0[164];
    struct st_53d8c0_1 *field_a4;
    char padding_a8[60];
    struct st_53d8c0_1 *field_e4;
} st_53d8c0_4;

typedef struct st_53d8c0_5 {
    struct st_53d8c0_3 *field_0;
    char padding_4[92];
    struct st_53d8c0_4 *field_60;
    char padding_64[2492];
    char field_a20;
    char padding_a21[3];
    struct st_53d8c0_5 *field_a24;
    char padding_a28[124];
    unsigned int field_aa4;
    unsigned int field_aa8;
    char field_aac;
} st_53d8c0_5;

typedef struct st_53d8c0_1 {
    unsigned int field_0;
} st_53d8c0_1;

typedef struct st_53d8c0_2 {
    char padding_0[413];
    char field_19d;
    char padding_19e[98];
    unsigned int field_200;
} st_53d8c0_2;

typedef struct st_53d8c0_3 {
    char padding_0[8];
    char field_8;
    char padding_9[412];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
} st_53d8c0_3;

extern st_53d8c0_1 *g_6168dc;
extern st_53d8c0_0 *gpGlobals;

st_53d8c0_0 * MakePlayerList__4CBot(st_53d8c0_5 *a0)
{
    unsigned short v8;  // ax
    st_53d8c0_0 *v9;  // eax
    unsigned int v10;  // esi
    st_53d8c0_5 *v11;  // edi
    unsigned int v12;  // edx
    st_53d8c0_5 *v13;  // ecx
    unsigned int v14;  // esi
    st_53d8c0_5 *v15;  // ecx
    st_53d8c0_5 *v16;  // edx
    st_53d8c0_2 *v0;  // [bp-0x38]
    int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    char v4;  // [bp-0xe]
    char v5;  // [bp-0xd]
    st_53d8c0_5 *v6;  // [bp-0xc]
    char iter;  // [bp-0x5]

    v8 = g_6168dc(a0->field_0->field_208);
    iter = 0;
    do
    {
        (&a0->field_a24)[iter] = 0;
        iter += 1;
    } while (iter <= 31);
    a0->field_aac = 0;
    iter = 1;
    v9 = gpGlobals;
    if (gpGlobals->field_90 > NULL)
    {
        v3 = v8 - 1;
        v2 = 1 << ((char)v3 & 31);
        do
        {
            v10 = iter;
            v11 = sub_48a500(v10);
            v12 = 1 << ((char)(v10 - 1) & 31);
            v13 = a0;
            if (v12 & v13->field_aa8)
            {
                if (v12 & v13->field_aa4)
                {
                    (&v13->field_a24)[v13->field_aac] = v11;
                    v13->field_aac = v13->field_aac + 1;
                }
            }
            else
            {
                if (a0 != v11)
                {
                    *(unsigned short *)&v1 = 1;
                    *(unsigned short *)&v0 = 1;
                    if ((char)sub_489a70(v11, v0, v1))
                    {
                        v4 = 0;
                        if (!v11->field_60->field_a4(v11))
                            v4 = (v11->field_0->field_1a5 & 32) != 0;
                        v5 = v4;
                        if (v4)
                        {
                            v6 = v11;
                            if (v11)
                                v11->field_aa8 = v11->field_aa8 | v2;
                        }
                        v14 = 1 << (iter - 1 & 31);
                        v15 = a0;
                        v15->field_aa8 = v15->field_aa8 | v14;
                        v0 = &v11->field_0->field_8;
                        if (v15->field_60->field_e4(v15, v0))
                        {
                            (&a0->field_a24)[a0->field_aac] = v11;
                            v16 = a0;
                            v16->field_aac = v16->field_aac + 1;
                            v16->field_aa4 = v16->field_aa4 | v14;
                            if (v5)
                                v6->field_aa4 = v6->field_aa4 | 1 << ((char)v3 & 31);
                        }
                    }
                }
            }
        } while ((iter += 1, v9 = iter, v9 <= gpGlobals->field_90));
    }
    a0->field_a20 = 1;
    return v9;
}

