// AddToNullKeyset__6CSwoopi @0x124550 size=16
typedef struct st_524550_0 {
    char padding_0[12];
    unsigned int field_c;
} st_524550_0;

st_524550_0 * AddToNullKeyset__6CSwoopi(st_524550_0 *a0, unsigned int a1)
{
    a0->field_c = a0->field_c | a1;
    return a0;
}

