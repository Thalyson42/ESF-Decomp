// GetScrollRate__5CBeam @0xb7480 size=49
typedef struct st_4b7480_0 {
    char padding_0[308];
    float field_134;
} st_4b7480_0;

int GetScrollRate__5CBeam(st_4b7480_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_134;
    return v0;
}

