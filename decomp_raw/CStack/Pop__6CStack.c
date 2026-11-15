// Pop__6CStack @0xe3780 size=44
typedef struct st_4e3780_0 {
    unsigned int field_0;
    char padding_4[396];
    int field_190;
} st_4e3780_0;

unsigned int Pop__6CStack(st_4e3780_0 *a0)
{
    if (a0->field_190 <= 0)
        return 0xffffffff;
    a0->field_190 = a0->field_190 - 1;
    return (&a0->field_0)[a0->field_190];
}

