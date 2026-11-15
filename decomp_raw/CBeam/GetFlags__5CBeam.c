// GetFlags__5CBeam @0xb72a0 size=23
typedef struct st_4b72a0_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4b72a0_0;

unsigned int GetFlags__5CBeam(st_4b72a0_0 **a0)
{
    return *a0->field_148 & 240;
}

