// NextThink__15CFuncTrackTrainfi @0xeaeb0 size=47
typedef struct st_4eaeb0_1 {
    char padding_0[260];
    float field_104;
    char padding_108[158];
    char field_1a6;
} st_4eaeb0_1;

typedef struct st_4eaeb0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[158];
    char field_1a6;
} st_4eaeb0_0;

st_4eaeb0_0 * NextThink__15CFuncTrackTrainfi(st_4eaeb0_1 **a0, float a1, unsigned int a2)
{
    st_4eaeb0_1 *v0;  // eax

    if (a2)
        *a0->field_1a6 = *a0->field_1a6 | 32;
    else
        *a0->field_1a6 = *a0->field_1a6 & 223;
    v0 = *a0;
    v0->field_104 = a1;
    return v0;
}

