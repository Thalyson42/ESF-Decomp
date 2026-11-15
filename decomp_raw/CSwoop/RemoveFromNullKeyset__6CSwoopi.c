// RemoveFromNullKeyset__6CSwoopi @0x124560 size=18
typedef struct st_524560_0 {
    char padding_0[12];
    unsigned int field_c;
} st_524560_0;

int RemoveFromNullKeyset__6CSwoopi(st_524560_0 *a0, unsigned int a1)
{
    a0->field_c = a0->field_c & ~a1;
    return ~a1;
}

