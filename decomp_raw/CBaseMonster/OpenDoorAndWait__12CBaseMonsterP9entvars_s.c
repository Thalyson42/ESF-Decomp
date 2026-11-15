// OpenDoorAndWait__12CBaseMonsterP9entvars_s @0xd5da0 size=440
typedef struct st_4d5da0_4 {
    char padding_0[124];
    struct st_4d5da0_2 *field_7c;
} st_4d5da0_4;

typedef struct st_4d5da0_0 {
    char padding_0[184];
    struct st_4d5da0_1 *field_b8;
} st_4d5da0_0;

typedef struct st_4d5da0_1 {
    unsigned int field_0;
} st_4d5da0_1;

typedef struct st_4d5da0_3 {
    unsigned int field_0;
    char padding_4[456];
    unsigned int field_1cc;
} st_4d5da0_3;

typedef struct st_4d5da0_5 {
    char padding_0[256];
    float field_100;
    float field_104;
    char padding_108[256];
    struct st_4d5da0_4 *field_208;
} st_4d5da0_5;

typedef struct st_4d5da0_7 {
    char padding_0[124];
    struct st_4d5da0_6 *field_7c;
    unsigned int field_80;
    char padding_84[456];
    unsigned int field_24c;
} st_4d5da0_7;

typedef struct st_4d5da0_6 {
    char padding_0[96];
    struct st_4d5da0_0 *field_60;
} st_4d5da0_6;

typedef struct st_4d5da0_2 {
    struct st_4d5da0_3 *field_0;
    char padding_4[92];
    struct st_4d5da0_0 *field_60;
} st_4d5da0_2;

typedef struct st_4d5da0_8 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4d5da0_8;

extern st_4d5da0_1 *g_6167f8;
extern st_4d5da0_1 *g_6168d4;
extern st_4d5da0_1 *g_6168d8;
extern st_4d5da0_8 *gpGlobals;

float OpenDoorAndWait__12CBaseMonsterP9entvars_s(unsigned int a0, st_4d5da0_5 *a1)
{
    st_4d5da0_4 *v2;  // eax
    st_4d5da0_2 *v3;  // eax
    st_4d5da0_7 *v4;  // edi
    unsigned int *i;  // eax
    unsigned int v6;  // esi
    unsigned int *v7;  // ecx
    st_4d5da0_7 *v8;  // eax
    st_4d5da0_6 *v9;  // edx
    st_4d5da0_2 *v0;  // [bp-0xc]
    float v1;  // [bp-0x8]

    v1 = 0;
    v2 = a1->field_208;
    if (a1->field_208 || (v2 = g_6168d4(0), v2))
        v3 = v2->field_7c;
    else
        v3 = NULL;
    v0 = v3;
    if (v3)
    {
        v3->field_60->field_b8(v0, a0, a0, 1, 0);
        v1 = a1->field_104 - a1->field_100;
        if (v0->field_0->field_1cc)
        {
            v4 = NULL;
            while (1)
            {
                do
                {
                    v4 = g_6167f8(v4, "targetname", v0->field_0->field_1cc + gpGlobals->field_98);
                    i = &v4->field_80;
                    if (!v4)
                        i = NULL;
                } while (i == v0->field_0);
                v6 = 0;
                if (!v4 || !g_6168d8(v4))
                    v6 = 1;
                if (v6)
                    break;
                v7 = &v4->field_80;
                if (!v4)
                    v7 = NULL;
                if (!sub_488af0(*v7 + gpGlobals->field_98, gpGlobals->field_98 + v0->field_0->field_0))
                {
                    v8 = v4;
                    if (v8 || (v8 = g_6168d4(0), v8))
                        v9 = v8->field_7c;
                    else
                        v9 = NULL;
                    if (v9)
                        v9->field_60->field_b8(v9, a0, a0, 1, 0);
                }
            }
        }
    }
    return v1 + gpGlobals->field_0;
}

