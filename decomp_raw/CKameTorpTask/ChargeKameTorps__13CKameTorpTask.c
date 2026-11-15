// ChargeKameTorps__13CKameTorpTask @0x152240 size=268
typedef struct st_552240_2 {
    char padding_0[136];
    unsigned int field_88;
} st_552240_2;

typedef struct st_552240_3 {
    char padding_0[1744];
    unsigned int field_6d0;
    char padding_6d4[660];
    struct st_552240_2 *field_968;
    char padding_96c[388];
    char field_af0;
} st_552240_3;

typedef struct st_552240_1 {
    float field_0;
} st_552240_1;

typedef struct st_552240_0 {
    unsigned int field_0;
} st_552240_0;

extern st_552240_0 *g_61692c;
extern st_552240_1 *gpGlobals;

double ChargeKameTorps__13CKameTorpTask(float idx)
{
    double v1;  // mm7
    double v2;  // mm7
    unsigned short v3;  // ax
    double v4;  // mm7
    st_552240_3 *v5;  // edx
    double v6;  // mm7

    if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1744) > 99 || !*(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2800))
    {
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 8) + 1744) == 100)
        {
            *(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2800) = 0;
            if (!(char)sub_487f70(idx))
                return v2;
            *(unsigned int *)(*(unsigned int *)&idx + 44) = 3;
            g_61692c(0.12999999523162842f, 0.25f);
            *(float *)(*(unsigned int *)&idx + 24) = (float)(0.12999999523162842 + *(float *)gpGlobals);
            return v1;
        }
        else
        {
            v3 = sub_48dae0(idx);
            if (v3 >= *(short *)(*(unsigned int *)&idx + 56))
            {
                *(unsigned int *)(*(unsigned int *)&idx + 44) = 2;
                v4 = 4.0 + *(float *)gpGlobals;
                *(float *)(*(unsigned int *)&idx + 52) = (float)v4;
                return v4;
            }
            *(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2800) = 1;
            v5 = *(int *)(*(unsigned int *)&idx + 8);
            if (v5->field_968 && v5->field_968->field_88 != 32)
                sub_48ce10(v5, "weapon_kametorpedo");
        }
    }
    *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) | 1;
    return v6;
}

