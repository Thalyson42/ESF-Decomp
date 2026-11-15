// DispatchSave__FP7edict_sP13saverestore_s @0x9c480 size=331
typedef struct st_49c480_4 {
    char padding_0[124];
    struct st_49c480_2 *field_7c;
} st_49c480_4;

typedef struct st_49c480_6 {
    char padding_0[4];
    struct st_49c480_4 *field_4;
    unsigned int field_8;
    char padding_c[8];
    unsigned int field_14;
} st_49c480_6;

typedef struct st_49c480_3 {
    unsigned int field_0;
    char padding_4[252];
    unsigned int field_100;
    unsigned int field_104;
    unsigned int field_108;
} st_49c480_3;

typedef struct st_49c480_5 {
    unsigned int field_0;
    char padding_4[252];
    float field_100;
    float field_104;
    unsigned int field_108;
} st_49c480_5;

typedef struct st_49c480_0 {
    char padding_0[20];
    struct st_49c480_1 *field_14;
    char padding_18[4];
    struct st_49c480_1 *field_1c;
} st_49c480_0;

typedef struct st_49c480_1 {
    unsigned int field_0;
} st_49c480_1;

typedef struct st_49c480_2 {
    struct st_49c480_3 *field_0;
    char padding_4[92];
    struct st_49c480_0 *field_60;
} st_49c480_2;

typedef struct st_49c480_7 {
    float field_0;
} st_49c480_7;

extern st_49c480_1 *g_engfuncs.pfnAlertMessage;
extern st_49c480_7 *gpGlobals;

int DispatchSave__FP7edict_sP13saverestore_s(st_49c480_4 *a0, unsigned int *a1)
{
    st_49c480_2 *v1;  // esi
    st_49c480_6 *v2;  // edi
    int v3;  // eax
    st_49c480_5 *v4;  // edx
    float v5;  // 128
    int v6;  // eax
    int v7;  // eax
    char v0;  // [bp-0x8]

    v1 = (!a0 ? NULL : a0->field_7c);
    if (!v1)
    {
        return v7;
    }
    else if (a1)
    {
        v2 = a1[10] + a1[7] * 24;
        if (v2->field_4 != a0)
            g_engfuncs.pfnAlertMessage(4, "ENTITY TABLE OR INDEX IS WRONG!!!!\n");
        v3 = v1->field_60->field_1c(v1);
        if (v3 < NULL)
            return v3;
        v4 = v1->field_0;
        if (v4->field_108 == 7)
        {
            v5 = v4->field_104 - v4->field_100;
            v4->field_100 = *(float *)gpGlobals;
            *(float *)&v1->field_0->field_104 = v5 + *(float *)&v1->field_0->field_100;
        }
        v2->field_8 = a1[2];
        v2->field_14 = v1->field_0->field_0;
        __18CSaveRestoreBufferP13saverestore_s(&v0, a1);
        v1->field_60->field_14(v1, &v0);
        *(unsigned int *)&v2->padding_c[0] = a1[2] - v2->field_8;
        return _._18CSaveRestoreBuffer(&v0, 2);
    }
    else
    {
        return v6;
    }
}

