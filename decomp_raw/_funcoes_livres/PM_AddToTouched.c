// PM_AddToTouched @0x18ed90 size=229
typedef struct st_58ed90_1 {
    unsigned int field_0;
} st_58ed90_1;

typedef struct st_58ed90_0 {
    char padding_0[283788];
    int field_4548c;
    char padding_45490[48];
    unsigned int field_454c0;
    char padding_454c4[41120];
    struct st_58ed90_1 *field_4f564;
} st_58ed90_0;

extern st_58ed90_0 *pmove;

unsigned int PM_AddToTouched(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, float *a17)
{
    int v3;  // ecx
    unsigned int *iter;  // edi
    unsigned int *i;  // esi
    unsigned int v6;  // ecx
    float v0;  // [bp+0x38]
    float v1;  // [bp+0x3c]
    float v2;  // [bp+0x40]

    v3 = 0;
    if (0 < pmove->field_4548c && pmove->field_454c0 != a12)
    {
        do
        {
            v3 += 1;
        } while (v3 < pmove->field_4548c && (&pmove->field_454c0)[0x11 * v3] != a12);
    }
    if (v3 != pmove->field_4548c)
        return 0;
    v0 = *a17;
    v1 = a17[1];
    v2 = a17[2];
    if (pmove->field_4548c > 599)
        pmove->field_4f564("Too many entities were touched!\n");
    iter = &pmove->padding_0[0x44 * pmove->field_4548c + 283792];
    i = &a0;
    for (v6 = 0x11; v6; i += 1)
    {
        v6 -= 1;
        *iter = *i;
        iter += 1;
    }
    pmove->field_4548c = pmove->field_4548c + 1;
    return 1;
}

