// PM_PreventMegaBunnyJumping @0x192a50 size=143
typedef struct st_592a50_0 {
    char padding_0[500];
    float field_1f4;
} st_592a50_0;

extern st_592a50_0 *pmove;

double PM_PreventMegaBunnyJumping(void)
{
    float v0;  // [bp-0x18]
    double v1;  // [bp-0x8]

    v0 = (float)(pmove->field_1f4 * 1.7000000476837158);
    if (0.0 >= v0)
        return 0.0;
    sub_48c330(&pmove->padding_0[92]);
    if ((isnan(v0) ? 0x44 : 0.0 == v0 ? 63 : 0.0 < v0 ? 0 : 0xff) < 64)
        return 0.0;
    v1 = (float)(v0 / 0.0 * 0.65);
    sub_48d230(&pmove->padding_0[92], v1, &pmove->padding_0[92]);
    return v1;
}

