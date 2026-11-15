// CopyToBodyQue__FP9entvars_s @0x139ae0 size=322
typedef struct st_539ae0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[36];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[88];
    unsigned int field_b4;
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    char padding_10c[12];
    unsigned int field_118;
    char padding_11c[12];
    unsigned int field_128;
    char padding_12c[4];
    unsigned int field_130;
    unsigned int field_134;
    char padding_138[20];
    float field_14c;
    char padding_150[12];
    unsigned int field_15c;
    char padding_160[16];
    unsigned int field_170;
    char padding_174[36];
    unsigned int field_198;
    char padding_19c[8];
    unsigned int field_1a4;
    unsigned int field_1a8;
} st_539ae0_1;

typedef struct st_539ae0_0 {
    char padding_0[128];
    char field_80;
    char padding_81[31];
    unsigned int field_a0;
    unsigned int field_a4;
    unsigned int field_a8;
    char padding_ac[36];
    unsigned int field_d0;
    unsigned int field_d4;
    unsigned int field_d8;
    char padding_dc[88];
    unsigned int field_134;
    unsigned int field_138;
    char padding_13c[76];
    unsigned int field_188;
    char padding_18c[12];
    unsigned int field_198;
    char padding_19c[12];
    unsigned int field_1a8;
    char padding_1ac[4];
    unsigned int field_1b0;
    unsigned int field_1b4;
    char padding_1b8[20];
    unsigned int field_1cc;
    char padding_1d0[12];
    unsigned int field_1dc;
    char padding_1e0[16];
    unsigned int field_1f0;
    char padding_1f4[36];
    unsigned int field_218;
    char padding_21c[8];
    unsigned int field_224;
    unsigned int field_228;
} st_539ae0_0;

typedef struct st_539ae0_2 {
    unsigned int field_0;
} st_539ae0_2;

extern st_539ae0_2 *g_6168dc;
extern st_539ae0_0 *g_pBodyQueueHead;

st_539ae0_0 * CopyToBodyQue__FP9entvars_s(float idx)
{
    st_539ae0_1 *v2;  // esi
    st_539ae0_0 *v3;  // eax
    int v0;  // [bp-0x8]

    if (*(char *)(*(unsigned int *)&idx + 280) < 0)
        return v3;
    v2 = (!g_pBodyQueueHead ? NULL : (struct st_539ae0_0 *)&g_pBodyQueueHead->field_80);
    v2->field_50 = *(int *)(*(unsigned int *)&idx + 80);
    v2->field_54 = *(int *)(*(unsigned int *)&idx + 84);
    v2->field_58 = *(int *)(*(unsigned int *)&idx + 88);
    v2->field_b8 = *(int *)(*(unsigned int *)&idx + 184);
    v2->field_b4 = *(int *)(*(unsigned int *)&idx + 180);
    *(float *)&v2->field_130 = *(float *)(*(unsigned int *)&idx + 304);
    v2->field_1a8 = *(int *)(*(unsigned int *)&idx + 424);
    v2->field_108 = 6;
    v2->field_20 = *(int *)(*(unsigned int *)&idx + 32);
    v2->field_24 = *(int *)(*(unsigned int *)&idx + 36);
    v2->field_28 = *(int *)(*(unsigned int *)&idx + 40);
    v2->field_1a4 = 0;
    v2->field_170 = *(int *)(*(unsigned int *)&idx + 368);
    v2->field_15c = 0x11;
    v0 = g_6168dc(*(int *)(*(unsigned int *)&idx + 520));
    v2->field_14c = (float)v0;
    v2->field_118 = *(int *)(*(unsigned int *)&idx + 280) | 32;
    v2->field_128 = *(int *)(*(unsigned int *)&idx + 296);
    *(float *)&v2->field_134 = *(float *)(*(unsigned int *)&idx + 308);
    sub_48db50(v2, *(unsigned int *)&idx + 8);
    sub_48a0d0(v2, *(unsigned int *)&idx + 220, *(unsigned int *)&idx + 232);
    g_pBodyQueueHead = v2->field_198;
    return g_pBodyQueueHead;
}

