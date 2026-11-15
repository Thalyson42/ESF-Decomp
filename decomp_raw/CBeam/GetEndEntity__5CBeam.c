// GetEndEntity__5CBeam @0xb72e0 size=23
typedef struct st_4b72e0_0 {
    char padding_0[272];
    unsigned int field_110;
} st_4b72e0_0;

unsigned int GetEndEntity__5CBeam(st_4b72e0_0 **a0)
{
    return *a0->field_110 & 0xfff;
}

