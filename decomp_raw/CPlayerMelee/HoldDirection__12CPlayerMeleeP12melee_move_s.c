// HoldDirection__12CPlayerMeleeP12melee_move_s @0x105bf0 size=294
typedef struct st_505bf0_4 {
    char padding_0[12];
    float field_c;
} st_505bf0_4;

typedef struct st_505bf0_1 {
    char padding_0[12];
    struct st_505bf0_2 *field_c;
} st_505bf0_1;

typedef struct st_505bf0_3 {
    char padding_0[304];
    int field_130;
    char padding_134[76];
    struct st_505bf0_1 *field_180;
} st_505bf0_3;

typedef struct st_505bf0_2 {
    unsigned int field_0;
} st_505bf0_2;

typedef struct st_505bf0_0 {
    float field_0;
} st_505bf0_0;

extern st_505bf0_0 *gpGlobals;

unsigned int HoldDirection__12CPlayerMeleeP12melee_move_s(st_505bf0_3 *a0, unsigned int *a1)
{
    float v3;  // 128
    st_505bf0_4 *v4;  // eax
    float v0;  // [bp-0x10]
    float v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    if (!a1)
        return 0;
    v3 = *(float *)gpGlobals;
    *(float *)&a1[3] = v3;
    if (sub_48c4f0(a0))
    {
        sub_48bbe0(a0);
        v1 = v3;
        sub_487b30(a0->field_130);
        v2 = 0;
        if (v3 < v1)
        {
            sub_48d690(a0, a1);
            return 1;
        }
        sub_48b4e0(a0, a1);
        v0 = v3;
        if (v0 > *(float *)(a0->field_180->field_c(a0) + 12))
        {
            v4 = a0->field_180->field_c(a0);
            *(float *)&a1[3] = *(float *)&a1[2] + v4->field_c;
            if (sub_48d690(a0, a1))
                return 1;
            sub_487fe0(a0, &v2);
            sub_48e0d0(a0, &v2);
            sub_48d920(a0, v2);
        }
    }
    return 0;
}

