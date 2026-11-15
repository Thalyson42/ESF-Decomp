// Update__13CVoiceGameMgrd @0x18bff0 size=63
typedef struct st_58bff0_0 {
    char padding_0[16];
    double field_10;
} st_58bff0_0;

char Update__13CVoiceGameMgrd(st_58bff0_0 *a0, double a1)
{
    double v0;  // mm7

    v0 = a1 + a0->field_10;
    a0->field_10 = v0;
    return sub_48cf20(a0);
}

