// _._4CLog @0x16cce0 size=84
typedef struct st_56cce0_0 {
    char padding_0[1];
    char field_1;
    char padding_2[2];
    int field_4;
    unsigned int field_8;
} st_56cce0_0;

extern char __vt_4CLog;

unsigned int _._4CLog(st_56cce0_0 *a0, unsigned int a1)
{
    unsigned int v0;  // eax

    a0->field_8 = &__vt_4CLog;
    if (a0->field_1 && a0->field_4)
        sub_48c560(a0->field_4);
    v0 = a1;
    if ((char)v0 & 1)
        v0 = sub_48d4e0(a0);
    return v0;
}

