// eh_context_static @0x194ab0 size=87
typedef struct st_594ab0_0 {
    char padding_0[520227];
    char field_7f023;
    char padding_7f024[110563];
    unsigned int field_9a007;
    unsigned int field_9a00b;
    unsigned int field_9a00f;
    unsigned int field_9a013;
    unsigned int field_9a017;
} st_594ab0_0;

typedef struct st_594ab0_1 {
    char padding_0[110564];
    unsigned int field_1afe4;
} st_594ab0_1;

unsigned int * eh_context_static(void)
{
    st_594ab0_0 *v3;  // ebx
    st_594ab0_1 *v4;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_594aac(v0, &v1);
    v4 = &v3->field_7f023;
    if (!*(int *)&v4[1].padding_0[12])
    {
        *(unsigned int *)&v4[1].padding_0[12] = 1;
        v4->field_1afe4 = 0;
        *(unsigned int *)&v4[1].padding_0[4] = 0;
        *(unsigned int *)&v4[1].padding_0[8] = 0;
        *(st_594ab0_1 **)&v4[1].padding_0[0] = &v4[1].padding_0[16];
    }
    return &v4->field_1afe4;
}

