// GetMonsterPointer__11CBaseEntityP9entvars_s @0x9e240 size=93
typedef struct st_49e240_3 {
    char padding_0[124];
    struct st_49e240_2 *field_7c;
} st_49e240_3;

typedef struct st_49e240_1 {
    unsigned int field_0;
} st_49e240_1;

typedef struct st_49e240_4 {
    char padding_0[520];
    struct st_49e240_3 *field_208;
} st_49e240_4;

typedef struct st_49e240_0 {
    char padding_0[76];
    struct st_49e240_1 *field_4c;
} st_49e240_0;

typedef struct st_49e240_2 {
    char padding_0[96];
    struct st_49e240_0 *field_60;
} st_49e240_2;

extern st_49e240_1 *g_6168d4;

unsigned int GetMonsterPointer__11CBaseEntityP9entvars_s(unsigned int a0, st_49e240_4 *a1)
{
    st_49e240_3 *v0;  // eax
    st_49e240_2 *v1;  // edx

    v0 = a1->field_208;
    if (a1->field_208 || (v0 = g_6168d4(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    return (!v1 ? 0 : v1->field_60->field_4c(v1));
}

