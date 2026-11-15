// RouteClear__12CBaseMonster @0xd46b0 size=68
typedef struct st_4d46b0_0 {
    char padding_0[532];
    unsigned int field_214;
    char padding_218[20];
    unsigned int field_22c;
    char padding_230[24];
    char field_248;
} st_4d46b0_0;

void RouteClear__12CBaseMonster(st_4d46b0_0 *a0)
{
    sub_489a80(a0);
    a0->field_214 = 0;
    a0->field_22c = 1;
    a0->field_248 = a0->field_248 & 223;
    return;
}

