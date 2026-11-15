// CreateShenlong__9CShenlongG6VectorT1PP11CDragonBall @0x1185b0 size=273
typedef struct st_5185b0_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[168];
    float field_104;
} st_5185b0_0;

typedef struct st_5185b0_5 {
    struct st_5185b0_3 *field_0;
} st_5185b0_5;

typedef struct st_5185b0_2 {
    unsigned int field_0;
} st_5185b0_2;

typedef struct st_5185b0_3 {
    char padding_0[520];
    int field_208;
} st_5185b0_3;

typedef struct st_5185b0_4 {
    struct st_5185b0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[76];
    struct st_5185b0_1 *field_60;
    char padding_64[600];
    struct st_5185b0_5 *field_2bc;
} st_5185b0_4;

typedef struct st_5185b0_1 {
    char padding_0[8];
    struct st_5185b0_2 *field_8;
} st_5185b0_1;

typedef struct st_5185b0_6 {
    float field_0;
} st_5185b0_6;

extern char PissedThink__9CShenlong;
extern st_5185b0_2 *g_616928;
extern st_5185b0_6 *gpGlobals;

short CreateShenlong__9CShenlongG6VectorT1PP11CDragonBall(int a0, int a1, st_5185b0_5 **a2)
{
    st_5185b0_4 *v4;  // edi
    int idx;  // edx
    st_5185b0_0 *v6;  // esi
    char v0;  // [bp-0x124]
    char v1;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    v4 = sub_489ea0(0);
    v4->field_60->field_8(v4);
    idx = 0;
    do
    {
        (&v4->field_2bc)[idx] = a2[idx];
        idx += 1;
    } while (idx <= 6);
    sub_48db50(v4->field_0, a0);
    v6 = v4->field_0;
    sub_488860(&v1, a1);
    v6->field_50 = v1;
    v6->field_54 = v2;
    v6->field_58 = v3;
    sub_48d990(&v0, "dragon/makewish%d.wav", g_616928(1, 1));
    v4->field_c = _INSERT(sub_489390(*(int *)(*(int *)v4->field_2bc + 520), 1, &v0, 0x3f800000, 0, 0, 100), 0, 0) | 0xffff0000;
    v4->field_10 = &PissedThink__9CShenlong;
    v4->field_0->field_104 = (float)(*(float *)gpGlobals + 15.0);
    return (unsigned short)v4;
}

