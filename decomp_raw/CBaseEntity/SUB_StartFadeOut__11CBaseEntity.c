// SUB_StartFadeOut__11CBaseEntity @0xa4f90 size=145
typedef struct st_4a4f90_1 {
    struct st_4a4f90_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4a4f90_1;

typedef struct st_4a4f90_0 {
    char padding_0[92];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
    char padding_68[156];
    float field_104;
    char padding_108[4];
    unsigned int field_10c;
    char padding_110[56];
    unsigned int field_148;
} st_4a4f90_0;

typedef struct st_4a4f90_2 {
    float field_0;
} st_4a4f90_2;

extern char SUB_FadeOut__11CBaseEntity;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4a4f90_2 *gpGlobals;

unsigned int SUB_StartFadeOut__11CBaseEntity(st_4a4f90_1 *a0)
{
    st_4a4f90_0 *v0;  // ecx
    unsigned int v1;  // eax

    if (!a0->field_0->field_148)
    {
        *(float *)&a0->field_0[1].padding_0[0] = 255.0f;
        a0->field_0->field_148 = 2;
    }
    a0->field_0->field_10c = 0;
    v0 = a0->field_0;
    v0->field_5c = g_vecZero;
    v0->field_60 = g_vecZero+4;
    v0->field_64 = g_vecZero+8;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    v1 = _INSERT(gpGlobals, 0, 0);
    a0->field_c = v1 | 0xffff0000;
    a0->field_10 = &SUB_FadeOut__11CBaseEntity;
    return v1 | 0xffff0000;
}

