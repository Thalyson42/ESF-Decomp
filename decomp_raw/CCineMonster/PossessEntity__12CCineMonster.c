// PossessEntity__12CCineMonster @0x114f50 size=546
typedef struct st_514f50_0 {
    char padding_0[280];
    unsigned int field_118;
} st_514f50_0;

typedef struct st_514f50_2 {
    unsigned int field_0;
} st_514f50_2;

typedef struct st_514f50_1 {
    char padding_0[508];
    struct st_514f50_2 *field_1fc;
} st_514f50_1;

typedef struct st_514f50_4 {
    struct st_514f50_4 *field_0;
    struct st_514f50_5 *field_4;
    char padding_8[88];
    struct st_514f50_3 *field_60;
    char padding_64[164];
    unsigned int field_108;
    unsigned int field_10c;
    char field_110;
    char padding_111[7];
    unsigned int field_118;
    char padding_11c[28];
    unsigned int field_138;
    char padding_13c[72];
    unsigned int field_184;
    char padding_188[284];
    struct st_514f50_5 *field_2a4;
} st_514f50_4;

typedef struct st_514f50_5 {
    struct st_514f50_0 *field_0;
    char padding_4[92];
    struct st_514f50_1 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[407];
    unsigned int field_2a8;
    unsigned int field_2ac;
    char padding_2b0[4];
    struct st_514f50_4 *field_2b4;
    char padding_2b8[20];
    unsigned int field_2cc;
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_514f50_5;

typedef struct st_514f50_3 {
    char padding_0[76];
    struct st_514f50_2 *field_4c;
} st_514f50_3;

typedef struct st_514f50_6 {
    char padding_0[152];
    unsigned int field_98;
} st_514f50_6;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_514f50_6 *gpGlobals;

st_514f50_4 * PossessEntity__12CCineMonster(st_514f50_5 *a0)
{
    st_514f50_4 *v0;  // eax
    st_514f50_4 *v1;  // edx
    st_514f50_4 *v2;  // esi
    st_514f50_4 *v3;  // eax
    st_514f50_4 *v4;  // eax
    st_514f50_4 *v5;  // eax

    v0 = EHANDLE::__opP11CBaseEntity(&a0->field_110);
    v1 = v0;
    v2 = NULL;
    if (v1)
    {
        v0 = v1->field_60->field_4c(v1);
        v2 = v0;
    }
    if (!v2)
        return v0;
    v2->field_4 = a0;
    v2->field_2a4 = a0;
    EHANDLE::__as(&v2->field_110, a0);
    a0->field_2cc = v2->field_0->field_108;
    a0->field_2d0 = v2->field_0->field_10c;
    a0->field_2d4 = v2->field_0->field_118;
    v2->field_0->field_118 = v2->field_0->field_118 | a0->field_0->field_118;
    v3 = a0->field_2b4;
    if (v3 <= 0x4)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&_GLOBAL_OFFSET_TABLE_ + 0x4 * v3 - 1043148)]));
    }
    else
    {
        v2->field_184 = 6;
        if (!a0->field_2a8)
            return v3;
        a0->field_60->field_1fc(a0, v2, a0->field_2a8, 0);
        v4 = strcmp@GLIBC_2.0(gpGlobals->field_98 + a0->field_2a8, gpGlobals->field_98 + a0->field_2ac);
        if (v4)
            return v4;
        v5 = v2->field_0;
        v5->field_138 = 0;
        return v5;
    }
}

