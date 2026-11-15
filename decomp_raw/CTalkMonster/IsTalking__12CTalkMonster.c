// IsTalking__12CTalkMonster @0x126fa0 size=58
typedef struct st_526fa0_0 {
    char padding_0[780];
    float field_30c;
} st_526fa0_0;

typedef struct st_526fa0_1 {
    unsigned int field_0;
} st_526fa0_1;

extern st_526fa0_1 *gpGlobals;

int IsTalking__12CTalkMonster(st_526fa0_0 *a0)
{
    return a0->field_30c > *(float *)gpGlobals;
}

