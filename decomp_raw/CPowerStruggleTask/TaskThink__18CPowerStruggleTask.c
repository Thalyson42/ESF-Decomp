// TaskThink__18CPowerStruggleTask @0x183df0 size=168
typedef struct st_583df0_5 {
    char padding_0[4];
    unsigned int field_4;
    struct st_583df0_3 *field_8;
    struct st_583df0_4 *field_c;
} st_583df0_5;

typedef struct st_583df0_3 {
    struct st_583df0_2 *field_0;
    char padding_4[58];
    char field_3e;
    char padding_3f[789];
    unsigned int field_354;
    char padding_358[4];
    unsigned int field_35c;
    char padding_360[1696];
    struct st_583df0_3 *field_a00;
    char padding_a04[176];
    float field_ab4;
} st_583df0_3;

typedef struct st_583df0_1 {
    struct st_583df0_0 *field_0;
    char padding_4[58];
    char field_3e;
    char padding_3f[789];
    unsigned int field_354;
    char padding_358[4];
    unsigned int field_35c;
    char padding_360[1696];
    struct st_583df0_1 *field_a00;
    char padding_a04[176];
    unsigned int field_ab4;
} st_583df0_1;

typedef struct st_583df0_4 {
    char padding_0[512];
    char field_200;
} st_583df0_4;

typedef struct st_583df0_2 {
    char padding_0[608];
    float field_260;
} st_583df0_2;

typedef struct st_583df0_0 {
    char padding_0[608];
    unsigned int field_260;
} st_583df0_0;

extern st_583df0_1 *gpGlobals;

st_583df0_1 * TaskThink__18CPowerStruggleTask(st_583df0_5 *a0)
{
    st_583df0_3 *v4;  // eax
    st_583df0_3 *v5;  // edx
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x24]
    unsigned short v2;  // [bp-0x20]
    unsigned short v3;  // [bp-0x1e]

    v4 = a0->field_8;
    if (!v4->field_354 && !v4->field_35c)
    {
        a0->field_4 = 2;
        return v4;
    }
    a0->field_c->field_200 = a0->field_c->field_200 | 1;
    v5 = a0->field_8;
    if (!v5->field_a00->field_3e)
        return v5->field_a00;
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)v5->field_0->field_260;
    if (v1 <= 20)
        return v1;
    *(unsigned short *)&v0 = 1;
    CBot::ToggleTurbo(v5, v0);
    a0->field_8->field_ab4 = (float)(1.5 + *(float *)&gpGlobals->field_0);
    return gpGlobals;
}

