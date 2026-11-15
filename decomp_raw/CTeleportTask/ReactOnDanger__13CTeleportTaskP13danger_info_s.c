// ReactOnDanger__13CTeleportTaskP13danger_info_s @0x178a40 size=115
typedef struct st_578a40_0 {
    char padding_0[24];
    short field_18;
} st_578a40_0;

typedef struct st_578a40_1 {
    char padding_0[2824];
    float field_b08;
} st_578a40_1;

typedef struct st_578a40_2 {
    char padding_0[8];
    struct st_578a40_1 *field_8;
} st_578a40_2;

typedef struct st_578a40_3 {
    float field_0;
} st_578a40_3;

extern st_578a40_3 *gpGlobals;

char ReactOnDanger__13CTeleportTaskP13danger_info_s(st_578a40_2 *a0, st_578a40_0 *a1)
{
    if (a1->field_18 > 159)
    {
        a0->field_8->field_b08 = 0;
        return 0;
    }
    else if (a1->field_18 <= 99)
    {
        return 0;
    }
    else if (0.1 < a0->field_8->field_b08 - *(float *)gpGlobals)
    {
        a0->field_8->field_b08 = (float)(0.1 + *(float *)gpGlobals);
        return 0;
    }
    else
    {
        return 0;
    }
}

