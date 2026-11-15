// ClientKill__FP7edict_s @0x9f6b0 size=165
typedef struct st_49f6b0_0 {
    unsigned int field_0;
} st_49f6b0_0;

typedef struct st_49f6b0_1 {
    char padding_0[423];
    char field_1a7;
} st_49f6b0_1;

typedef struct st_49f6b0_2 {
    char padding_0[60];
    struct st_49f6b0_0 *field_3c;
} st_49f6b0_2;

typedef struct st_49f6b0_3 {
    struct st_49f6b0_1 *field_0;
    char padding_4[92];
    struct st_49f6b0_2 *field_60;
    char padding_64[684];
    char field_310;
    char padding_311[3];
    float field_314;
    char padding_318[428];
    unsigned int field_4c4;
} st_49f6b0_3;

extern st_49f6b0_0 *g_6168d4;
extern st_49f6b0_0 *gpGlobals;

unsigned int ClientKill__FP7edict_s(float a0)
{
    unsigned int *v1;  // esi
    unsigned int v2;  // eax
    st_49f6b0_3 *v3;  // edx

    v1 = *(unsigned int *)&a0 + 128;
    v2 = v1[130];
    if (v1[130] || (v2 = g_6168d4(0), v2))
        v3 = *(int *)(v2 + 124);
    else
        v3 = NULL;
    if (!(v3->field_310 & 32) && !(v3->field_0->field_1a7 & 4) && v3->field_314 <= *(float *)gpGlobals && !v3->field_4c4)
    {
        v3->field_314 = (float)(1.0 + *(float *)gpGlobals);
        v1[88] = 0;
    }
    return v3->field_60->field_3c(v3, v1, 1);
}

