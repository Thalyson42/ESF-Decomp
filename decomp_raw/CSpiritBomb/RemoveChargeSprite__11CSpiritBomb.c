// RemoveChargeSprite__11CSpiritBomb @0x121cf0 size=44
typedef struct st_521cf0_0 {
    char padding_0[212];
    int field_d4;
} st_521cf0_0;

int RemoveChargeSprite__11CSpiritBomb(st_521cf0_0 *a0)
{
    return UTIL_Remove(a0->field_d4);
}

