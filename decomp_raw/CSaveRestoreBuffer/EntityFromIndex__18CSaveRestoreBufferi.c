// EntityFromIndex__18CSaveRestoreBufferi @0x135350 size=80
typedef struct st_535350_0 {
    char padding_0[32];
    int field_20;
    char padding_24[4];
    unsigned int field_28;
} st_535350_0;

typedef struct st_535350_1 {
    int field_0;
    unsigned int field_4;
} st_535350_1;

unsigned int EntityFromIndex__18CSaveRestoreBufferi(st_535350_0 **a0, int a1)
{
    int v0;  // esi
    st_535350_0 *v1;  // eax
    st_535350_1 *v2;  // eax

    if (*a0 && a1 >= NULL)
    {
        v0 = 0;
        v1 = *a0;
        if (NULL < *a0->field_20)
        {
            do
            {
                v2 = v1->field_28 + v0 * 24;
                if (v2->field_0 == a1)
                    return v2->field_4;
            } while ((v0 += 1, v1 = *a0, v0 < *a0->field_20));
        }
    }
    return 0;
}

