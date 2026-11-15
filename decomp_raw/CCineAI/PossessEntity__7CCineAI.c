// PossessEntity__7CCineAI @0x115180 size=697
typedef struct st_515180_2 {
    char padding_0[280];
    unsigned int field_118;
} st_515180_2;

typedef struct st_515180_6 {
    char padding_0[76];
    struct st_515180_1 *field_4c;
    char padding_50[260];
    struct st_515180_1 *field_154;
    char padding_158[8];
    struct st_515180_1 *field_160;
} st_515180_6;

typedef struct st_515180_1 {
    unsigned int field_0;
} st_515180_1;

typedef struct st_515180_5 {
    unsigned int field_0;
    char padding_4[260];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[176];
    unsigned int field_1cc;
} st_515180_5;

typedef struct st_515180_3 {
    char padding_0[512];
    struct st_515180_1 *field_200;
} st_515180_3;

typedef struct st_515180_7 {
    struct st_515180_5 *field_0;
    struct st_515180_4 *field_4;
    char padding_8[88];
    struct st_515180_6 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[111];
    unsigned int field_180;
    unsigned int field_184;
    char padding_188[284];
    struct st_515180_4 *field_2a4;
} st_515180_7;

typedef struct st_515180_4 {
    struct st_515180_2 *field_0;
    char padding_4[92];
    struct st_515180_3 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[419];
    unsigned int field_2b4;
    char padding_2b8[20];
    unsigned int field_2cc;
    unsigned int field_2d0;
    unsigned int field_2d4;
} st_515180_4;

typedef struct st_515180_0 {
    char padding_0[152];
    unsigned int field_98;
} st_515180_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_515180_1 *g_engfuncs.pfnAlertMessage;
extern st_515180_0 *gpGlobals;

st_515180_7 * PossessEntity__7CCineAI(st_515180_4 *a0)
{
    st_515180_7 *v1;  // eax
    st_515180_7 *v2;  // edx
    st_515180_7 *v3;  // edi
    unsigned int v4;  // eax
    st_515180_4 *v5;  // ecx
    st_515180_4 *v6;  // edx
    st_515180_4 *v7;  // ecx
    st_515180_7 *v8;  // eax
    unsigned int v0;  // [bp-0x54]

    v1 = EHANDLE::__opP11CBaseEntity(&a0->field_110);
    v2 = v1;
    v3 = NULL;
    if (v2)
    {
        v1 = v2->field_60->field_4c(v2);
        v3 = v1;
    }
    if (!v3)
        return v1;
    v0 = 2;
    v4 = a0->field_60->field_200(a0);
    if (!v3->field_60->field_160(v3, v4))
        return g_engfuncs.pfnAlertMessage(2, "(AI)Can't possess entity %s\n", v3->field_0->field_0 + gpGlobals->field_98);
    v5 = a0;
    v3->field_4 = v5;
    v3->field_2a4 = v5;
    EHANDLE::__as(&v3->field_110, v5);
    v6 = a0;
    v6->field_2cc = v3->field_0->field_108;
    v6->field_2d0 = v3->field_0->field_10c;
    v6->field_2d4 = v3->field_0->field_118;
    v7 = a0;
    v3->field_0->field_118 = v3->field_0->field_118 | v7->field_0->field_118;
    if (v7->field_2b4 <= 5)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v7->field_2b4] - 1042476)]));
    }
    else
    {
        g_engfuncs.pfnAlertMessage(2, "aiscript:  invalid Move To Position value!");
        v8 = g_engfuncs.pfnAlertMessage(2, "\"%s\" found and used\n", v3->field_0->field_1cc + gpGlobals->field_98);
        v3->field_184 = 6;
        if (v3->field_180 != 6)
            return v8;
        return CBaseMonster::ChangeSchedule(v3, v3->field_60->field_154(v3, 40));
    }
}

