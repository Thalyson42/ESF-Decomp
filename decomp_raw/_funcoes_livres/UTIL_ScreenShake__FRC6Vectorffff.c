// UTIL_ScreenShake__FRC6Vectorffff @0x132090 size=480
typedef struct st_532090_0 {
    char padding_0[144];
    unsigned int field_90;
} st_532090_0;

typedef struct st_532090_3 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[401];
    char field_19d;
    char padding_19e[98];
    unsigned int field_200;
} st_532090_3;

typedef struct st_532090_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[401];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
} st_532090_2;

typedef struct st_532090_1 {
    unsigned int field_0;
} st_532090_1;

extern unsigned int gmsgShake;
extern st_532090_1 *g_616878;
extern st_532090_1 *g_61687c;
extern st_532090_1 *g_616888;
extern st_532090_0 *gpGlobals;

st_532090_0 * UTIL_ScreenShake__FRC6Vectorffff(float *a0, float a1, int a2, float a3, float a4)
{
    int iter;  // edi
    st_532090_2 **v10;  // esi
    st_532090_3 *v11;  // edx
    float v12;  // 112
    float v13;  // 112
    float v14;  // 112
    double v15;  // mm7
    double v16;  // mm6
    unsigned int v0;  // [bp-0x8c]
    float v1;  // [bp-0x68]
    float v2;  // [bp-0x58]
    float v3;  // [bp-0x44]
    float v4;  // [bp-0x40]
    float v5;  // [bp-0x3c]
    unsigned short v6;  // [bp-0x24]
    unsigned short v7;  // [bp-0x22]
    unsigned short v8;  // [bp-0x20]

    v7 = FixedUnsigned16__Fff(a3, 4096.0f);
    v8 = FixedUnsigned16__Fff(a2, 256.0f);
    iter = 1;
    while (iter <= (int)gpGlobals->field_90)
    {
        v10 = sub_48a500(iter);
        if (v10)
        {
            if (!(*v10->field_1a5 & 2))
            {
                iter += 1;
                continue;
            }
            v1 = 0;
            if (a4 > v1)
            {
                v11 = &*v10->field_8;
                v12 = *a0 - *v10->field_8;
                v3 = v12;
                v13 = a0[1] - *(float *)&v11->field_4;
                v4 = v13;
                v14 = a0[2] - *(float *)&v11->field_8;
                v5 = v14;
                v15 = v12 * v12 + v13 * v13 + v14 * v14;
                v16 = sqrt(v15);
                if (isnan(v16))
                    sub_487dc0(*(unsigned int *)&v15);
                else
                    v15 = v16;
                v2 = (float)v15;
                if (v2 >= a4)
                    goto LABEL_5321a4;
            }
            v1 = a1;
LABEL_5321a4:
            if (v1 != 0.0f)
            {
                v6 = FixedUnsigned16__Fff(v1, 4096.0f);
                g_616878(1, gmsgShake, 0, *v10->field_208);
                g_616888(v6);
                g_616888(v7);
                v0 = v8;
                g_616888(v0);
                g_61687c(v0);
                iter += 1;
            }
            else
            {
                iter += 1;
            }
        }
        else
        {
            iter += 1;
        }
    }
    return gpGlobals;
}

