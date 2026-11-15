// Touch__12CPlatTriggerP11CBaseEntity @0xe8fa0 size=160
typedef struct st_4e8fa0_5 {
    struct st_4e8fa0_6 *field_0;
    char padding_4[92];
    struct st_4e8fa0_4 *field_60;
    char padding_64[28];
    unsigned int field_80;
} st_4e8fa0_5;

typedef struct st_4e8fa0_0 {
    char padding_0[140];
    struct st_4e8fa0_1 *field_8c;
} st_4e8fa0_0;

typedef struct st_4e8fa0_4 {
    char padding_0[240];
    struct st_4e8fa0_1 *field_f0;
} st_4e8fa0_4;

typedef struct st_4e8fa0_6 {
    char padding_0[256];
    float field_100;
    float field_104;
} st_4e8fa0_6;

typedef struct st_4e8fa0_1 {
    unsigned int field_0;
} st_4e8fa0_1;

typedef struct st_4e8fa0_2 {
    struct st_4e8fa0_1 *field_0;
    char padding_4[92];
    struct st_4e8fa0_0 *field_60;
} st_4e8fa0_2;

typedef struct st_4e8fa0_7 {
    char padding_0[100];
    struct st_4e8fa0_5 *field_64;
} st_4e8fa0_7;

typedef struct st_4e8fa0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4e8fa0_3;

extern st_4e8fa0_3 *gpGlobals;

unsigned int * Touch__12CPlatTriggerP11CBaseEntity(st_4e8fa0_7 *a0, st_4e8fa0_2 *a1)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax
    st_4e8fa0_5 *v2;  // edx
    float *v3;  // eax

    v0 = sub_488af0(*(int *)a1->field_0 + gpGlobals->field_98, "player");
    if (v0)
        return v0;
    v1 = a1->field_60->field_8c(a1);
    if (!v1)
        return v1;
    v2 = a0->field_64;
    if (v2->field_80 == 1)
        return v2->field_60->field_f0(v2);
    if (a0->field_64->field_80)
        return v3;
    v3 = a0->field_64->field_0;
    v3[65] = (float)(1.0 + v3[64]);
    return v3;
}

