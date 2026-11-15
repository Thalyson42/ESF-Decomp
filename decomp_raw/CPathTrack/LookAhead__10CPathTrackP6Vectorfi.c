// LookAhead__10CPathTrackP6Vectorfi @0xe7200 size=979
typedef struct st_4e7200_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4e7200_0;

st_4e7200_0 ** LookAhead__10CPathTrackP6Vectorfi(st_4e7200_0 **a0, unsigned int *a1, float a2, unsigned int a3)
{
    st_4e7200_0 **v20;  // esi
    double v21;  // mm6
    int v30;  // eax
    float v31;  // 128
    st_4e7200_0 **v33;  // eax
    unsigned int *v34;  // edx
    float v35;  // 112
    float v36;  // 112
    float v37;  // 112
    double v38;  // mm7
    double v39;  // mm6
    unsigned int *v22;  // edx
    unsigned int *v40;  // edx
    float v41;  // 128
    float v23;  // 112
    float v24;  // 112
    float v25;  // 112
    double v26;  // mm7
    double v27;  // mm6
    float v28;  // 128
    unsigned int *v29;  // eax
    st_4e7200_0 **v0;  // [bp-0xa4]
    unsigned int *v1;  // [bp-0xa0]
    float v2;  // [bp-0x9c]
    unsigned int v3;  // [bp-0x94]
    float v4;  // [bp-0x6c]
    float v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x58]
    float v9;  // [bp-0x54]
    float v10;  // [bp-0x50]
    float v11;  // [bp-0x4c]
    float v12;  // [bp-0x48]
    float v13;  // [bp-0x44]
    float v14;  // [bp-0x40]
    float v15;  // [bp-0x3c]
    float v16;  // [bp-0x24]
    float v17;  // [bp-0x20]
    float v18;  // [bp-0x1c]
    float iter;  // [bp+0xc]

    v20 = a0;
    v16 = *(float *)a1;
    v17 = *(float *)&a1[1];
    v18 = *(float *)&a1[2];
    if (0.0 > a2)
    {
        v21 = -a2;
        iter = (float)v21;
        if (v21 <= 0.0)
        {
            *(float *)a1 = v16;
            *(float *)&a1[1] = v17;
            *(float *)&a1[2] = v18;
            return v20;
        }
        while (1)
        {
            v22 = &*v20->field_8;
            v23 = *v20->field_8 - v16;
            v13 = v23;
            v24 = *(float *)&v22[1] - v17;
            v14 = v24;
            v25 = *(float *)&v22[2] - v18;
            v15 = v25;
            v26 = v23 * v23 + v24 * v24 + v25 * v25;
            v27 = sqrt(v26);
            if (isnan(v27))
                sub_487dc0(*(unsigned int *)&v26);
            else
                v26 = v27;
            v8 = (float)v26;
            v28 = v8;
            if (v28 == 0.0)
            {
                v3 = a3;
                if (!sub_48a830(a0, sub_487d40(v20)))
                    break;
            }
            else if (v28 <= iter)
            {
                iter -= v28;
                v29 = *v20;
                *(unsigned int *)&v16 = v29[2];
                *(unsigned int *)&v17 = v29[3];
                *(unsigned int *)&v18 = v29[4];
                *a1 = v29[2];
                *(float *)&a1[1] = v17;
                *(float *)&a1[2] = v18;
                v3 = a3;
                if (!sub_48a830(a0, sub_487d40(v20)))
                    return NULL;
            }
            else
            {
                v31 = iter / v28;
                v8 = v31 * v13;
                v9 = v31 * v14;
                v10 = v31 * v15;
                v5 = v8 + v16;
                v6 = v9 + v17;
                v7 = v18 + v10;
                *(float *)a1 = v5;
                *(float *)&a1[1] = v6;
                *(float *)&a1[2] = v7;
                return v20;
            }
            v20 = sub_487d40(v20);
            if (0.0 >= iter)
            {
                *(float *)a1 = v16;
                *(float *)&a1[1] = v17;
                *(float *)&a1[2] = v18;
                return v20;
            }
        }
        if (!a3)
        {
            v2 = iter;
            v1 = a1;
            v0 = v20;
            v30 = sub_48d550(v20);
            goto LABEL_4e7470;
        }
    }
    else
    {
        iter = a2;
        while (1)
        {
            if (0.0 >= iter)
            {
                *(float *)a1 = v16;
                *(float *)&a1[1] = v17;
                *(float *)&a1[2] = v18;
                return v20;
            }
            v3 = a3;
            if (!sub_48a830(a0, sub_48d550(v20)))
                break;
            v33 = sub_48d550(v20);
            v34 = &*v33->field_8;
            v35 = *v33->field_8 - v16;
            v5 = v35;
            v36 = *(float *)&v34[1] - v17;
            v6 = v36;
            v37 = *(float *)&v34[2] - v18;
            v7 = v37;
            v38 = v35 * v35 + v36 * v36 + v37 * v37;
            v39 = sqrt(v38);
            if (isnan(v39))
                sub_487dc0(*(unsigned int *)&v38);
            else
                v38 = v39;
            v4 = (float)v38;
            if (v4 == 0.0f)
            {
                v3 = a3;
                if (!sub_48a830(a0, sub_48d550(sub_48d550(v20))))
                {
                    if (a2 == iter)
                        return NULL;
                    return v20;
                }
            }
            if (v4 > iter)
            {
                v41 = iter / v4;
                v11 = v41 * v5;
                v12 = v41 * v6;
                v13 = v41 * v7;
                v8 = v11 + v16;
                v9 = v12 + v17;
                v10 = v18 + v13;
                *(float *)a1 = v8;
                *(float *)&a1[1] = v9;
                *(float *)&a1[2] = v10;
                return v20;
            }
            iter -= v4;
            v40 = *(int *)sub_48d550(v20);
            *(unsigned int *)&v16 = v40[2];
            *(unsigned int *)&v17 = v40[3];
            *(unsigned int *)&v18 = v40[4];
            v20 = sub_48d550(v20);
            *(float *)a1 = v16;
            *(float *)&a1[1] = v17;
            *(float *)&a1[2] = v18;
        }
        if (!a3)
        {
            v2 = iter;
            v1 = a1;
            v0 = v20;
            v30 = sub_487d40(v20);
LABEL_4e7470:
            sub_48b450(a0, v30);
        }
    }
    return NULL;
}

