// GetBrightness__5CBeam @0xb7400 size=49
typedef struct st_4b7400_0 {
    char padding_0[332];
    float field_14c;
} st_4b7400_0;

int GetBrightness__5CBeam(st_4b7400_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_14c;
    return v0;
}

