// SendWeaponAnim__17CBasePlayerWeaponiii @0x138a70 size=159
typedef struct st_538a70_4 {
    struct st_538a70_0 *field_0;
    char padding_4[92];
    struct st_538a70_1 *field_60;
    char padding_64[28];
    struct st_538a70_5 *field_80;
} st_538a70_4;

typedef struct st_538a70_0 {
    char padding_0[276];
    unsigned int field_114;
} st_538a70_0;

typedef struct st_538a70_1 {
    char padding_0[340];
    struct st_538a70_2 *field_154;
} st_538a70_1;

typedef struct st_538a70_5 {
    struct st_538a70_3 *field_0;
} st_538a70_5;

typedef struct st_538a70_2 {
    unsigned int field_0;
} st_538a70_2;

typedef struct st_538a70_3 {
    char padding_0[520];
    unsigned int field_208;
    char padding_20c[12];
    unsigned int field_218;
} st_538a70_3;

extern st_538a70_2 *g_616878;
extern st_538a70_2 *g_61687c;
extern st_538a70_2 *g_616880;

int SendWeaponAnim__17CBasePlayerWeaponiii(st_538a70_4 *a0, unsigned int a1)
{
    a0->field_60->field_154(a0);
    *(unsigned int *)(*(int *)a0->field_80 + 536) = a1;
    g_616878(1, 35, 0, *(int *)(*(int *)a0->field_80 + 520));
    g_616880(a1);
    g_616880(a0->field_0->field_114);
    return g_61687c();
}

