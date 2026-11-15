// PM_PlayWaterSounds @0x1932a0 size=331
typedef struct st_5932a0_0 {
    char padding_0[228];
    unsigned int field_e4;
    char padding_e8[4];
    unsigned int field_ec;
    char padding_f0[324760];
    struct st_5932a0_1 *field_4f588;
} st_5932a0_0;

typedef struct st_5932a0_1 {
    unsigned int field_0;
} st_5932a0_1;

extern st_5932a0_0 *pmove;
extern char _GLOBAL_OFFSET_TABLE_;

st_5932a0_0 * PM_PlayWaterSounds(void)
{
    st_5932a0_0 *v1;  // eax

    if (pmove->field_ec || !pmove->field_e4)
    {
        if (!pmove->field_ec)
        {
            return pmove;
        }
        else if (pmove->field_e4)
        {
            return pmove;
        }
    }
    v1 = pmove->field_4f588(0, 3);
    if (v1 > 0x3)
        return v1;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&_GLOBAL_OFFSET_TABLE_ + 0x4 * v1 - 526268)]));
}

