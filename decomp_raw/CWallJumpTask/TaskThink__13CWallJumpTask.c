// TaskThink__13CWallJumpTask @0x1844f0 size=96
typedef struct st_5844f0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5844f0_0 *field_8;
    struct st_5844f0_0 *field_c;
} st_5844f0_1;

typedef struct st_5844f0_0 {
    char padding_0[512];
    char field_200;
    char padding_201[379];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
    char padding_3e8[736];
    unsigned int field_6c8;
} st_5844f0_0;

st_5844f0_0 * TaskThink__13CWallJumpTask(st_5844f0_1 *a0)
{
    st_5844f0_0 *v0;  // eax
    st_5844f0_0 *v1;  // eax

    v0 = a0->field_8;
    if (!v0->field_6c8 && (!v0->field_37c || v0->field_3e4 != 3))
    {
        a0->field_4 = 2;
        return v0;
    }
    sub_48d0d0(a0->field_8);
    v1 = a0->field_c;
    v1->field_200 = v1->field_200 | 2;
    return v1;
}

