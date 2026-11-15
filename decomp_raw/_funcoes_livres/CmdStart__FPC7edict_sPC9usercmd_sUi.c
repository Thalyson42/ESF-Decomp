// CmdStart__FPC7edict_sPC9usercmd_sUi @0xa30c0 size=123
typedef struct st_4a30c0_2 {
    char padding_0[124];
    struct st_4a30c0_1 *field_7c;
} st_4a30c0_2;

typedef struct st_4a30c0_0 {
    char padding_0[576];
    unsigned int field_240;
} st_4a30c0_0;

typedef struct st_4a30c0_3 {
    char padding_0[648];
    struct st_4a30c0_2 *field_288;
} st_4a30c0_3;

typedef struct st_4a30c0_1 {
    struct st_4a30c0_0 *field_0;
    char padding_4[676];
    struct st_4a30c0_1 *field_2a8;
} st_4a30c0_1;

typedef struct st_4a30c0_4 {
    unsigned int field_0;
} st_4a30c0_4;

extern st_4a30c0_4 *g_6168d4;

st_4a30c0_1 * CmdStart__FPC7edict_sPC9usercmd_sUi(st_4a30c0_3 *a0, unsigned int a1, st_4a30c0_1 *a2)
{
    st_4a30c0_2 *v0;  // eax
    st_4a30c0_1 *v1;  // eax
    st_4a30c0_1 *v2;  // esi

    v0 = a0->field_288;
    if (a0->field_288 || (v0 = g_6168d4(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    v2 = v1;
    if (!v2)
        return v1;
    if (v2->field_0->field_240)
        sub_48cfc0(v2->field_0->field_240, 0);
    v2->field_2a8 = a2;
    return a2;
}

