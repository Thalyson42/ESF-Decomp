// SetHoldTime__12CRevertSavedf @0xfef50 size=21
typedef struct st_4fef50_0 {
    char padding_0[476];
    unsigned int field_1dc;
} st_4fef50_0;

typedef struct st_4fef50_1 {
    char padding_0[476];
    float field_1dc;
} st_4fef50_1;

st_4fef50_0 * SetHoldTime__12CRevertSavedf(st_4fef50_1 **a0, float a1)
{
    st_4fef50_1 *v0;  // eax

    v0 = *a0;
    v0->field_1dc = a1;
    return v0;
}

