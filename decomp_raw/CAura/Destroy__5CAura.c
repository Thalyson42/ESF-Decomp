// Destroy__5CAura @0x8fee0 size=162
typedef struct st_48fee0_1 {
    char padding_0[328];
    unsigned int field_148;
} st_48fee0_1;

typedef struct st_48fee0_2 {
    struct st_48fee0_1 *field_0;
    char padding_4[844];
    unsigned int field_350;
} st_48fee0_2;

typedef struct st_48fee0_0 {
    unsigned int field_0;
} st_48fee0_0;

extern st_48fee0_0 *g_6168dc;

int Destroy__5CAura(float a0)
{
    st_48fee0_2 *v2;  // eax
    st_48fee0_1 *v3;  // eax

    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&a0 + 680) + 520), 3, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    sub_48b090(g_6168dc(*(int *)(*(int *)a0 + 520)));
    sub_48cc00(a0);
    v2 = *(int *)(*(unsigned int *)&a0 + 680);
    if (v2->field_350)
        return v2;
    v3 = v2->field_0;
    v3->field_148 = 0;
    return v3;
}

