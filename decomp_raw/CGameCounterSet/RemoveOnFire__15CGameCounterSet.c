// RemoveOnFire__15CGameCounterSet @0xd1400 size=25
typedef struct st_4d1400_0 {
    char padding_0[416];
    char field_1a0;
} st_4d1400_0;

int RemoveOnFire__15CGameCounterSet(st_4d1400_0 **a0)
{
    return *a0->field_1a0 & 1;
}

