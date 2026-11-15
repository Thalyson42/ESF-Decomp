// FreeShot__12CScatterShotP18CScatterShotAttack @0x111320 size=65
typedef struct st_511320_1 {
    unsigned int field_0;
} st_511320_1;

typedef struct st_511320_0 {
    char padding_0[508];
    struct st_511320_1 *field_1fc;
} st_511320_0;

typedef struct st_511320_2 {
    char padding_0[96];
    struct st_511320_0 *field_60;
    char padding_64[608];
    unsigned int field_2c4;
    unsigned int field_2c8;
} st_511320_2;

int FreeShot__12CScatterShotP18CScatterShotAttack(unsigned int a0, st_511320_2 *a1)
{
    unsigned int v0;  // eax

    if (!a1->field_2c4)
    {
        a1->field_2c8 = 1;
        return v0;
    }
    return a1->field_60->field_1fc(a1);
}

