// Spawn__9CEnvLight @0xce330 size=225
typedef struct st_4ce330_1 {
    char padding_0[240];
    struct st_4ce330_2 *field_f0;
} st_4ce330_1;

typedef struct st_4ce330_2 {
    unsigned int field_0;
} st_4ce330_2;

typedef struct st_4ce330_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4ce330_0;

extern st_4ce330_1 g_engfuncs;
extern st_4ce330_0 *gpGlobals;

int Spawn__9CEnvLight(float a0)
{
    st_4ce330_1 *v0;  // [bp-0x58]
    char v1;  // [bp-0x44]

    sub_488e40(*(int *)a0 + 80);
    sub_48d990(&v1, "%f", (unsigned int)(gpGlobals->field_28 >> 0));
    v0 = &g_engfuncs.padding_0[0];
    v0->field_f0("sv_skyvec_x", &v1);
    sub_48d990(&v1, "%f", (unsigned int)(gpGlobals->field_2c >> 0));
    v0->field_f0("sv_skyvec_y", &v1);
    sub_48d990(&v1, "%f", (unsigned int)(gpGlobals->field_30 >> 0));
    v0->field_f0("sv_skyvec_z", &v1);
    return sub_489240(a0);
}

