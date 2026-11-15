// RemoveOnFire__15CGamePlayerHurt @0xd1220 size=25
typedef struct st_4d1220_0 {
    char padding_0[416];
    char field_1a0;
} st_4d1220_0;

int RemoveOnFire__15CGamePlayerHurt(st_4d1220_0 **a0)
{
    return *a0->field_1a0 & 1;
}

