// Recover__12CPlayerMelee @0x102180 size=204
typedef struct st_502180_1 {
    char padding_0[8];
    float field_8;
    char padding_c[4];
    unsigned int field_10;
    char padding_14[32];
    unsigned int field_34;
    char padding_38[44];
    unsigned int field_64;
    char padding_68[72];
    unsigned int field_b0;
    char padding_b4[112];
    struct st_502180_2 *field_124;
} st_502180_1;

typedef struct st_502180_2 {
    struct st_502180_0 *field_0;
} st_502180_2;

typedef struct st_502180_0 {
    char padding_0[520];
    int field_208;
} st_502180_0;

typedef struct st_502180_3 {
    float field_0;
} st_502180_3;

extern st_502180_3 *gpGlobals;

unsigned int Recover__12CPlayerMelee(st_502180_1 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_64 == 1)
    {
        a0->field_34 = 1;
        a0->field_8 = (float)(0.5 * a0->field_8);
        *(float *)&a0->field_10 = *(float *)&a0->field_10 + *(float *)&a0->field_10;
        *(float *)&a0->field_b0 = *(float *)gpGlobals;
        v0 = sub_489390(*(int *)(*(int *)a0->field_124 + 520), 1, "weapons/airrecover.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    else
    {
        a0->field_34 = 0;
        v0 = sub_489390(*(int *)(*(int *)a0->field_124 + 520), 1, "weapons/groundrecover.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    a0->field_64 = 6;
    return v0;
}

