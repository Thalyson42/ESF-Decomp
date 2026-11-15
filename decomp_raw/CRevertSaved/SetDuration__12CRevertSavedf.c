// SetDuration__12CRevertSavedf @0xfef30 size=21
typedef struct st_4fef30_1 {
    char padding_0[472];
    float field_1d8;
} st_4fef30_1;

typedef struct st_4fef30_0 {
    char padding_0[472];
    unsigned int field_1d8;
} st_4fef30_0;

st_4fef30_0 * SetDuration__12CRevertSavedf(st_4fef30_1 **a0, float a1)
{
    st_4fef30_1 *v0;  // eax

    v0 = *a0;
    v0->field_1d8 = a1;
    return v0;
}

