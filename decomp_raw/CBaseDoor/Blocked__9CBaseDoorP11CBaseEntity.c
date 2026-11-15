// Blocked__9CBaseDoorP11CBaseEntity @0xacc10 size=875
typedef struct st_4acc10_1 {
    struct st_4acc10_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
    char padding_84[8];
    float field_8c;
} st_4acc10_1;

typedef struct st_4acc10_6 {
    unsigned int field_0;
} st_4acc10_6;

typedef struct st_4acc10_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[36];
    char field_80;
    char padding_81[331];
    unsigned int field_1cc;
    char padding_1d0[16];
    unsigned int field_1e0;
} st_4acc10_4;

typedef struct st_4acc10_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[36];
    char field_80;
    char padding_81[331];
    unsigned int field_1cc;
    char padding_1d0[16];
    float field_1e0;
} st_4acc10_0;

typedef struct st_4acc10_5 {
    char padding_0[52];
    struct st_4acc10_6 *field_34;
} st_4acc10_5;

typedef struct st_4acc10_7 {
    char padding_0[96];
    struct st_4acc10_5 *field_60;
} st_4acc10_7;

typedef struct st_4acc10_8 {
    char padding_0[152];
    unsigned int field_98;
} st_4acc10_8;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4acc10_6 *g_6167f8;
extern st_4acc10_6 *g_6168d8;
extern st_4acc10_8 *gpGlobals;

st_4acc10_4 * Blocked__9CBaseDoorP11CBaseEntity(st_4acc10_1 *a0, st_4acc10_7 *a1)
{
    st_4acc10_0 *v3;  // edx
    st_4acc10_0 *v4;  // eax
    unsigned int *v13;  // ecx
    unsigned int *v14;  // ecx
    st_4acc10_0 *v15;  // edx
    unsigned int *v16;  // ecx
    unsigned int v5;  // esi
    st_4acc10_1 *v6;  // edi
    unsigned int *v7;  // esi
    unsigned int *v8;  // ecx
    unsigned int *v9;  // esi
    unsigned int *v10;  // ecx
    unsigned int *v11;  // ecx
    st_4acc10_0 *v12;  // edx
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    st_4acc10_4 *v2;  // [bp-0x8]

    v2 = NULL;
    v3 = a0->field_0;
    if (v3->field_1e0 != 0.0f)
        a1->field_60->field_34(a1, v3, v3, v3->field_1e0, 1);
    if (0.0 <= a0->field_8c)
    {
        if (a0->field_80 == 3)
            sub_48bf20(a0);
        else
            sub_489940(a0);
    }
    if (!a0->field_0->field_1cc)
        return a0->field_0;
    while (1)
    {
        do
        {
            v2 = g_6167f8(v2, "targetname", a0->field_0->field_1cc + gpGlobals->field_98);
        } while ((v4 = (!v2 ? NULL : (struct st_4acc10_4 *)&v2->field_80), v4 == a0->field_0));
        v5 = 0;
        if (!v2 || (v4 = g_6168d8(v2), !v4))
            v5 = 1;
        if (v5)
            break;
        if ((!sub_488af0((!v2 ? NULL : (struct st_4acc10_4 *)&v2->field_80)->field_0 + gpGlobals->field_98, "func_door") || !sub_488af0((!v2 ? NULL : (struct st_4acc10_4 *)&v2->field_80)->field_0 + gpGlobals->field_98, "func_door_rotating")) && (v6 = sub_488040((!v2 ? 0 : (struct st_4acc10_4 *)&v2->field_80)), 0.0 <= v6->field_8c))
        {
            v7 = &v6->field_0->field_20;
            v8 = &a0->field_0->field_20;
            v1 = 0;
            if (a0->field_0->field_20 == v6->field_0->field_20 && *(float *)&v8[1] == *(float *)&v7[1])
                v1 = *(float *)&v8[2] == *(float *)&v7[2];
            if (v1)
            {
                v9 = v6->field_0->padding_5c;
                v10 = &a0->field_0->field_20;
                v0 = 0;
                if (a0->field_0->field_20 == *(float *)&v6->field_0->padding_5c[0] && *(float *)&v10[1] == *(float *)&v9[1])
                    v0 = *(float *)&v10[2] == *(float *)&v9[2];
                if (v0)
                {
                    if (!sub_488af0((!v2 ? NULL : (struct st_4acc10_4 *)&v2->field_80)->field_0 + gpGlobals->field_98, "func_door"))
                    {
                        v11 = &v6->field_0->field_0;
                        v12 = a0->field_0;
                        v11[2] = v12->field_8;
                        v11[3] = v12->field_c;
                        v11[4] = v12->field_10;
                        v13 = &v6->field_0->field_0;
                        v13[8] = g_vecZero;
                        v13[9] = g_616790;
                        v13[10] = g_616794;
                    }
                    else
                    {
                        v14 = &v6->field_0->field_0;
                        v15 = a0->field_0;
                        v14[20] = v15->field_50;
                        v14[21] = v15->field_54;
                        v14[22] = v15->field_58;
                        v16 = &v6->field_0->field_0;
                        v16[23] = g_vecZero;
                        v16[24] = g_616790;
                        v16[25] = g_616794;
                    }
                }
            }
            if (v6->field_80 == 3)
                sub_48bf20(v6);
            else
                sub_489940(v6);
        }
    }
    return v4;
}

