// FindEntity__12CCineMonster @0x114ca0 size=686
typedef struct st_514ca0_4 {
    char padding_0[124];
    struct st_514ca0_3 *field_7c;
} st_514ca0_4;

typedef struct st_514ca0_1 {
    unsigned int field_0;
} st_514ca0_1;

typedef struct st_514ca0_6 {
    unsigned int field_0;
    char padding_4[416];
    char field_1a4;
} st_514ca0_6;

typedef struct st_514ca0_2 {
    char padding_0[76];
    struct st_514ca0_1 *field_4c;
} st_514ca0_2;

typedef struct st_514ca0_3 {
    char padding_0[96];
    struct st_514ca0_2 *field_60;
} st_514ca0_3;

typedef struct st_514ca0_7 {
    struct st_514ca0_6 *field_0;
    char padding_4[92];
    struct st_514ca0_2 *field_60;
} st_514ca0_7;

typedef struct st_514ca0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_514ca0_0;

extern st_514ca0_1 *g_6167f8;
extern st_514ca0_1 *g_6168b4;
extern st_514ca0_1 *g_6168d4;
extern st_514ca0_1 *g_6168d8;
extern st_514ca0_0 *gpGlobals;

unsigned int FindEntity__12CCineMonster(float a0)
{
    unsigned int v4;  // esi
    st_514ca0_4 *v5;  // eax
    st_514ca0_3 *v6;  // edx
    st_514ca0_3 *v8;  // edi
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x34]
    st_514ca0_7 *v1;  // [bp-0xc]
    st_514ca0_4 *v2;  // [bp-0x8]

    v2 = g_6167f8(0, "targetname", *(int *)(*(unsigned int *)&a0 + 688) + gpGlobals->field_98);
    sub_48d960(*(unsigned int *)&a0 + 272, 0);
    while (1)
    {
        v4 = 0;
        if (!v2 || !g_6168d8(v2))
            v4 = 1;
        if (v4)
            break;
        if (*(char *)((!v2 ? 0 : v2 + 1) + 420) & 32)
        {
            v5 = v2;
            if (v5 || (v5 = g_6168d4(0), v5))
                v6 = v5->field_7c;
            else
                v6 = NULL;
            v8 = (!v6 ? NULL : v6->field_60->field_4c(v6));
            if (v8)
            {
                v0 = 1;
                v9 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x200))(a0);
                if ((*(int *)&v8->field_60[4].padding_0[32])(v8, v9))
                {
                    sub_48d960(*(unsigned int *)&a0 + 272, v8);
                    return 1;
                }
            }
            g_6168b4(1, "Found %s, but can't play!\n", *(int *)(*(unsigned int *)&a0 + 688) + gpGlobals->field_98);
        }
        v2 = g_6167f8(v2, "targetname", *(int *)(*(unsigned int *)&a0 + 688) + gpGlobals->field_98);
    }
    v1 = NULL;
    while (1)
    {
        v1 = sub_48bba0(v1, *(int *)a0 + 8, *(float *)(*(unsigned int *)&a0 + 700));
        if (!v1)
            break;
        if (!sub_488af0(gpGlobals->field_98 + v1->field_0->field_0, gpGlobals->field_98 + *(int *)(*(unsigned int *)&a0 + 688)) && v1->field_0->field_1a4 & 32)
        {
            v8 = v1->field_60->field_4c(v1);
            if (v8)
            {
                v0 = 0;
                v10 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 0x200))(a0);
                if ((*(int *)&v8->field_60[4].padding_0[32])(v8, v10))
                {
                    sub_48d960(*(unsigned int *)&a0 + 272, v8);
                    return 1;
                }
            }
        }
    }
    sub_48d960(*(unsigned int *)&a0 + 272, 0);
    return 0;
}

