// AddAnimation__12CPlayerMeleebfie @0x1001c0 size=489
typedef struct st_5001c0_7 {
    unsigned int field_0;
    char padding_4[124];
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    unsigned int field_8c;
    unsigned int field_90;
    unsigned int field_94;
    unsigned int field_98;
    unsigned int field_9c;
    char padding_a0[4];
    struct st_5001c0_3 *field_a4;
} st_5001c0_7;

typedef struct st_5001c0_6 {
    char padding_0[132];
    struct st_5001c0_3 *field_84;
    char padding_88[156];
    struct st_5001c0_5 *field_124;
    char padding_128[28];
    unsigned int field_144;
} st_5001c0_6;

typedef struct st_5001c0_5 {
    struct st_5001c0_4 *field_0;
    char padding_4[372];
    unsigned int field_178;
} st_5001c0_5;

typedef struct st_5001c0_4 {
    char padding_0[520];
    unsigned int field_208;
} st_5001c0_4;

typedef struct st_5001c0_0 {
    char padding_0[664];
    unsigned int field_298;
} st_5001c0_0;

typedef struct st_5001c0_3 {
    char padding_0[512];
    unsigned int field_200;
    char padding_204[124];
    unsigned int field_280;
    unsigned int field_284;
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
    unsigned int field_294;
    unsigned int field_298;
    unsigned int field_29c;
    char padding_2a0[4];
    struct st_5001c0_3 *field_2a4;
} st_5001c0_3;

typedef struct st_5001c0_2 {
    char padding_0[512];
    unsigned int field_200;
    char padding_204[124];
    unsigned int field_280;
    int field_284;
    unsigned int field_288;
    float field_28c;
    unsigned int field_290;
    unsigned int field_294;
    unsigned int field_298;
    unsigned int field_29c;
    char padding_2a0[4];
    struct st_5001c0_2 *field_2a4;
} st_5001c0_2;

typedef struct st_5001c0_1 {
    unsigned int field_0;
} st_5001c0_1;

extern st_5001c0_1 *g_6168dc;

st_5001c0_2 * AddAnimation__12CPlayerMeleebfie(st_5001c0_6 *a0, char a1, float a2, int a3, int a4)
{
    st_5001c0_0 *v3;  // eax
    st_5001c0_2 *v5;  // esi
    int idx;  // edi
    st_5001c0_6 *v7;  // edx
    st_5001c0_7 *v0;  // [bp-0x10]
    int *v1;  // [bp-0xc]
    char v2;  // [bp-0x5]

    v3 = sub_487fb0(a0);
    if (v3 && v3->field_298 && a0->field_124)
        sub_48b090(g_6168dc(a0->field_124->field_0->field_208));
    v2 = 1;
    v5 = sub_48d6a0(680);
    if (a3 > 16)
        a3 = 16;
    v5->field_280 = 0;
    v5->field_28c = a2;
    v5->field_290 = a1;
    v5->field_29c = 0;
    v5->field_288 = 0;
    v5->field_284 = a3;
    v5->field_294 = 0;
    v5->field_298 = 0;
    v5->field_2a4 = NULL;
    v1 = &a4;
    idx = 0;
    if (0 < a3)
    {
        v0 = &v5->field_200;
        do
        {
            v1 += 1;
            sub_48e110(&v5->padding_0[32 * idx], *(int *)((char *)v1 - 4));
            if (idx)
            {
                if (v2)
                    (&v0->field_0)[idx] = 108;
                else
                    (&v0->field_0)[idx] = 109;
                v2 ^= 1;
            }
            else if (a0->field_124->field_178 == 107)
            {
                v5->field_200 = 109;
            }
            else
            {
                v0->field_0 = 107;
            }
        } while ((idx += 1, idx < a3));
    }
    if (sub_48afe0(a0->field_124, v5) == 0xffffffff && !a0->field_144)
    {
        sub_48d4e0(v5);
        return NULL;
    }
    v7 = a0;
    if (v7->field_84)
    {
        v7 = a0;
        v5->field_2a4 = v7->field_84;
    }
    v7->field_84 = v5;
    sub_488cd0(a0);
    return v5;
}

