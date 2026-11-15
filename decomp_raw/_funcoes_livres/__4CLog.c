// __4CLog @0x16cca0 size=49
typedef struct st_56cca0_0 {
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
} st_56cca0_0;

extern char __vt_4CLog;

st_56cca0_0 * __4CLog(st_56cca0_0 *a0)
{
    a0->field_8 = &__vt_4CLog;
    a0->field_0 = 0;
    a0->field_1 = 0;
    a0->field_4 = 0;
    return a0;
}

