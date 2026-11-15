// Blocked__10CFuncTrainP11CBaseEntity @0xe9bf0 size=105
typedef struct st_4e9bf0_2 {
    struct st_4e9bf0_1 *field_0;
    char padding_4[128];
    float field_84;
} st_4e9bf0_2;

typedef struct st_4e9bf0_4 {
    unsigned int field_0;
} st_4e9bf0_4;

typedef struct st_4e9bf0_1 {
    char padding_0[480];
    unsigned int field_1e0;
} st_4e9bf0_1;

typedef struct st_4e9bf0_3 {
    char padding_0[52];
    struct st_4e9bf0_4 *field_34;
} st_4e9bf0_3;

typedef struct st_4e9bf0_5 {
    char padding_0[96];
    struct st_4e9bf0_3 *field_60;
} st_4e9bf0_5;

typedef struct st_4e9bf0_0 {
    float field_0;
} st_4e9bf0_0;

extern st_4e9bf0_0 *gpGlobals;

unsigned int Blocked__10CFuncTrainP11CBaseEntity(st_4e9bf0_2 *a0, st_4e9bf0_5 *a1)
{
    st_4e9bf0_1 *v0;  // eax

    if (*(float *)gpGlobals >= a0->field_84)
    {
        a0->field_84 = (float)(0.5 + *(float *)gpGlobals);
        v0 = a0->field_0;
    }
    return a1->field_60->field_34(a1, v0, v0, *(float *)&v0->field_1e0, 1);
}

