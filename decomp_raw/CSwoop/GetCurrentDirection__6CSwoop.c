// GetCurrentDirection__6CSwoop @0x124390 size=245
typedef struct st_524390_1 {
    unsigned int field_0;
} st_524390_1;

typedef struct st_524390_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[112];
    struct st_524390_1 *field_78;
} st_524390_0;

typedef struct st_524390_2 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_524390_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_524390_2 *gpGlobals;

unsigned int * GetCurrentDirection__6CSwoop(void)
{
    unsigned int *v2;  // edx
    unsigned int *idx;  // [bp+0x4]
    st_524390_0 *v1;  // [bp+0x8]

    sub_48a800(*(int *)v1->field_78 + 116);
    if (v1->field_4 && v1->field_0 <= 5)
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v1->field_0] - 980732)]));
    v2 = &gpGlobals->field_28;
    *(float *)idx = gpGlobals->field_28;
    *(float *)&idx[1] = *(float *)&v2[1];
    *(float *)&idx[2] = *(float *)&v2[2];
    return idx;
}

