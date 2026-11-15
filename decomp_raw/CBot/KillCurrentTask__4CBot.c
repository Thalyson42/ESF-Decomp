// KillCurrentTask__4CBot @0x1816d0 size=107
typedef struct st_5816d0_2 {
    char padding_0[20];
    struct st_5816d0_0 *field_14;
} st_5816d0_2;

typedef struct st_5816d0_0 {
    char padding_0[8];
    struct st_5816d0_1 *field_8;
    char padding_c[20];
    struct st_5816d0_1 *field_20;
} st_5816d0_0;

typedef struct st_5816d0_1 {
    unsigned int field_0;
} st_5816d0_1;

typedef struct st_5816d0_3 {
    char padding_0[4196];
    struct st_5816d0_2 *field_1064;
    char padding_1068[4];
    unsigned int field_106c;
} st_5816d0_3;

unsigned int KillCurrentTask__4CBot(st_5816d0_3 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a0->field_1064)
        return v1;
    v0 = a0->field_1064->field_14->field_20(a0->field_1064);
    a0->field_106c = v0;
    if (a0->field_1064)
        v0 = a0->field_1064->field_14->field_8(a0->field_1064, 3);
    a0->field_1064 = NULL;
    return v0;
}

