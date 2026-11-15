// __register_frame_info @0x196884 size=71
typedef struct st_596884_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    struct st_596884_0 *field_14;
} st_596884_0;

typedef struct st_596884_1 {
    char padding_0[623183];
    struct st_596884_0 *field_9824f;
} st_596884_1;

typedef struct st_596884_2 {
    char padding_0[110592];
    struct st_596884_0 *field_1b000;
} st_596884_2;

st_596884_0 * __register_frame_info(unsigned int a0, st_596884_0 *a1)
{
    st_596884_1 *v2;  // ebx
    st_596884_2 *v3;  // ebx
    st_596884_0 *v4;  // eax
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_596880(v0, &v1);
    v3 = &v2->padding_0[512591];
    a1->field_8 = a0;
    v4 = v3->field_1b000;
    a1->field_4 = 0;
    a1->field_0 = 0;
    a1->field_c = 0;
    a1->field_10 = 0;
    a1->field_14 = v4;
    v3->field_1b000 = a1;
    return v4;
}

