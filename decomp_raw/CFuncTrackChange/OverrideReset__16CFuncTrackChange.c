// OverrideReset__16CFuncTrackChange @0xecec0 size=63
typedef struct st_4ecec0_1 {
    struct st_4ecec0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4ecec0_1;

typedef struct st_4ecec0_0 {
    char padding_0[256];
    unsigned int field_100;
    float field_104;
} st_4ecec0_0;

extern char Find__16CFuncTrackChange;

unsigned int OverrideReset__16CFuncTrackChange(st_4ecec0_1 *a0)
{
    st_4ecec0_0 *v0;  // eax
    unsigned int v1;  // eax

    v0 = a0->field_0;
    v0->field_104 = (float)(1.0 + *(float *)&v0->field_100);
    v1 = _INSERT(v0, 0, 0);
    a0->field_c = v1 | 0xffff0000;
    a0->field_10 = &Find__16CFuncTrackChange;
    return v1 | 0xffff0000;
}

