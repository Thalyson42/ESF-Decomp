// MessageSet__9CGameTextPCc @0xd1120 size=63
typedef struct st_4d1120_0 {
    char padding_0[468];
    unsigned int field_1d4;
} st_4d1120_0;

typedef struct st_4d1120_1 {
    unsigned int field_0;
} st_4d1120_1;

extern st_4d1120_1 *g_6168cc;

st_4d1120_0 * MessageSet__9CGameTextPCc(st_4d1120_0 **a0, unsigned int a1)
{
    unsigned int v0;  // eax
    st_4d1120_0 *v1;  // eax

    v0 = g_6168cc(a1);
    v1 = *a0;
    v1->field_1d4 = v0;
    return v1;
}

