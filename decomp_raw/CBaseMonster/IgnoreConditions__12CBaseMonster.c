// IgnoreConditions__12CBaseMonster @0xd4640 size=100
typedef struct st_4d4640_1 {
    unsigned int field_0;
} st_4d4640_1;

typedef struct st_4d4640_0 {
    char padding_0[420];
    struct st_4d4640_1 *field_1a4;
} st_4d4640_0;

typedef struct st_4d4640_3 {
    char padding_0[384];
    unsigned int field_180;
    char padding_184[288];
    struct st_4d4640_2 *field_2a4;
} st_4d4640_3;

typedef struct st_4d4640_2 {
    char padding_0[96];
    struct st_4d4640_0 *field_60;
} st_4d4640_2;

unsigned int IgnoreConditions__12CBaseMonster(st_4d4640_3 *a0)
{
    unsigned int v0;  // edi

    v0 = 0;
    if (!sub_48cea0(a0))
        v0 = 64;
    if (a0->field_180 != 6)
    {
        return v0;
    }
    else if (a0->field_2a4)
    {
        return v0 | a0->field_2a4->field_60->field_1a4(a0->field_2a4);
    }
    else
    {
        return v0;
    }
}

