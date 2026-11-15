// TakeDamage__9CPushableP9entvars_sT1fi @0xc3be0 size=77
typedef struct st_4c3be0_0 {
    char padding_0[416];
    char field_1a0;
} st_4c3be0_0;

unsigned int TakeDamage__9CPushableP9entvars_sT1fi(st_4c3be0_0 **a0)
{
    int v0;  // [bp+0x8]
    int v1;  // [bp+0xc]
    int v2;  // [bp+0x10]
    int v3;  // [bp+0x14]

    return (*a0->field_1a0 < 0 ? CBreakable::TakeDamage(a0, v0, v1, v2, v3) : 1);
}

