// UpdateTarget__19CMomentaryRotButtonf @0x984b0 size=234
typedef struct st_4984b0_0 {
    char padding_0[184];
    struct st_4984b0_1 *field_b8;
} st_4984b0_0;

typedef struct st_4984b0_1 {
    unsigned int field_0;
} st_4984b0_1;

typedef struct st_4984b0_3 {
    char padding_0[124];
    struct st_4984b0_2 *field_7c;
    char padding_80[328];
    unsigned int field_1c8;
} st_4984b0_3;

typedef struct st_4984b0_2 {
    char padding_0[96];
    struct st_4984b0_0 *field_60;
} st_4984b0_2;

typedef struct st_4984b0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4984b0_4;

extern st_4984b0_1 *g_6167f8;
extern st_4984b0_1 *g_6168d4;
extern st_4984b0_1 *g_6168d8;
extern st_4984b0_4 *gpGlobals;

st_4984b0_3 * UpdateTarget__19CMomentaryRotButtonf(st_4984b0_3 **a0, unsigned int a1)
{
    st_4984b0_3 *v0;  // edi
    st_4984b0_3 *v1;  // eax
    unsigned int v2;  // esi
    st_4984b0_3 *v3;  // eax
    st_4984b0_2 *v4;  // edx

    if (!*a0->field_1c8)
        return *a0;
    v0 = NULL;
    while (1)
    {
        v1 = g_6167f8(v0, "targetname", *a0->field_1c8 + gpGlobals->field_98);
        v0 = v1;
        v2 = 0;
        if (!v0 || (v1 = g_6168d8(v0), !v1))
            v2 = 1;
        if (v2)
            break;
        v3 = v0;
        if (v3 || (v3 = g_6168d4(0), v3))
            v4 = v3->field_7c;
        else
            v4 = NULL;
        if (v4)
            v4->field_60->field_b8(v4, a0, a0, 2, a1);
    }
    return v1;
}

