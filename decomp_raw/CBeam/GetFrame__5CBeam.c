// GetFrame__5CBeam @0xb7440 size=49
typedef struct st_4b7440_0 {
    char padding_0[304];
    float field_130;
} st_4b7440_0;

int GetFrame__5CBeam(st_4b7440_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_130;
    return v0;
}

