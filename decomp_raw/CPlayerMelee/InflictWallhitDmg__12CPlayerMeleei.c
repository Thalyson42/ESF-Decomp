// InflictWallhitDmg__12CPlayerMeleei @0x102910 size=180
typedef struct st_502910_0 {
    char padding_0[52];
    struct st_502910_1 *field_34;
    char padding_38[84];
    struct st_502910_1 *field_8c;
} st_502910_0;

typedef struct st_502910_3 {
    char padding_0[8];
    float field_8;
    char padding_c[92];
    struct st_502910_1 *field_68;
    char padding_6c[184];
    struct st_502910_2 *field_124;
} st_502910_3;

typedef struct st_502910_1 {
    unsigned int field_0;
} st_502910_1;

typedef struct st_502910_2 {
    char padding_0[96];
    struct st_502910_0 *field_60;
} st_502910_2;

extern unsigned int g_400000;

unsigned int InflictWallhitDmg__12CPlayerMeleei(st_502910_3 *a0, unsigned int a1)
{
    st_502910_2 *v5;  // esi
    double v6;  // mm7
    unsigned int v0;  // [bp-0x3c]
    float v1;  // [bp-0x10]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    v5 = a0->field_124;
    v0 = &g_400000;
    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v2 = (int)((a0->field_8 / 1000.0 + 1.0) * 7.0);
    v6 = (double)v2;
    if (a1)
        v6 *= 0.5;
    v1 = (float)v6;
    v5->field_60->field_34(a0->field_124, *(int *)a0->field_68, *(int *)a0->field_68, v1);
    return (!v5->field_60->field_8c(v5) ? 0 : 1);
}

