// ReactOnDanger__13CWallJumpTaskP13danger_info_s @0x178c90 size=70
typedef struct st_578c90_2 {
    char padding_0[996];
    unsigned int field_3e4;
    char padding_3e8[736];
    unsigned int field_6c8;
    char padding_6cc[848];
    unsigned int field_a1c;
} st_578c90_2;

typedef struct st_578c90_0 {
    char padding_0[24];
    short field_18;
} st_578c90_0;

typedef struct st_578c90_1 {
    char padding_0[8];
    struct st_578c90_2 *field_8;
} st_578c90_1;

char ReactOnDanger__13CWallJumpTaskP13danger_info_s(st_578c90_1 *a0, st_578c90_0 *a1)
{
    unsigned int *v0;  // edx
    char v1;  // al

    if (a1->field_18 > 159 && !(v0 = a0->field_8, v0[647] == 3 || v0[647] == 5))
    {
        v1 = 0;
        if (!v0[434])
            v1 = v0[249] != 3;
    }
    else
    {
        v1 = 0;
    }
    return v1;
}

