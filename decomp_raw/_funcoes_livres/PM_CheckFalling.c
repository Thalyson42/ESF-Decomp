// PM_CheckFalling @0x1930d0 size=453
typedef struct st_5930d0_0 {
    char padding_0[148];
    unsigned int field_94;
    char padding_98[4];
    unsigned int field_9c;
    char padding_a0[48];
    unsigned int field_d0;
    char padding_d4[12];
    unsigned int field_e0;
    unsigned int field_e4;
    char padding_e8[264];
    char field_1f0;
    char padding_1f1[324451];
    struct st_5930d0_1 *field_4f554;
    char padding_4f558[92];
    struct st_5930d0_1 *field_4f5b4;
} st_5930d0_0;

typedef struct st_5930d0_1 {
    unsigned int field_0;
} st_5930d0_1;

extern st_5930d0_0 *pmove;

st_5930d0_0 * PM_CheckFalling(void)
{
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x18]

    if (pmove->field_e0 != 0xffffffff && !pmove->field_d0 && *(float *)&pmove->field_9c >= 350.0f)
    {
        v1 = 0.5f;
        if ((int)pmove->field_e4 <= 0)
        {
            if (*(float *)&pmove->field_9c > 580.0f)
            {
                pmove->field_4f5b4(6, "weapons/groundhit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
                v1 = 1.0;
            }
            else if (290.0f < *(float *)&pmove->field_9c)
            {
                if (sub_48b500(pmove->field_4f554(&pmove->padding_1f1[0x4f1ff], "tfc"), 0, 10, 0) == 1)
                    pmove->field_4f5b4(2, "weapons/groundhit.wav", 0x3f800000, 0.800000011920929f, 0, 100);
                v1 = 0.8500000238418579f;
            }
            else if (200.0f > *(float *)&pmove->field_9c)
            {
                v1 = 0;
            }
        }
        if (0.0 < v1)
        {
            pmove->field_94 = 0;
            sub_487ee0();
            v0 = v1;
            sub_488060(sub_48d100(pmove->field_1f0));
        }
    }
    if (pmove->field_e0 != 0xffffffff)
        pmove->field_9c = 0;
    return pmove;
}

