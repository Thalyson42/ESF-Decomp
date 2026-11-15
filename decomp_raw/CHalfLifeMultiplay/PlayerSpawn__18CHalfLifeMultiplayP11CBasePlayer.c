// PlayerSpawn__18CHalfLifeMultiplayP11CBasePlayer @0xdca30 size=364
typedef struct st_4dca30_5 {
    struct st_4dca30_1 *field_0;
    char padding_4[584];
    int field_24c;
    char padding_250[1272];
    int field_748;
    unsigned int field_74c;
    unsigned int field_750;
    char padding_754[16];
    struct st_4dca30_4 *field_764;
    char padding_768[44];
    unsigned int field_794;
} st_4dca30_5;

typedef struct st_4dca30_2 {
    char padding_0[12];
    struct st_4dca30_3 *field_c;
    struct st_4dca30_3 *field_10;
    struct st_4dca30_3 *field_14;
} st_4dca30_2;

typedef struct st_4dca30_6 {
    char padding_0[240];
    struct st_4dca30_3 *field_f0;
} st_4dca30_6;

typedef struct st_4dca30_1 {
    char padding_0[352];
    float field_160;
    char padding_164[7];
    char field_16b;
} st_4dca30_1;

typedef struct st_4dca30_0 {
    char padding_0[352];
    unsigned int field_160;
    char padding_164[7];
    char field_16b;
} st_4dca30_0;

typedef struct st_4dca30_3 {
    unsigned int field_0;
} st_4dca30_3;

typedef struct st_4dca30_7 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[60];
    struct st_4dca30_6 *field_44;
} st_4dca30_7;

typedef struct st_4dca30_4 {
    char padding_0[4];
    struct st_4dca30_2 *field_4;
} st_4dca30_4;

extern float g_5bd02c;

st_4dca30_0 * PlayerSpawn__18CHalfLifeMultiplayP11CBasePlayer(st_4dca30_7 *a0, st_4dca30_5 *a1)
{
    int v4;  // esi
    unsigned int v5;  // eax
    int v6;  // esi
    st_4dca30_1 *v7;  // eax
    unsigned int v0;  // [bp-0x20]
    unsigned short v1;  // [bp-0x1c]
    unsigned short v2;  // [bp-0x1a]
    int v3;  // [bp-0x18]

    a1->field_0->field_16b = a1->field_0->field_16b | 128;
    a0->field_44->field_f0(a0);
    if (g_5bd02c == 1.0f)
    {
        v4 = a1->field_764->field_4->field_14(a1->field_764);
        if (a0->field_4)
        {
            v5 = sub_48ced0(a1);
            v3 = a0->field_4 - v5;
            v2 = __fnstcw();
            v1 = v2 | 0xc00;
            v3 = (int)((double)a1->field_748 + (double)v3 * 0.1);
            v4 = v3;
            if (a1->field_794 && v4 > a1->field_748)
            {
                a1->field_794 = 0;
                v4 = a1->field_748;
            }
        }
        sub_48b8d0(a1, v4);
    }
    else
    {
        v4 = a1->field_748;
    }
    a1->field_750 = 0xffffffff;
    sub_487b40(a1, v4);
    v0 = a1->field_764->field_4->field_c(a1->field_764);
    v6 = a1->field_764->field_4->field_10(a1->field_764);
    *(float *)&a1->field_0[1].padding_0[244] = 1000.0f;
    a1->field_74c = v0;
    a1->field_24c = v6;
    sub_48c420(a1, v6);
    v7 = a1->field_0;
    v3 = v6;
    v7->field_160 = (float)v3;
    return v7;
}

