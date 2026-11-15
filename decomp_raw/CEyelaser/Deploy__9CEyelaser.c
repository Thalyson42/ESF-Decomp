// Deploy__9CEyelaser @0xbc730 size=151
typedef struct st_4bc730_1 {
    char padding_0[196];
    struct st_4bc730_2 *field_c4;
    struct st_4bc730_2 *field_c8;
    char padding_cc[4];
    unsigned int field_d0;
} st_4bc730_1;

typedef struct st_4bc730_0 {
    char padding_0[296];
    unsigned int field_128;
} st_4bc730_0;

typedef struct st_4bc730_2 {
    struct st_4bc730_0 *field_0;
} st_4bc730_2;

int Deploy__9CEyelaser(st_4bc730_1 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    a0->field_c4 = sub_48aa60(a0, 2);
    a0->field_c8 = sub_48aa60(a0, 3);
    v0 = _INSERT(*(int *)(*(int *)a0->field_c4 + 296) & 0xfff, 1, (char)((*(int *)(*(int *)a0->field_c4 + 296) & 0xfff) >> 8) | 48);
    *(unsigned int *)(*(int *)a0->field_c4 + 296) = v0;
    v1 = _INSERT(*(int *)(*(int *)a0->field_c8 + 296) & 0xfff, 1, (char)((*(int *)(*(int *)a0->field_c8 + 296) & 0xfff) >> 8) | 32);
    *(unsigned int *)(*(int *)a0->field_c8 + 296) = v1;
    a0->field_d0 = 0;
    return sub_489360(a0, "eyelaser");
}

