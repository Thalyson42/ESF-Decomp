// SetModel__10CBaseClass @0x9f190 size=166
typedef struct st_49f190_4 {
    struct st_49f190_0 *field_0;
} st_49f190_4;

typedef struct st_49f190_2 {
    unsigned int field_0;
} st_49f190_2;

typedef struct st_49f190_0 {
    char padding_0[520];
    unsigned int field_208;
} st_49f190_0;

typedef struct st_49f190_1 {
    char padding_0[60];
    struct st_49f190_2 *field_3c;
} st_49f190_1;

typedef struct st_49f190_3 {
    struct st_49f190_4 *field_0;
    struct st_49f190_1 *field_4;
} st_49f190_3;

extern st_49f190_2 *g_engfuncs.pfnIndexOfEdict;
extern st_49f190_2 *g_engfuncs.pfnGetInfoKeyBuffer;
extern st_49f190_2 *g_engfuncs.pfnSetClientKeyValue;

int SetModel__10CBaseClass(st_49f190_3 *a0)
{
    unsigned int v5;  // eax
    unsigned int v0;  // [bp-0x128]
    unsigned int v1;  // [bp-0x124]
    char *v2;  // [bp-0x120]
    char v3;  // [bp-0x104]

    strcpy@GLIBC_2.0(&v3, a0->field_4->field_3c(a0));
    v2 = &v3;
    v1 = "model";
    v0 = g_engfuncs.pfnGetInfoKeyBuffer(*(int *)(*(int *)a0->field_0 + 520));
    v5 = g_engfuncs.pfnIndexOfEdict(*(int *)(*(int *)a0->field_0 + 520));
    g_engfuncs.pfnSetClientKeyValue(v5);
    return UTIL_SetPlayerModel(a0->field_0, &v3);
}

