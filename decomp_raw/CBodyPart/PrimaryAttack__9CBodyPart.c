// PrimaryAttack__9CBodyPart @0x94410 size=330
typedef struct st_494410_3 {
    char padding_0[128];
    struct st_494410_2 *field_80;
    char padding_84[24];
    float field_9c;
} st_494410_3;

typedef struct st_494410_1 {
    unsigned int field_0;
} st_494410_1;

typedef struct st_494410_0 {
    char padding_0[52];
    struct st_494410_1 *field_34;
    char padding_38[424];
    struct st_494410_1 *field_1e0;
} st_494410_0;

typedef struct st_494410_2 {
    int field_0;
    char padding_4[92];
    struct st_494410_0 *field_60;
} st_494410_2;

typedef struct st_494410_4 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_494410_4;

extern st_494410_4 *gpGlobals;
extern char g_800000;

double PrimaryAttack__9CBodyPart(st_494410_3 *a0)
{
    st_494410_2 *v15;  // edx
    unsigned int *v16;  // edx
    double v25;  // mm2
    double v26;  // mm2
    double v27;  // mm7
    double v17;  // mm5
    double v18;  // mm5
    double v19;  // mm5
    double v20;  // mm5
    double v21;  // mm5
    double v22;  // mm5
    unsigned int *v23;  // edx
    double v24;  // mm2
    float v0;  // [bp-0x64]
    float v1;  // [bp-0x60]
    float v2;  // [bp-0x5c]
    float v3;  // [bp-0x58]
    float v4;  // [bp-0x54]
    float v5;  // [bp-0x50]
    float v6;  // [bp-0x4c]
    float v7;  // [bp-0x48]
    char v8;  // [bp-0x44]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    float v14;  // [bp-0x1c]

    v15 = a0->field_80;
    v15->field_60->field_34(v15, v15->field_0, v15->field_0, 2.0f, &g_800000);
    sub_48a800(a0->field_80->field_0 + 116);
    a0->field_80->field_60->field_1e0(&v8, a0->field_80);
    v16 = &gpGlobals->field_40;
    v17 = 10.0 * gpGlobals->field_40;
    v0 = (float)v17;
    v18 = 10.0 * *(float *)&v16[1];
    v1 = (float)v18;
    v19 = 10.0 * *(float *)&v16[2];
    v2 = (float)v19;
    v20 = v17 + v9;
    v12 = (float)v20;
    v21 = v18 + v10;
    v13 = (float)v21;
    v22 = v19 + v11;
    v14 = (float)v22;
    v23 = &gpGlobals->field_28;
    v24 = 500.0 * gpGlobals->field_28;
    v0 = (float)v24;
    v25 = 500.0 * *(float *)&v23[1];
    v1 = (float)v25;
    v26 = 500.0 * *(float *)&v23[2];
    v2 = (float)v26;
    v3 = (float)v20;
    v4 = (float)v21;
    v5 = (float)v22;
    v6 = (float)v24;
    v27 = v26;
    v7 = (float)v25;
    v9 = (float)v27;
    sub_48da00(a0->field_80->field_0, &v3, &v6);
    sub_48d680(a0->field_80, 5);
    sub_488640();
    a0->field_9c = (float)(v27 + 3.0);
    return v27 + 3.0;
}

