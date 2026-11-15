// StopBlock__11CBasePlayer @0xf2820 size=123
typedef struct st_4f2820_1 {
    struct st_4f2820_0 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[8];
    unsigned int field_32c;
    char padding_330[40];
    unsigned int field_358;
    char padding_35c[980];
    unsigned int field_730;
    char padding_734[32];
    unsigned int field_754;
    char padding_758[40];
    unsigned int field_780;
    unsigned int field_784;
} st_4f2820_1;

typedef struct st_4f2820_0 {
    char padding_0[264];
    unsigned int field_108;
} st_4f2820_0;

st_4f2820_0 * StopBlock__11CBasePlayer(st_4f2820_1 *a0)
{
    st_4f2820_0 *v0;  // eax
    st_4f2820_0 *v1;  // eax

    if (!a0->field_32c)
        return v1;
    if (a0->field_358)
    {
        a0->field_780 = 0;
        a0->field_358 = 0;
        if (a0->field_320)
        {
            v0 = a0->field_0;
            v0->field_108 = 14;
        }
        else
        {
            v0 = a0->field_0;
            v0->field_108 = 3;
        }
    }
    a0->field_784 = 0;
    a0->field_754 = 0x3f800000;
    a0->field_730 = 0;
    a0->field_32c = 0;
    return v0;
}

