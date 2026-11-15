// CmdEnd__FPC7edict_s @0xa3140 size=95
typedef struct st_4a3140_1 {
    char padding_0[124];
    struct st_4a3140_0 *field_7c;
} st_4a3140_1;

typedef struct st_4a3140_0 {
    struct st_4a3140_0 *field_0;
    char padding_4[572];
    unsigned int field_240;
} st_4a3140_0;

typedef struct st_4a3140_2 {
    char padding_0[648];
    struct st_4a3140_1 *field_288;
} st_4a3140_2;

typedef struct st_4a3140_3 {
    unsigned int field_0;
} st_4a3140_3;

extern st_4a3140_3 *g_6168d4;

st_4a3140_0 * CmdEnd__FPC7edict_s(st_4a3140_2 *a0)
{
    st_4a3140_1 *v0;  // eax
    st_4a3140_0 *v1;  // eax
    st_4a3140_0 *v2;  // eax

    v0 = a0->field_288;
    if (a0->field_288 || (v0 = g_6168d4(0), v0))
        v1 = v0->field_7c;
    else
        v1 = NULL;
    v2 = v1;
    if (v2)
    {
        v2 = v1->field_0;
        if (v1->field_0->field_240)
            v2 = sub_48c750();
    }
    return v2;
}

