// _._11CBaseOutput @0x16d390 size=56
typedef struct st_56d390_0 {
    char padding_0[512];
    unsigned int field_200;
} st_56d390_0;

extern unsigned int __vt_11CBaseOutput;

unsigned int _._11CBaseOutput(st_56d390_0 *a0, char a1)
{
    unsigned int v0;  // eax

    v0 = &__vt_11CBaseOutput;
    a0->field_200 = &__vt_11CBaseOutput;
    if (a1 & 1)
        v0 = sub_48d4e0(a0);
    return v0;
}

