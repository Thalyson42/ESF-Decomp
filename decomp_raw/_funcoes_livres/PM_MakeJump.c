// PM_MakeJump @0x192ae0 size=157
typedef struct st_592ae0_0 {
    char padding_0[92];
    float field_5c;
    float field_60;
    char padding_64[124];
    unsigned int field_e0;
} st_592ae0_0;

extern st_592ae0_0 *pmove;

int PM_MakeJump(double a0)
{
    int idx;  // ecx
    char v0;  // [bp-0x24]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]

    pmove->field_e0 = 0xffffffff;
    idx = 0;
    do
    {
        (&v1)[idx] = (&pmove->field_5c)[idx];
        idx += 1;
    } while (idx <= 2);
    VectorNormalize(&v0);
    pmove->field_5c = (float)(pmove->field_5c + 0.0 * v1);
    pmove->field_60 = (float)(pmove->field_60 + 0.0 * v2);
    *(float *)&pmove->padding_64[0] = 1000.0f;
    return PM_FixupGravityVelocity(&v0);
}

