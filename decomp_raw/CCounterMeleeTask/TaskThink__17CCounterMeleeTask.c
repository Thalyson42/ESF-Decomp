// TaskThink__17CCounterMeleeTask @0x14f590 size=440
typedef struct st_54f590_2 {
    char padding_0[4];
    unsigned int field_4;
    struct st_54f590_0 *field_8;
    struct st_54f590_1 *field_c;
} st_54f590_2;

typedef struct st_54f590_1 {
    char padding_0[512];
    char field_200;
} st_54f590_1;

typedef struct st_54f590_0 {
    char padding_0[892];
    unsigned int field_37c;
    char padding_380[256];
    unsigned int field_480;
    char padding_484[24];
    char *field_49c;
} st_54f590_0;

extern char _GLOBAL_OFFSET_TABLE_;

st_54f590_0 * TaskThink__17CCounterMeleeTask(st_54f590_2 *a0)
{
    st_54f590_0 *v0;  // eax

    v0 = a0->field_8;
    if (v0->field_37c)
    {
        sub_48d0d0(a0->field_8);
        if (!a0->field_8->field_480)
            a0->field_c->field_200 = a0->field_c->field_200 | 1;
        v0 = a0->field_8->field_49c - 3;
        if (v0 <= 0x8)
            goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&_GLOBAL_OFFSET_TABLE_ + 0x4 * v0 - 804060)]));
    }
    a0->field_4 = 2;
    return v0;
}

