// RemoveOnFire__12CGameCounter @0xd1240 size=25
typedef struct st_4d1240_0 {
    char padding_0[416];
    char field_1a0;
} st_4d1240_0;

int RemoveOnFire__12CGameCounter(st_4d1240_0 **a0)
{
    return *a0->field_1a0 & 1;
}

