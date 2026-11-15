// UTIL_CreateEnt__FPcRC6VectorT1P7edict_s @0x17f430 size=235
typedef struct st_57f430_3 {
    char padding_0[124];
    struct st_57f430_4 *field_7c;
} st_57f430_3;

typedef struct st_57f430_4 {
    struct st_57f430_2 *field_0;
} st_57f430_4;

typedef struct st_57f430_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[316];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_57f430_2;

typedef struct st_57f430_0 {
    char padding_0[152];
    unsigned int field_98;
} st_57f430_0;

typedef struct st_57f430_1 {
    unsigned int field_0;
} st_57f430_1;

extern st_57f430_1 *g_61681c;
extern st_57f430_1 *g_6168d4;
extern st_57f430_1 *g_6168d8;
extern st_57f430_0 *gpGlobals;

st_57f430_2 ** UTIL_CreateEnt__FPcRC6VectorT1P7edict_s(unsigned int a0, unsigned int *a1, unsigned int *a2, unsigned int a3)
{
    st_57f430_3 *v1;  // esi
    st_57f430_2 **v2;  // esi
    st_57f430_2 *v3;  // edx
    st_57f430_2 *v4;  // edx
    unsigned int v0;  // [bp-0x8]

    v1 = g_61681c(a0 - gpGlobals->field_98);
    v0 = 0;
    if (!v1 || !g_6168d8(v1))
        v0 = 1;
    if (v0)
        return NULL;
    if (v1 || (v1 = g_6168d4(0), v1))
        v2 = v1->field_7c;
    else
        v2 = NULL;
    *v2->field_198 = a3;
    v3 = *v2;
    v3->field_8 = *a1;
    v3->field_c = a1[1];
    v3->field_10 = a1[2];
    v4 = *v2;
    v4->field_50 = *a2;
    v4->field_54 = a2[1];
    v4->field_58 = a2[2];
    sub_488ec0(*v2->field_208);
    return v2;
}

