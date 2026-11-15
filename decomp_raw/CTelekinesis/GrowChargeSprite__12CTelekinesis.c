// GrowChargeSprite__12CTelekinesis @0x129fa0 size=264
typedef struct st_529fa0_1 {
    int field_0;
} st_529fa0_1;

typedef struct st_529fa0_0 {
    char padding_0[128];
    struct st_529fa0_1 *field_80;
    char padding_84[64];
    unsigned int field_c4;
    int field_c8;
    char padding_cc[288];
    int field_1ec;
    unsigned int field_1f0;
    unsigned int field_1f4;
    unsigned int field_1f8;
    unsigned int field_1fc;
    char padding_200[4];
    char field_204;
} st_529fa0_0;

int GrowChargeSprite__12CTelekinesis(st_529fa0_0 *a0)
{
    unsigned int v4;  // edi
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    if (!a0->field_204)
        return v6;
    v4 = a0->field_c4 - a0->field_c8 / 3;
    v0 = a0->field_c8 * 2 / 3;
    if ((int)(v4 * 6 / v0) < a0->field_1ec)
    {
        return v4 * 6 / v0;
    }
    else if (a0->field_1ec <= 5)
    {
        while (1)
        {
            *(float *)&v1 = *(float *)&a0->field_1f0;
            *(float *)&v2 = *(float *)&a0->field_1f4;
            *(float *)&v3 = *(float *)&a0->field_1f8;
            v5 = CRock::CreateRock(&v1, *(int *)a0->field_80, (float)((double)a0->field_1ec / 6.0), *(float *)&a0->field_1fc);
            *(unsigned int *)&a0->padding_cc[264 + 4 * a0->field_1ec] = v5;
            a0->field_1ec = a0->field_1ec + 1;
            if ((int)(v4 * 6 / v0) < a0->field_1ec)
            {
                return v4 * 6 / v0;
            }
            else if (a0->field_1ec > 5)
            {
                return v4 * 6 / v0;
            }
        }
    }
    else
    {
        return v4 * 6 / v0;
    }
}

