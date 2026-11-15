// PM_PushEntity @0x192560 size=214
typedef struct st_592560_2 {
    char padding_0[324900];
    struct st_592560_1 *field_4f524;
} st_592560_2;

typedef struct st_592560_1 {
    unsigned int field_0;
} st_592560_1;

typedef struct st_592560_0 {
    char padding_0[56];
    float field_38;
    float field_3c;
    float field_40;
    char padding_44[24];
    char field_5c;
    char padding_5d[324899];
    struct st_592560_1 *field_4f580;
} st_592560_0;

extern st_592560_0 *pmove;

unsigned int * PM_PushEntity(void)
{
    float *v13;  // edx
    unsigned int *iter;  // edi
    unsigned int v15;  // ecx
    unsigned int *node;  // edi
    unsigned int *j;  // esi
    unsigned int v18;  // ecx
    char v0;  // [bp-0x100]
    st_592560_2 *v1;  // [bp-0xbc]
    unsigned int *i;  // [bp-0x98]
    float v3;  // [bp-0x84]
    float v4;  // [bp-0x80]
    float v5;  // [bp-0x7c]
    char v6;  // [bp-0x64]
    float v7;  // [bp-0x54]
    float v8;  // [bp-0x50]
    float v9;  // [bp-0x4c]
    float v10;  // [bp-0x48]
    unsigned int *v11;  // [bp+0x4]
    float *v12;  // [bp+0x8]

    v13 = v12;
    v3 = pmove->field_38 + *v13;
    v4 = pmove->field_3c + v13[1];
    v5 = pmove->field_40 + v13[2];
    i = &v6;
    pmove->field_4f580(i, &pmove->field_38, &v3, 0, 0xffffffff);
    pmove->field_38 = v8;
    pmove->field_3c = v9;
    pmove->field_40 = v10;
    if (1.0 > v7 && !v6)
    {
        v1 = &pmove->field_5c;
        iter = &v0;
        for (v15 = 0x11; v15; i += 1)
        {
            v15 -= 1;
            *iter = *i;
            iter += 1;
        }
        sub_48caf0();
    }
    node = v11;
    j = &v6;
    for (v18 = 0x11; v18; j += 1)
    {
        v18 -= 1;
        *node = *j;
        node += 1;
    }
    return v11;
}

