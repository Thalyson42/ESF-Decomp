// EntityFlagsSet__18CSaveRestoreBufferii @0x1353a0 size=60
typedef struct st_5353a0_0 {
    char padding_0[32];
    int field_20;
    char padding_24[4];
    unsigned int field_28;
} st_5353a0_0;

unsigned int EntityFlagsSet__18CSaveRestoreBufferii(st_5353a0_0 **a0, int a1, unsigned int a2)
{
    if (*a0 && a1 >= NULL && a1 <= *a0->field_20)
    {
        *(unsigned int *)(*a0->field_28 + a1 * 24 + 16) = *(int *)(*a0->field_28 + a1 * 24 + 16) | a2;
        return *(int *)(*a0->field_28 + a1 * 24 + 16);
    }
    return 0;
}

