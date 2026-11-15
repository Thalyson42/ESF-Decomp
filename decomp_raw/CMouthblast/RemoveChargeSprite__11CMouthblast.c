// RemoveChargeSprite__11CMouthblast @0xdb5a0 size=44
typedef struct st_4db5a0_0 {
    char padding_0[524];
    int field_20c;
} st_4db5a0_0;

int RemoveChargeSprite__11CMouthblast(st_4db5a0_0 *a0)
{
    return UTIL_Remove(a0->field_20c);
}

