// __11CBaseOutput @0x16d360 size=46
typedef struct st_56d360_0 {
    char field_0;
    char padding_1[511];
    unsigned int field_200;
} st_56d360_0;

extern char __vt_11CBaseOutput;

char __11CBaseOutput(st_56d360_0 *a0)
{
    a0->field_200 = &__vt_11CBaseOutput;
    a0->field_0 = 0;
    return (char)a0;
}

