// ClearConditions__12CBaseMonsteri @0xda970 size=21
typedef struct st_4da970_0 {
    char padding_0[260];
    unsigned int field_104;
} st_4da970_0;

int ClearConditions__12CBaseMonsteri(st_4da970_0 *a0, unsigned int a1)
{
    a0->field_104 = a0->field_104 & ~a1;
    return ~a1;
}

