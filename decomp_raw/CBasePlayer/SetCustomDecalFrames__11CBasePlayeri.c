// SetCustomDecalFrames__11CBasePlayeri @0xfdd10 size=46
typedef struct st_4fdd10_0 {
    char padding_0[2452];
    unsigned int field_994;
} st_4fdd10_0;

unsigned int SetCustomDecalFrames__11CBasePlayeri(st_4fdd10_0 *a0, unsigned int a1)
{
    if (a1 - 1 <= 6)
        a0->field_994 = a1;
    else
        a0->field_994 = 0xffffffff;
    return a1 - 1;
}

