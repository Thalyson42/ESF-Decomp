// Get__7EHANDLE @0x9cd30 size=38
typedef struct st_49cd30_0 {
    char padding_0[4];
    unsigned int field_4;
} st_49cd30_0;

typedef struct st_49cd30_1 {
    struct st_49cd30_0 *field_0;
    unsigned int field_4;
} st_49cd30_1;

st_49cd30_0 * Get__7EHANDLE(st_49cd30_1 *a0)
{
    if (a0->field_0 && a0->field_0->field_4 == a0->field_4)
        return a0->field_0;
    return NULL;
}

