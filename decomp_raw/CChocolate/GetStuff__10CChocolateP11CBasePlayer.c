// GetStuff__10CChocolateP11CBasePlayer @0x99f00 size=99
typedef struct st_499f00_0 {
    char padding_0[352];
    float field_160;
} st_499f00_0;

typedef struct st_499f00_1 {
    struct st_499f00_0 *field_0;
    char padding_4[584];
    int field_24c;
} st_499f00_1;

int GetStuff__10CChocolateP11CBasePlayer(unsigned int a0, st_499f00_1 *a1)
{
    a1->field_0->field_160 = (float)(a1->field_0->field_160 + 40.0);
    if ((double)a1->field_24c < a1->field_0->field_160)
        a1->field_0->field_160 = (float)a1->field_24c;
    return CBasePlayer::IncreasePL(a1, 50000);
}

