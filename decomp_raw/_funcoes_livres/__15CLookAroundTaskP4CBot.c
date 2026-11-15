// __15CLookAroundTaskP4CBot @0x186af0 size=79
typedef struct st_586af0_0 {
    char padding_0[20];
    unsigned int field_14;
    char padding_18[48];
    unsigned short field_48;
    char padding_4a[2];
    unsigned int field_4c;
} st_586af0_0;

extern char __vt_15CLookAroundTask;

st_586af0_0 * __15CLookAroundTaskP4CBot(st_586af0_0 *a0, int a1)
{
    unsigned int v0;  // eax
    unsigned int i;  // eax

    sub_48ce80(a0, a1);
    a0->field_14 = &__vt_15CLookAroundTask;
    v0 = 3;
    do
    {
        i = v0;
        v0 = i - 1;
    } while (i >= 1);
    a0->field_48 = 0;
    a0->field_4c = 0;
    return a0;
}

