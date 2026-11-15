// SendPredictVars__12CPlayerMeleef @0x106d50 size=350
typedef struct st_506d50_7 {
    char padding_0[12];
    float field_c;
} st_506d50_7;

typedef struct st_506d50_1 {
    char padding_0[12];
    struct st_506d50_2 *field_c;
} st_506d50_1;

typedef struct st_506d50_3 {
    char padding_0[292];
    struct st_506d50_4 *field_124;
    char padding_128[88];
    struct st_506d50_1 *field_180;
} st_506d50_3;

typedef struct st_506d50_4 {
    struct st_506d50_0 *field_0;
} st_506d50_4;

typedef struct st_506d50_2 {
    unsigned int field_0;
} st_506d50_2;

typedef struct st_506d50_0 {
    char padding_0[520];
    unsigned int field_208;
} st_506d50_0;

typedef struct st_506d50_5 {
    char padding_0[4];
    float field_4;
} st_506d50_5;

typedef struct st_506d50_6 {
    char padding_0[8];
    float field_8;
} st_506d50_6;

extern unsigned int gmsgMeleeAtkHud;
extern st_506d50_2 *g_616878;
extern st_506d50_2 *g_61687c;
extern st_506d50_2 *g_616880;
extern st_506d50_2 *g_616888;

int SendPredictVars__12CPlayerMeleef(st_506d50_3 *a0, float a1)
{
    st_506d50_5 *v7;  // eax
    st_506d50_6 *v8;  // eax
    st_506d50_7 *v9;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    float v3;  // [bp-0x10]
    int v4;  // [bp-0xc]
    unsigned short v5;  // [bp-0x8]
    unsigned short v6;  // [bp-0x6]

    g_616878(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520), v0, v1, v2);
    g_616880(4);
    v7 = a0->field_180->field_c(a0);
    v3 = 100.0f;
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(100.0 * v7->field_4);
    g_616888(v4);
    v8 = a0->field_180->field_c(a0);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(v3 * v8->field_8);
    g_616888(v4);
    v9 = a0->field_180->field_c(a0);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(v3 * v9->field_c);
    g_616888(v4);
    v6 = __fnstcw();
    v5 = v6 | 0xc00;
    v4 = (int)(a1 * v3);
    g_616888(v4);
    return g_61687c(v4);
}

