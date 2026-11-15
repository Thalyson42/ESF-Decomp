// IsSpawnPointValid__FP11CBaseEntityT0 @0xfa4e0 size=131
typedef struct st_4fa4e0_0 {
    char padding_0[160];
    struct st_4fa4e0_1 *field_a0;
} st_4fa4e0_0;

typedef struct st_4fa4e0_1 {
    unsigned int field_0;
} st_4fa4e0_1;

typedef struct st_4fa4e0_3 {
    char padding_0[72];
    struct st_4fa4e0_1 *field_48;
} st_4fa4e0_3;

typedef struct st_4fa4e0_2 {
    char padding_0[96];
    struct st_4fa4e0_0 *field_60;
} st_4fa4e0_2;

typedef struct st_4fa4e0_4 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4fa4e0_3 *field_60;
} st_4fa4e0_4;

unsigned int IsSpawnPointValid__FP11CBaseEntityT0(st_4fa4e0_2 *a0, st_4fa4e0_4 *a1)
{
    st_4fa4e0_2 *v0;  // esi

    v0 = NULL;
    if (a1->field_60->field_48(a1, a0))
    {
        do
        {
            v0 = sub_48bba0(v0, a1->field_0 + 8, 128.0f);
            if (!v0)
                return 1;
        } while (!v0->field_60->field_a0(v0) || v0 == a0);
    }
    return 0;
}

