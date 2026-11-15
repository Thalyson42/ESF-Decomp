// UTIL_Remove__FP11CBaseEntity @0x134ec0 size=66
typedef struct st_534ec0_0 {
    char padding_0[423];
    char field_1a7;
    char padding_1a8[36];
    unsigned int field_1cc;
} st_534ec0_0;

st_534ec0_0 * UTIL_Remove__FP11CBaseEntity(st_534ec0_0 **a0)
{
    st_534ec0_0 *v0;  // eax
    st_534ec0_0 *v1;  // eax

    if (!a0)
        return v1;
    sub_48b850(a0);
    *a0->field_1a7 = *a0->field_1a7 | 64;
    v0 = *a0;
    v0->field_1cc = 0;
    return v0;
}

