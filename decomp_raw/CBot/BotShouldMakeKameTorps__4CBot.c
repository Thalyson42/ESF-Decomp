// BotShouldMakeKameTorps__4CBot @0x156ae0 size=704
typedef struct st_556ae0_3 {
    char padding_0[420];
    unsigned int field_1a4;
} st_556ae0_3;

typedef struct st_556ae0_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[408];
    unsigned int field_1ac;
} st_556ae0_2;

typedef struct st_556ae0_1 {
    char padding_0[144];
    unsigned int field_90;
} st_556ae0_1;

typedef struct st_556ae0_0 {
    unsigned int field_0;
} st_556ae0_0;

extern unsigned int g_teamplay;
extern st_556ae0_0 *g_616928;
extern st_556ae0_1 *gpGlobals;
extern char g_6253c6;
extern char g_6253c7;

char BotShouldMakeKameTorps__4CBot(float a0)
{
    unsigned int v13;  // eax
    unsigned int v14;  // edi
    unsigned int v23;  // edi
    unsigned int v24;  // esi
    st_556ae0_2 **v15;  // esi
    unsigned int *v16;  // edx
    st_556ae0_3 *v17;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0xa4]
    unsigned int v2;  // [bp-0x9c], Other Possible Types: unsigned long long
    int v3;  // [bp-0x94]
    char v4;  // [bp-0x75]
    float v5;  // [bp-0x58]
    float v6;  // [bp-0x44]
    float v7;  // [bp-0x40]
    float v8;  // [bp-0x3c]
    float v9;  // [bp-0x24]
    float v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]

    if (!g_6253c7 || !g_6253c6 || !sub_48a5f0(a0) || !(v13 = g_616928(1, CONCAT(100, 1) >> 32), (int)g_616928(1, CONCAT(100, 1) >> 32) <= *(short *)(*(int *)(*(unsigned int *)&a0 + 2564) + 16) && (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 1892) + 4) + 52))(*(int *)(*(unsigned int *)&a0 + 1892)) == 2))
        return 0;
    v14 = 1;
    if ((int)gpGlobals->field_90 > 0)
    {
        do
        {
            v15 = sub_48a500((short)v14);
            *(unsigned short *)&v1 = 1;
            *(unsigned short *)&v0 = 1;
            if (!(char)sub_489a70(v15, v0, v1))
                continue;
            v16 = &*v15->field_8;
            v9 = *v15->field_8;
            v10 = *(float *)&v16[1];
            v11 = *(float *)&v16[2];
            v17 = *(int *)a0 + 8;
            v18 = v9 - *(float *)(*(int *)a0 + 8);
            v6 = v18;
            v19 = v10 - *(float *)&v17->padding_0[4];
            v7 = v19;
            v20 = v11 - *(float *)&v17->padding_0[8];
            v8 = v20;
            v21 = v18 * v18 + v19 * v19 + v20 * v20;
            v22 = sqrt(v21);
            if (isnan(v22))
                sub_487dc0(*(unsigned int *)&v21);
            else
                v21 = v22;
            v5 = (float)v21;
            if (v5 <= 5000.0f && (!g_teamplay || *(int *)(*(int *)a0 + 428) != *v15->field_1ac || v5 >= 2300.0f) && v5 >= 2300.0f)
                continue;
        } while ((v14 += 1, (short)v14 <= (int)gpGlobals->field_90));
    }
    if (g_teamplay)
    {
        if (!*(char *)(*(unsigned int *)&a0 + 2592))
            sub_48bf40(a0);
        if (*(char *)(*(unsigned int *)&a0 + 2732) && (v23 = 0, *(char *)(*(unsigned int *)&a0 + 2732)))
        {
            do
            {
                v24 = *(int *)(*(unsigned int *)&a0 + 2596 + (short)v23 * 4);
                v4 = 0;
                v2 = v24;
                if (!(*(int *)(*(int *)(v24 + 96) + 164))(v2))
                    v4 = (*(char *)(*(int *)v24 + 421) & 32) != 0;
                if (v4 && *(int *)(*(int *)a0 + 428) == *(int *)(*(int *)v24 + 428) && v24 && (*(unsigned short *)&v3 = 1, v2 = _INSERT(CONCAT(v2, 0), 4, 1), *(int *)&v2 = *(int *)(v24 + 2924), (char)sub_489a70(v2, *(unsigned int *)((void*)&v2 + 4), v3)))
                    return 1;
            } while ((v23 += 1, (short)v23 < *(char *)(*(unsigned int *)&a0 + 2732)));
        }
    }
    return 0;
}

