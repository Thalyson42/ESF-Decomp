// FBecomeProne__12CBaseMonster @0xd4fc0 size=46
typedef struct st_4d4fc0_1 {
    struct st_4d4fc0_0 *field_0;
    char padding_4[384];
    unsigned int field_184;
} st_4d4fc0_1;

typedef struct st_4d4fc0_0 {
    char padding_0[420];
    char field_1a4[4];
    char field_1a5;
} st_4d4fc0_0;

unsigned int FBecomeProne__12CBaseMonster(st_4d4fc0_1 *a0)
{
    st_4d4fc0_0 *v0;  // eax

    v0 = a0->field_0;
    if (v0->field_1a4[1] & 2)
        v0->field_1a4 = v0->field_1a4 - 0x200;
    a0->field_184 = 5;
    return 1;
}

