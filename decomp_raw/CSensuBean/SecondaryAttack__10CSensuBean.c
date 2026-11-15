// SecondaryAttack__10CSensuBean @0x117a70 size=321
typedef struct st_517a70_3 {
    struct st_517a70_0 *field_0;
    char padding_4[92];
    struct st_517a70_1 *field_60;
    char padding_64[1784];
    int field_75c;
} st_517a70_3;

typedef struct st_517a70_4 {
    char padding_0[128];
    struct st_517a70_3 *field_80;
    char padding_84[68];
    unsigned int field_c8;
} st_517a70_4;

typedef struct st_517a70_2 {
    unsigned int field_0;
} st_517a70_2;

typedef struct st_517a70_1 {
    char padding_0[480];
    struct st_517a70_2 *field_1e0;
} st_517a70_1;

typedef struct st_517a70_0 {
    char padding_0[520];
    unsigned int field_208;
} st_517a70_0;

typedef struct st_517a70_5 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_517a70_5;

extern unsigned int gmsgSensuBean;
extern st_517a70_2 *g_616878;
extern st_517a70_2 *g_61687c;
extern st_517a70_2 *g_616880;
extern st_517a70_5 *gpGlobals;

st_517a70_3 * SecondaryAttack__10CSensuBean(st_517a70_4 *a0)
{
    st_517a70_3 *v8;  // eax
    unsigned int *v9;  // edx
    st_517a70_3 *v10;  // eax
    int v0;  // [bp-0x90]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    char v4;  // [bp-0x44]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    if (a0->field_c8)
        return v10;
    a0->field_c8 = 1;
    v8 = a0->field_80;
    if (v8->field_75c <= 0)
        return v8;
    sub_48a800(&v8->field_0->padding_0[116]);
    v9 = &gpGlobals->field_28;
    v5 = (float)(500.0 * gpGlobals->field_28);
    v6 = (float)(500.0 * *(float *)&v9[1]);
    v7 = (float)(500.0 * *(float *)&v9[2]);
    sub_48d680(a0->field_80, 6);
    a0->field_80->field_60->field_1e0(&v4, a0->field_80);
    v1 = v5;
    v2 = v6;
    v3 = v7;
    sub_48e100(a0->field_80->field_0, &v4, &v1);
    a0->field_80->field_75c = a0->field_80->field_75c - 1;
    g_616878(1, gmsgSensuBean, 0, a0->field_80->field_0->field_208);
    v0 = a0->field_80->field_75c;
    g_616880(v0);
    return g_61687c(v0);
}

