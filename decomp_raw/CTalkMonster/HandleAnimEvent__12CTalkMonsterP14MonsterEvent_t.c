// HandleAnimEvent__12CTalkMonsterP14MonsterEvent_t @0x125ab0 size=199
typedef struct st_525ab0_1 {
    char padding_0[360];
    struct st_525ab0_0 *field_168;
} st_525ab0_1;

typedef struct st_525ab0_0 {
    unsigned int field_0;
} st_525ab0_0;

typedef struct st_525ab0_2 {
    char padding_0[96];
    struct st_525ab0_1 *field_60;
} st_525ab0_2;

extern st_525ab0_0 *g_616928;
extern st_525ab0_0 *g_61692c;

int HandleAnimEvent__12CTalkMonsterP14MonsterEvent_t(st_525ab0_2 *a0, unsigned int *a1)
{
    int v4;  // eax
    unsigned int v0;  // [bp-0x50]
    char v1[4];  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]

    if (*a1 != 1005)
    {
        if (*a1 == 1009)
        {
            v4 = g_616928(0, 99);
            if (v4 <= 74)
                return v4;
        }
        else
        {
            return sub_488a20(a0, a1);
        }
    }
    sub_489fa0(a0);
    v3 = 2.0f;
    v2 = 0x3f800000;
    strncpy(&v0, "333@", 4);
    g_61692c(v0, 3.4000000953674316f);
    strncpy(v1, "333@", 4);
    return a0->field_60->field_168(a0, a1[1], (unsigned int)v1);
}

