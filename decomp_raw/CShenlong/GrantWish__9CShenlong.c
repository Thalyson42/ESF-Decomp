// GrantWish__9CShenlong @0x1181f0 size=168
typedef struct st_5181f0_0 {
    char padding_0[260];
    unsigned int field_104;
} st_5181f0_0;

typedef struct st_5181f0_1 {
    struct st_5181f0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[660];
    int field_2a8;
    int field_2ac;
    unsigned int field_2b0;
    unsigned int field_2b4;
    unsigned int field_2b8;
} st_5181f0_1;

typedef struct st_5181f0_3 {
    struct st_5181f0_3 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_5181f0_3;

typedef struct st_5181f0_2 {
    float field_0;
} st_5181f0_2;

extern char WishGrantThink__9CShenlong;
extern st_5181f0_2 *gpGlobals;

unsigned int GrantWish__9CShenlong(st_5181f0_1 *a0)
{
    int v0;  // edx
    unsigned int v1;  // ecx
    st_5181f0_3 *v2;  // eax
    unsigned int v4;  // eax

    v0 = 0;
    v1 = a0 + 1;
    do
    {
        v2 = v0 * 4;
        if (*(int *)((char *)v2 + v1))
        {
            v2 = *(int *)((char *)v2 + v1);
            v2->field_64 = 1;
        }
    } while ((v0 += 1, v0 <= 6));
    a0->field_c = _INSERT(v2, 0, 0) | 0xffff0000;
    a0->field_10 = &WishGrantThink__9CShenlong;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    sub_487b90(a0->field_2a8);
    v4 = sub_487b90(a0->field_2ac);
    a0->field_2b0 = 0;
    a0->field_2b4 = 1;
    a0->field_2b8 = 6;
    return v4;
}

