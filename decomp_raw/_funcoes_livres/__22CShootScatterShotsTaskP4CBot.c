// __22CShootScatterShotsTaskP4CBot @0x1504c0 size=219
typedef struct st_5504c0_0 {
    char padding_0[2556];
    char field_9fc;
} st_5504c0_0;

typedef struct st_5504c0_1 {
    unsigned int field_0;
    char padding_4[4];
    struct st_5504c0_0 *field_8;
    char padding_c[8];
    unsigned int field_14;
    float field_18;
    unsigned int field_1c;
    char field_20;
} st_5504c0_1;

typedef struct st_5504c0_2 {
    unsigned int field_0;
} st_5504c0_2;

extern char __vt_22CShootScatterShotsTask;
extern st_5504c0_2 *g_616928;
extern st_5504c0_2 *g_61692c;

st_5504c0_1 * __22CShootScatterShotsTaskP4CBot(double a0, st_5504c0_1 *a1, int a2)
{
    sub_48ce80(a1, a2);
    a1->field_14 = &__vt_22CShootScatterShotsTask;
    g_61692c(2.75f, 3.450000047683716f);
    a1->field_18 = (float)(2.75 + *(float *)&a1->field_0);
    *(float *)&a1->field_1c = *(float *)&a1->field_0;
    if (a1->field_8->field_9fc <= 1 && (int)g_616928(1, 100) <= 19)
    {
        a1->field_20 = 1;
        return a1;
    }
    a1->field_20 = 0;
    return a1;
}

