// IsEmpty__9CSoundEnt @0x11f400 size=22
typedef struct st_51f400_0 {
    char padding_0[104];
    unsigned int field_68;
} st_51f400_0;

int IsEmpty__9CSoundEnt(st_51f400_0 *a0)
{
    return a0->field_68 == 0xffffffff;
}

