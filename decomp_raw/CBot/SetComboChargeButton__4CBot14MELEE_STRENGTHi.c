// SetComboChargeButton__4CBot14MELEE_STRENGTHi @0x155e60 size=471
typedef struct st_555e60_1 {
    float field_0;
} st_555e60_1;

typedef struct st_555e60_0 {
    unsigned int field_0;
} st_555e60_0;

extern st_555e60_0 *g_61692c;
extern st_555e60_1 *gpGlobals;

int SetComboChargeButton__4CBot14MELEE_STRENGTHi(double a0, double a1, double a2, void* a3, int a4, unsigned int a5)
{
    void* v3;  // esi
    unsigned int v4;  // 128
    unsigned int v5;  // 128
    double v6;  // mm7
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v3 = a3 + 896;
    *(float *)&v0 = *(float *)(sub_48cc40(v3) + 4);
    v4 = *(unsigned int *)&*(float *)sub_48cc40(v3);
    g_61692c(*(float *)sub_48cc40(v3));
    *(float *)&v2 = *(float *)sub_48cc40(v3);
    *(float *)&v0 = *(float *)(sub_48cc40(v3) + 8);
    v5 = *(unsigned int *)&*(float *)(sub_48cc40(v3) + 4);
    g_61692c(*(float *)(sub_48cc40(v3) + 4));
    *(float *)&v1 = *(float *)(sub_48cc40(v3) + 4);
    *(float *)&v0 = *(float *)(sub_48cc40(v3) + 12);
    v6 = *(float *)(sub_48cc40(v3) + 8);
    g_61692c((float)v6);
    if (a4 == 1)
    {
        v6 = *(float *)&v1;
    }
    else if (a4 <= 1)
    {
        if (a4)
            goto LABEL_555f60;
        v6 = *(float *)&v2;
    }
    else if (a4 != 2)
    {
        goto LABEL_555f60;
    }
    *(float *)&a3[2960] = (float)v6;
LABEL_555f60:
    *(float *)&a3[2960] = (float)a3[2960] + *(float *)gpGlobals;
    *(unsigned int *)&a3[2972] = 0;
    *(int *)&a3[2968] = (int)a3[2964];
    *(float *)&a3[2976] = (float)(*(float *)gpGlobals + 0.15000000596046448);
    if ((char)a5 & 8)
    {
        sub_488e30(a3, 16);
        *(char *)&a3[2972] = (char)a3[2972] | 8;
    }
    if ((char)a5 & 16)
    {
        sub_488e30(a3, 8);
        *(char *)&a3[2972] = (char)a3[2972] | 16;
    }
    if (*(char *)((void*)&a5 + 1) & 2)
    {
        sub_488e30(a3, 2);
        *(char *)&a3[2973] = (char)a3[2973] | 2;
    }
    if (*(char *)((void*)&a5 + 1) & 4)
    {
        sub_488e30(a3, 4);
        *(char *)&a3[2973] = (char)a3[2973] | 4;
    }
    if ((char)a5 & 1)
        *(unsigned int *)&a3[2964] = 1;
    if (*(char *)((void*)&a5 + 1) & 8)
        *(unsigned int *)&a3[2964] = 0x800;
    return a5;
}

