// UseOnly__16CGamePlayerEquip @0xd1420 size=25
typedef struct st_4d1420_0 {
    char padding_0[416];
    char field_1a0;
} st_4d1420_0;

int UseOnly__16CGamePlayerEquip(st_4d1420_0 **a0)
{
    return *a0->field_1a0 & 1;
}

