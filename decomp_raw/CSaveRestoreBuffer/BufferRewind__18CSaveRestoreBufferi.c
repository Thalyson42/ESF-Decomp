// BufferRewind__18CSaveRestoreBufferi @0x1353e0 size=38
typedef struct st_5353e0_0 {
    char padding_0[4];
    unsigned int field_4;
    int field_8;
} st_5353e0_0;

unsigned int * BufferRewind__18CSaveRestoreBufferi(st_5353e0_0 **a0, int a1)
{
    st_5353e0_0 *v0;  // eax
    unsigned int *v1;  // eax

    if (!*a0)
        return v1;
    if (*a0->field_8 < a1)
        a1 = *a0->field_8;
    *a0->field_4 = *a0->field_4 - a1;
    v0 = *a0;
    v0->field_8 = v0->field_8 - a1;
    return v0;
}

