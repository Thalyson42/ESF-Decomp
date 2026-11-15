// GetWidth__5CBeam @0xb73a0 size=49
typedef struct st_4b73a0_0 {
    char padding_0[324];
    float field_144;
} st_4b73a0_0;

int GetWidth__5CBeam(st_4b73a0_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_144;
    return v0;
}

