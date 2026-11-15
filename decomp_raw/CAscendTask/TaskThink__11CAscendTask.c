// TaskThink__11CAscendTask @0x183ea0 size=67
typedef struct st_583ea0_0 {
    char padding_0[1904];
    unsigned int field_770;
} st_583ea0_0;

typedef struct st_583ea0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_583ea0_0 *field_8;
} st_583ea0_1;

st_583ea0_0 * TaskThink__11CAscendTask(st_583ea0_1 *a0)
{
    st_583ea0_0 *v0;  // eax

    v0 = a0->field_8;
    if (v0->field_770)
        return sub_48d0d0(a0->field_8);
    a0->field_4 = 2;
    return v0;
}

