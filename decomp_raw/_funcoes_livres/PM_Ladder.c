// PM_Ladder @0x192320 size=246
typedef struct st_592320_2 {
    char padding_0[8];
    unsigned int field_8;
} st_592320_2;

typedef struct st_592320_1 {
    unsigned int field_0;
} st_592320_1;

typedef struct st_592320_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[134924];
    int field_20f50;
    char padding_20f54[189992];
    struct st_592320_1 *field_4f57c;
    char padding_4f580[16];
    struct st_592320_1 *field_4f590;
    char padding_4f594[4];
    struct st_592320_1 *field_4f598;
} st_592320_0;

extern st_592320_0 *pmove;

unsigned int * PM_Ladder(void)
{
    unsigned int *v7;  // edi
    st_592320_2 *v8;  // ecx
    char *v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    char v2;  // [bp-0x24]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v1 = 0;
    if (v1 >= pmove->field_20f50)
        return NULL;
    v0 = &v2;
    do
    {
        v7 = &(pmove->padding_0)[4 * v1 + 134996];
        if (v7[12] && !pmove->field_4f590(v7[12]) && v7[25] == 0xfffffff0)
        {
            v8 = pmove->field_4f598(v7, v0);
            v3 = pmove->field_38 - v3;
            v4 = pmove->field_3c - v4;
            v5 = pmove->field_40 - v5;
            if (pmove->field_4f57c(v8, v8->field_8, v0) != 0xffffffff)
                return v7;
        }
    } while ((v1 += 1, v1 < pmove->field_20f50));
    return NULL;
}

