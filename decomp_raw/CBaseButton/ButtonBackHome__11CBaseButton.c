// ButtonBackHome__11CBaseButton @0x976e0 size=505
typedef struct st_4976e0_8 {
    unsigned int field_0;
    char padding_4[120];
    struct st_4976e0_7 *field_7c;
} st_4976e0_8;

typedef struct st_4976e0_1 {
    struct st_4976e0_0 *field_0;
    char padding_4[124];
    unsigned int field_80;
} st_4976e0_1;

typedef struct st_4976e0_4 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[124];
    unsigned int field_98;
} st_4976e0_4;

typedef struct st_4976e0_6 {
    char padding_0[184];
    struct st_4976e0_5 *field_b8;
} st_4976e0_6;

typedef struct st_4976e0_10 {
    struct st_4976e0_9 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4976e0_10;

typedef struct st_4976e0_3 {
    char padding_0[20];
    struct st_4976e0_4 *field_14;
    unsigned int field_18;
} st_4976e0_3;

typedef struct st_4976e0_5 {
    unsigned int field_0;
} st_4976e0_5;

typedef struct st_4976e0_0 {
    char padding_0[416];
    char field_1a0;
} st_4976e0_0;

typedef struct st_4976e0_9 {
    char padding_0[260];
    float field_104;
    char padding_108[152];
    char field_1a0;
} st_4976e0_9;

typedef struct st_4976e0_7 {
    char padding_0[96];
    struct st_4976e0_6 *field_60;
} st_4976e0_7;

typedef struct st_4976e0_2 {
    float field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[124];
    unsigned int field_98;
} st_4976e0_2;

extern char ButtonSpark__11CBaseButton;
extern char ButtonTouch__11CBaseButtonP11CBaseEntity;
extern st_4976e0_5 *g_6167f8;
extern st_4976e0_5 *g_6168d4;
extern st_4976e0_5 *g_6168d8;
extern st_4976e0_2 *gpGlobals;

unsigned int * ButtonBackHome__11CBaseButton(float a0)
{
    st_4976e0_1 *v7;  // eax
    st_4976e0_9 *v17;  // ecx
    unsigned int v9;  // esi
    st_4976e0_8 *v10;  // eax
    st_4976e0_7 *v11;  // edi
    unsigned int v12;  // eax
    unsigned int *v13;  // eax
    st_4976e0_3 *v15;  // ecx
    st_4976e0_10 *v16;  // esi
    float v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x34]
    unsigned int v4;  // [bp-0x30]
    st_4976e0_8 *v5;  // [bp-0x18]

    v7 = (st_4976e0_1 *)a0;
    v7->field_80 = 1;
    if (v7->field_0->field_1a0 & 32)
    {
        v4 = 0;
        v3 = 3;
        sub_48d150(a0, sub_488810(*(unsigned int *)&a0 + 212));
    }
    if (*(int *)(*(int *)a0 + 456))
    {
        v5 = NULL;
        while (1)
        {
            v5 = g_6167f8(v5, "targetname", *(int *)(*(int *)a0 + 456) + gpGlobals->field_98);
            v9 = 0;
            if (!v5 || !g_6168d8(v5))
                v9 = 1;
            if (v9)
                break;
            if (!sub_488af0((!v5 ? NULL : v5 + 1)->field_0 + gpGlobals->field_98, "multisource"))
            {
                v10 = v5;
                if (v10 || (v10 = g_6168d4(0), v10))
                    v11 = v10->field_7c;
                else
                    v11 = NULL;
                if (v11)
                {
                    v2 = 0;
                    v1 = 3;
                    v0 = a0;
                    v12 = sub_488810(*(unsigned int *)&a0 + 212);
                    v11->field_60->field_b8(v11, v12);
                }
            }
        }
    }
    if (!(*(char *)(*(int *)a0 + 417) & 1))
    {
        v13 = (unsigned int *)a0;
        v13[5] = 0;
        v13[6] = 0;
    }
    else
    {
        v13 = _INSERT(*(int *)a0, 0, 0) | 0xffff0000;
        v15 = (st_4976e0_3 *)a0;
        v15->field_14 = v13;
        v15->field_18 = &ButtonTouch__11CBaseButtonP11CBaseEntity;
    }
    v16 = (st_4976e0_10 *)a0;
    v17 = v16->field_0;
    if (v17->field_1a0 & 64)
    {
        v16->field_c = _INSERT(v13, 0, 0) | 0xffff0000;
        v16->field_10 = &ButtonSpark__11CBaseButton;
        v13 = gpGlobals;
        v17->field_104 = (float)(0.5 + gpGlobals->field_0);
    }
    return v13;
}

