// GetKi__4CBot @0x1439f0 size=49
typedef struct st_5439f0_0 {
    char padding_0[608];
    float field_260;
} st_5439f0_0;

int GetKi__4CBot(st_5439f0_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_260;
    return v0;
}

