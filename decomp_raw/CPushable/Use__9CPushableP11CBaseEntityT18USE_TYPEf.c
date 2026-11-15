// Use__9CPushableP11CBaseEntityT18USE_TYPEf @0xc3850 size=200
typedef struct st_4c3850_0 {
    char padding_0[160];
    struct st_4c3850_1 *field_a0;
} st_4c3850_0;

typedef struct st_4c3850_1 {
    unsigned int field_0;
} st_4c3850_1;

typedef struct st_4c3850_4 {
    char padding_0[416];
    char field_1a0;
} st_4c3850_4;

typedef struct st_4c3850_3 {
    char padding_0[32];
    float field_20;
    float field_24;
    float field_28;
} st_4c3850_3;

typedef struct st_4c3850_2 {
    struct st_4c3850_3 *field_0;
    char padding_4[92];
    struct st_4c3850_0 *field_60;
} st_4c3850_2;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;

unsigned int Use__9CPushableP11CBaseEntityT18USE_TYPEf(st_4c3850_4 **a0, st_4c3850_2 *a1, int a2, int a3, float a4)
{
    unsigned int *v0;  // ecx
    unsigned int v1;  // edi
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (a1 && a1->field_60->field_a0(a1))
    {
        v0 = &a1->field_0->field_20;
        v1 = 0;
        if (*(float *)&g_vecZero == a1->field_0->field_20 && *(float *)&g_vecZero+4 == *(float *)&v0[1])
            v1 = *(float *)&g_vecZero+8 == *(float *)&v0[2];
        if (v1)
            return v2;
        CPushable::Move(a0, a1, 0);
        return v2;
    }
    if (*a0->field_1a0 >= 0)
        return v3;
    v3 = CBreakable::Use(a0, a1, a2, a3, a4);
    return v3;
}

