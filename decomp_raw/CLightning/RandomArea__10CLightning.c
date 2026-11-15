// RandomArea__10CLightning @0xb1cf0 size=1296
typedef struct st_4b1cf0_0 {
    unsigned int field_0;
} st_4b1cf0_0;

extern st_4b1cf0_0 *g_engfuncs.pfnRandomFloat;

char RandomArea__10CLightning(float a0)
{
    double v39;  // mm0
    double v48;  // mm0
    double v49;  // mm6
    double v50;  // mm6
    double v51;  // mm1
    double i;  // mm1
    double v53;  // mm1
    double v54;  // mm0
    double v55;  // mm1
    unsigned int v56;  // 80
    float v57;  // 128
    unsigned int *v40;  // edx
    float v58;  // 128
    float v59;  // 128
    double v60;  // mm1
    double v61;  // mm0
    char v62;  // al
    unsigned int v41;  // 128
    unsigned int v42;  // 128
    double v43;  // mm7
    double v44;  // mm0
    double v45;  // mm7
    double v46;  // mm0
    double v47;  // mm0
    float v0;  // [bp-0x128]
    float v1;  // [bp-0x124]
    unsigned int v2;  // [bp-0x120]
    unsigned int v3;  // [bp-0x11c]
    int v4;  // [bp-0x118]
    char v5;  // [bp-0x114]
    float v6;  // [bp-0x104]
    float v7;  // [bp-0x100]
    float v8;  // [bp-0xfc]
    float v9;  // [bp-0xf8]
    float v10;  // [bp-0xc4]
    float v11;  // [bp-0xc0]
    float v12;  // [bp-0xbc]
    float v13;  // [bp-0xb8]
    float v14;  // [bp-0xb4]
    float v15;  // [bp-0xb0]
    float v16;  // [bp-0xac]
    float v17;  // [bp-0xa8]
    float v18;  // [bp-0xa4]
    float v19;  // [bp-0xa0]
    float v20;  // [bp-0x9c]
    char v21;  // [bp-0x84]
    float v22;  // [bp-0x78]
    float v23;  // [bp-0x74]
    float v24;  // [bp-0x70]
    float v25;  // [bp-0x6c]
    float v26;  // [bp-0x68]
    float v27;  // [bp-0x64]
    float v28;  // [bp-0x60]
    float v29;  // [bp-0x5c]
    float v30;  // [bp-0x44]
    unsigned int v31;  // [bp-0x44]
    float v32;  // [bp-0x40]
    unsigned int v33;  // [bp-0x40]
    float v34;  // [bp-0x3c]
    float v35;  // [bp-0x24]
    float v36;  // [bp-0x20]
    float v37;  // [bp-0x1c]

    v4 = 0;
    while (1)
    {
        v40 = *(int *)a0 + 8;
        v35 = *(float *)(*(int *)a0 + 8);
        v36 = *(float *)&v40[1];
        v41 = *&v40[2];
        *(unsigned int *)&v37 = v41;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v3 = v41;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v2 = v41;
        g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
        v31 = v3;
        v42 = v2;
        v33 = v42;
        v43 = v39;
        v34 = (float)v43;
        v44 = *(float *)&v3 * *(float *)&v31 + __int_as_float(v42) * __int_as_float(v42) + v43 * v43;
        v45 = sqrt(v44);
        if (isnan(v45))
            sqrt(*(unsigned int *)&v44);
        else
            v44 = v45;
        v22 = (float)v44;
        v46 = v22;
        if (v46 == 0.0)
        {
            v27 = 0.0f;
            v28 = 0.0f;
            v29 = 1.0;
        }
        else
        {
            v47 = 1.0 / v46;
            v27 = (float)(v47 * *(float *)&v31);
            v28 = (float)(v47 * *(float *)&v33);
            v29 = (float)(v47 * v34);
        }
        v30 = v27;
        v32 = v28;
        v34 = v29;
        v48 = *(float *)(*(unsigned int *)&a0 + 148);
        v49 = v48 * v30;
        v10 = (float)v49;
        v50 = v48 * v32;
        v11 = (float)v50;
        v12 = (float)(v48 * v34);
        v18 = (float)(v49 + v35);
        v19 = (float)(v50 + v36);
        v20 = v37 + v12;
        UTIL_TraceLine(&v35, &v18, 1, *(int *)(*(int *)a0 + 520), &v21);
        v39 = v23;
        i = v51;
        if (v39 != 1.0)
        {
            do
            {
                g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
                v1 = (float)v39;
                g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
                v0 = (float)v39;
                g_engfuncs.pfnRandomFloat(0xbf800000, 0x3f800000);
                v13 = v1;
                v14 = v0;
                v15 = (float)i;
                v10 = v13;
                v11 = v14;
                v12 = v15;
                i = v30 * v10 + v32 * v11 + v34 * v12;
                v39 = 0.0;
            } while (0.0 < i);
            v53 = v10 * v10 + v11 * v11 + v12 * v12;
            v54 = sqrt(v53);
            if (isnan(v54))
                sqrt(*(unsigned int *)&v53);
            else
                v53 = v54;
            v19 = (float)v53;
            if (v19 == 0.0f)
            {
                v13 = 0.0f;
                v14 = 0.0f;
                v15 = 1.0;
            }
            else
            {
                v55 = 1.0 / v19;
                v13 = (float)(v55 * v10);
                v14 = (float)(v55 * v11);
                v15 = (float)(v55 * v12);
            }
            v10 = v13;
            v11 = v14;
            v12 = v15;
            v56 = *(unsigned int *)&*(float *)(*(unsigned int *)&a0 + 148);
            v16 = __int_as_float(v56) * v10;
            v17 = __int_as_float(v56) * v11;
            v18 = __int_as_float(v56) * v12;
            v13 = v16 + v35;
            v14 = v17 + v36;
            v15 = v37 + v18;
            UTIL_TraceLine(&v35, &v13, 1, *(int *)(*(int *)a0 + 520), &v5);
            v39 = 1.0;
            if (v6 != 1.0f)
            {
                v57 = v24 - v7;
                v13 = v57;
                v58 = v25 - v8;
                v14 = v58;
                v59 = v26 - v9;
                v15 = v59;
                v60 = v57 * v57 + v58 * v58 + v59 * v59;
                v61 = sqrt(v60);
                if (isnan(v61))
                    sqrt(*(unsigned int *)&v60);
                else
                    v60 = v61;
                v19 = (float)v60;
                v39 = 0.1 * *(float *)(*(unsigned int *)&a0 + 148);
                if (v39 <= v19)
                {
                    UTIL_TraceLine(&v24, &v7, 1, *(int *)(*(int *)a0 + 520), &v5);
                    v39 = 1.0;
                    if (v6 == 1.0f)
                    {
                        v62 = CLightning::Zap(a0, &v24, &v7);
                        return v62;
                    }
                }
            }
        }
        v4 += 1;
        if (v4 > 9)
            return v62;
    }
}

