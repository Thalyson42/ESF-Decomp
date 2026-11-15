// Move__9CPushableP11CBaseEntityi @0xc3980 size=596
typedef struct st_4c3980_7 {
    struct st_4c3980_6 *field_0;
    char padding_4[128];
    unsigned int field_84;
    double field_88;
    unsigned int field_8c;
} st_4c3980_7;

typedef struct st_4c3980_2 {
    char padding_0[160];
    struct st_4c3980_3 *field_a0;
} st_4c3980_2;

typedef struct st_4c3980_3 {
    unsigned int field_0;
} st_4c3980_3;

typedef struct st_4c3980_1 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
    char padding_2c[340];
    char field_180;
    char padding_181[27];
    struct st_4c3980_0 *field_19c;
    char padding_1a0[5];
    char field_1a5;
} st_4c3980_1;

typedef struct st_4c3980_6 {
    char padding_0[32];
    float field_20;
    float field_24;
    unsigned int field_28;
    char padding_2c[377];
    char field_1a5;
    char padding_1a6[26];
    int field_1c0;
    char padding_1c4[68];
    int field_208;
} st_4c3980_6;

typedef struct st_4c3980_5 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    float field_28;
    char padding_2c[377];
    char field_1a5;
    char padding_1a6[26];
    int field_1c0;
    char padding_1c4[68];
    unsigned int field_208;
} st_4c3980_5;

typedef struct st_4c3980_0 {
    char padding_0[128];
    char field_80;
    char padding_81[31];
    float field_a0;
    float field_a4;
    unsigned int field_a8;
    char padding_ac[377];
    char field_225;
    char padding_226[26];
    unsigned int field_240;
    char padding_244[68];
    unsigned int field_288;
} st_4c3980_0;

typedef struct st_4c3980_4 {
    struct st_4c3980_1 *field_0;
    char padding_4[92];
    struct st_4c3980_2 *field_60;
} st_4c3980_4;

typedef struct st_4c3980_8 {
    float field_0;
} st_4c3980_8;

typedef struct st_4c3980_9 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_4c3980_9;

extern st_4c3980_9 _9CPushable.m_soundNames;
extern st_4c3980_3 *g_616928;
extern st_4c3980_8 *gpGlobals;

double Move__9CPushableP11CBaseEntityi(st_4c3980_7 *a0, st_4c3980_4 *a1, unsigned int a2)
{
    st_4c3980_1 *v2;  // esi
    st_4c3980_5 *v3;  // eax
    double v4;  // mm7
    double v5;  // mm7
    double v6;  // mm7
    double v7;  // mm7
    double v8;  // mm7
    double v9;  // mm6
    unsigned int v10;  // ecx
    unsigned int v0;  // [bp-0x18]
    double v1;  // [bp-0x8]

    v2 = a1->field_0;
    v0 = 0;
    if (v2->field_1a5 & 2 && v2->field_19c)
    {
        v3 = (!v2->field_19c ? NULL : (struct st_4c3980_0 *)&v2->field_19c->field_80);
        if (v3 == a0->field_0)
        {
            if (v3->field_1c0 <= NULL)
                return v4;
            v4 = v3->field_28 + 0.1 * v2->field_28;
            v3->field_28 = (float)v4;
            return v4;
        }
    }
    if (a1->field_60->field_a0(a1))
    {
        if (a2 && !(v2->field_180 & 40))
            return v5;
        v0 = 1;
    }
    if (!v0)
    {
        v6 = 0.25;
    }
    else if (v2->field_1a5 & 2)
    {
        v6 = 1.0;
    }
    else if (a0->field_0->field_1c0 > NULL)
    {
        v6 = 0.10000000149011612;
    }
    else
    {
        return v7;
    }
    a0->field_0->field_20 = (float)(v6 * v2->field_20 + a0->field_0->field_20);
    a0->field_0->field_24 = (float)(v6 * v2->field_24 + a0->field_0->field_24);
    v8 = a0->field_0->field_20 * a0->field_0->field_20 + a0->field_0->field_24 * a0->field_0->field_24;
    v9 = sqrt(v8);
    if (isnan(v9))
        sub_487dc0(*(unsigned int *)&v8);
    else
        v8 = v9;
    v1 = (float)v8;
    if (a2 && (float)a0->field_88 < v1)
    {
        *(double *)&a0->field_0->field_20 = (float)a0->field_88 * a0->field_0->field_20 / v1;
        *(double *)&a0->field_0->field_24 = (float)a0->field_88 * a0->field_0->field_24 / v1;
    }
    if (!v0)
        return v1;
    v2->field_20 = a0->field_0->field_20;
    v2->field_24 = a0->field_0->field_24;
    if (*(float *)gpGlobals - *(float *)((char *)&a0->field_88 + 4) > 0.7)
    {
        *(float *)((char *)&a0->field_88 + 4) = *(float *)gpGlobals;
        if (0.0 < v1 && a0->field_0->field_1a5 & 2)
        {
            v10 = g_616928(0, 2);
            a0->field_84 = v10;
            sub_489390(a0->field_0->field_208, 1, (&_9CPushable.m_soundNames.field_0)[v10], 0.5f, 0.800000011920929f, 0, 100);
            return 0.5;
        }
        sub_489390(a0->field_0->field_208, 1, (&_9CPushable.m_soundNames.field_0)[a0->field_84], 0, 0, 32, 100);
        return v1;
    }
    return v1;
}

