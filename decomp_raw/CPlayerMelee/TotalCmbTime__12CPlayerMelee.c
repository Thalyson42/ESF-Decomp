// TotalCmbTime__12CPlayerMelee @0x106280 size=87
typedef struct st_506280_0 {
    char padding_0[28];
    struct st_506280_0 *field_1c;
} st_506280_0;

float TotalCmbTime__12CPlayerMelee(float a0)
{
    st_506280_0 *iter;  // eax
    double v3;  // mm7
    float v0;  // [bp-0x8]

    v0 = 0;
    for (iter = CPlayerMelee::GetCurrentDirection(a0); iter; iter = iter->field_1c)
    {
        CPlayerMelee::GetCmbTime(a0, iter);
        v0 = (float)(v3 + v0);
    }
    return v0;
}

