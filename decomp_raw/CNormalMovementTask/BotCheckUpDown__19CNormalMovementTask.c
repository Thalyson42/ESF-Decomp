// BotCheckUpDown__19CNormalMovementTask @0x1723c0 size=344
typedef struct st_5723c0_1 {
    char padding_0[8];
    struct st_5723c0_0 *field_8;
    int field_c;
} st_5723c0_1;

typedef struct st_5723c0_0 {
    char padding_0[800];
    unsigned int field_320;
    char padding_324[3280];
    float field_ff4;
} st_5723c0_0;

typedef struct st_5723c0_2 {
    float field_0;
} st_5723c0_2;

typedef struct st_5723c0_3 {
    unsigned int field_0;
} st_5723c0_3;

extern st_5723c0_3 *g_616928;
extern st_5723c0_3 *g_61692c;
extern st_5723c0_2 *gpGlobals;

double BotCheckUpDown__19CNormalMovementTask(st_5723c0_1 *a0)
{
    double v3;  // mm7
    char v4;  // al
    unsigned int v6;  // eax
    float v0;  // [bp-0x3c]
    float v1;  // [bp-0x38]
    char v2;  // [bp-0x15]

    if (!a0->field_8->field_320)
    {
        *(float *)&a0->field_8->padding_324[2284] = 40.0f;
        return 40.0;
    }
    v3 = 3.0 + *(float *)gpGlobals;
    a0->field_8->field_ff4 = (float)v3;
    v2 = sub_487c70(a0->field_c, 0x100, 0x42c80000);
    v4 = sub_487c70(a0->field_c, 0x200, 0x42c80000);
    if (v2)
    {
        if (!v4)
        {
            v1 = -35.0f;
            v0 = -25.0f;
            g_61692c(v0);
            *(float *)&a0->field_8->padding_324[2284] = -25.0f;
            return -25.0;
        }
        if (v2)
            goto LABEL_572480;
    }
    if (v4)
    {
        v1 = 35.0f;
        v0 = 25.0f;
        g_61692c(v0);
        *(float *)&a0->field_8->padding_324[2284] = 25.0f;
        return 25.0;
    }
    if (!v2)
        goto LABEL_572488;
LABEL_572480:
    if (v4)
    {
        *(float *)&a0->field_8->padding_324[2284] = 0;
        return v3;
    }
LABEL_572488:
    v6 = g_616928(1, 3);
    if (v6 == 1)
    {
        v1 = -35.0f;
        v0 = -25.0f;
        g_61692c(v0);
        *(float *)&a0->field_8->padding_324[2284] = -25.0f;
        return -25.0;
    }
    else if (v6 == 2)
    {
        v1 = 35.0f;
        v0 = 25.0f;
        g_61692c(v0);
        *(float *)&a0->field_8->padding_324[2284] = 25.0f;
        return 25.0;
    }
    else
    {
        *(float *)&a0->field_8->padding_324[2284] = 0;
        return v3;
    }
}

