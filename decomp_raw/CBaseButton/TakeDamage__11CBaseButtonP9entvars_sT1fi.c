// TakeDamage__11CBaseButtonP9entvars_sT1fi @0x96910 size=293
typedef struct st_496910_2 {
    char padding_0[124];
    int field_7c;
} st_496910_2;

typedef struct st_496910_1 {
    struct st_496910_0 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_496910_1;

typedef struct st_496910_3 {
    char padding_0[520];
    struct st_496910_2 *field_208;
} st_496910_3;

typedef struct st_496910_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[71];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_496910_0;

typedef struct st_496910_5 {
    char padding_0[152];
    unsigned int field_98;
} st_496910_5;

typedef struct st_496910_4 {
    unsigned int field_0;
} st_496910_4;

extern st_496910_4 *g_6168d4;
extern st_496910_5 *gpGlobals;

unsigned int TakeDamage__11CBaseButtonP9entvars_sT1fi(st_496910_1 *a0, unsigned int a1, st_496910_3 *a2)
{
    st_496910_2 *v3;  // eax
    int v4;  // eax
    unsigned int v5;  // esi
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x8]

    v2 = sub_48b3b0(a0);
    if (!v2)
        return 0;
    a0->field_14 = 0;
    a0->field_18 = 0;
    v3 = a2->field_208;
    if (a2->field_208 || (v3 = g_6168d4(0), v3))
        v4 = v3->field_7c;
    else
        v4 = 0;
    v5 = &a0[7].padding_4[12];
    sub_48d960(v5, v4);
    if (!sub_48d8b0(v5))
    {
        return 0;
    }
    else if (v2 == 2)
    {
        sub_489390(a0->field_0->field_208, 2, a0->field_0->field_1e8 + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
        if (!(a0->field_0->field_1a0 & 32))
        {
            v1 = 0;
            v0 = 3;
            sub_48d150(a0, sub_488810(&a0[7].padding_4[12]));
        }
        sub_48cc60(a0);
        return 0;
    }
    else
    {
        sub_48b650(a0);
        return 0;
    }
}

