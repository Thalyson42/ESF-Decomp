// GetStartEntity__5CBeam @0xb72c0 size=23
typedef struct st_4b72c0_0 {
    char padding_0[296];
    unsigned int field_128;
} st_4b72c0_0;

unsigned int GetStartEntity__5CBeam(st_4b72c0_0 **a0)
{
    return *a0->field_128 & 0xfff;
}

