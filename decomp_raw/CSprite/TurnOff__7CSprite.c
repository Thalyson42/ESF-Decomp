// TurnOff__7CSprite @0xb3cb0 size=34
typedef struct st_4b3cb0_0 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[16];
    unsigned int field_118;
} st_4b3cb0_0;

unsigned int * TurnOff__7CSprite(st_4b3cb0_0 **a0)
{
    unsigned int *v0;  // eax

    *a0->field_118 = 128;
    v0 = *a0;
    v0[65] = 0;
    return v0;
}

