// PSThink__14CPowerStruggle @0x10d4a0 size=1045
typedef struct st_50d4a0_3 {
    struct st_50d4a0_1 *field_0;
} st_50d4a0_3;

typedef struct st_50d4a0_1 {
    char padding_0[480];
    unsigned int field_1e0;
} st_50d4a0_1;

typedef struct st_50d4a0_2 {
    char padding_0[4];
    struct st_50d4a0_3 *field_4;
} st_50d4a0_2;

typedef struct st_50d4a0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_50d4a0_0;

extern st_50d4a0_0 *gpGlobals;

double PSThink__14CPowerStruggle(float idx)
{
    st_50d4a0_2 *v23;  // edi
    st_50d4a0_2 *v24;  // edi
    double v33;  // mm7
    st_50d4a0_2 *v34;  // edi
    st_50d4a0_2 *v35;  // edi
    st_50d4a0_1 **v36;  // esi
    st_50d4a0_1 *v37;  // edx
    double v38;  // mm7
    double v39;  // mm6
    double v40;  // mm7
    unsigned int *v41;  // edx
    float v42;  // 128
    st_50d4a0_1 **v25;  // esi
    double v43;  // mm7
    double v44;  // mm6
    double v45;  // mm7
    unsigned int v26;  // 128
    unsigned int *v27;  // edx
    double v28;  // mm7
    double v29;  // mm6
    double v30;  // mm7
    double v31;  // mm7
    double v32;  // mm6
    float v0;  // [bp-0x94]
    float v1;  // [bp-0x90]
    float v2;  // [bp-0x8c]
    float v3;  // [bp-0x88]
    int v4;  // [bp-0x84]
    int v5;  // [bp-0x80]
    float v6;  // [bp-0x70]
    unsigned short v7;  // [bp-0x6c]
    unsigned short v8;  // [bp-0x6a]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x58]
    float v13;  // [bp-0x54]
    float v14;  // [bp-0x50]
    float v15;  // [bp-0x4c]
    float v16;  // [bp-0x44]
    float v17;  // [bp-0x40]
    float v18;  // [bp-0x3c]
    float v19;  // [bp-0x24]
    float v20;  // [bp-0x20]
    float v21;  // [bp-0x1c]

    v19 = 0;
    v20 = 0;
    v21 = 0;
    v5 = 0;
    v4 = 0;
    v3 = 0;
    if (*(int *)(*(unsigned int *)&idx + 684))
    {
        v23 = *(int *)(*(unsigned int *)&idx + 684);
        if (*(int *)(*(unsigned int *)&idx + 684))
        {
            do
            {
                v24 = v23;
                v25 = v24->field_4;
                sub_488e40(&*v25->padding_0[80]);
                v26 = *&*v25->field_1e0;
                v27 = &gpGlobals->field_28;
                v9 = __int_as_float(v26) * gpGlobals->field_28;
                v10 = __int_as_float(v26) * *(float *)&v27[1];
                v11 = __int_as_float(v26) * *(float *)&v27[2];
                v16 = v9 + v19;
                v17 = v10 + v20;
                v18 = v21 + v11;
                v19 = v16;
                v20 = v17;
                v21 = v18;
                v8 = __fnstcw();
                v7 = v8 | 0xc00;
                v5 = (int)((double)v5 + *(float *)&*v25->field_1e0);
                v3 += *(float *)&v25[0xaa];
                v4 += 1;
                v23 = (st_50d4a0_2 *)v24->padding_0;
            } while (v24->padding_0);
        }
        v28 = v19 * v19 + v20 * v20 + v21 * v21;
        v29 = sqrt(v28);
        if (isnan(v29))
            sub_487dc0(*(unsigned int *)&v28);
        else
            v28 = v29;
        v12 = (float)v28;
        v30 = v12 / (double)v5;
        v2 = (float)v30;
        v1 = (float)(v30 * v3 / (double)v4);
        v31 = v19 * v19 + v20 * v20 + v21 * v21;
        v32 = sqrt(v31);
        if (isnan(v32))
            sub_487dc0(*(unsigned int *)&v31);
        else
            v31 = v32;
        v17 = (float)v31;
        if (v17 == 0.0f)
        {
            v12 = 0.0f;
            v13 = 0.0f;
            v14 = 1.0;
        }
        else
        {
            v33 = 1.0 / v17;
            v12 = (float)(v33 * v19);
            v13 = (float)(v33 * v20);
            v14 = (float)(v33 * v21);
        }
        v9 = v1 * v12;
        v10 = v1 * v13;
        v11 = v1 * v14;
        v34 = *(int *)(*(unsigned int *)&idx + 684);
        if (v34)
        {
            do
            {
                v35 = v34;
                v36 = v35->field_4;
                v37 = *v36;
                *(float *)&v37->padding_0[32] = v9;
                *(float *)&v37->padding_0[36] = v10;
                *(float *)&v37->padding_0[40] = v11;
                v0 = v2;
                sub_488e40(&*v36->padding_0[80]);
                v38 = v9 * v9 + v10 * v10 + v11 * v11;
                v39 = sqrt(v38);
                if (isnan(v39))
                    sub_487dc0(*(unsigned int *)&v38);
                else
                    v38 = v39;
                v17 = (float)v38;
                if (v17 == 0.0f)
                {
                    v12 = 0.0f;
                    v13 = 0.0f;
                    v14 = 1.0;
                }
                else
                {
                    v40 = 1.0 / v17;
                    v12 = (float)(v40 * v9);
                    v13 = (float)(v40 * v10);
                    v14 = (float)(v40 * v11);
                }
                v41 = &gpGlobals->field_28;
                v42 = v12 * gpGlobals->field_28 + v13 * *(float *)&v41[1] + v14 * *(float *)&v41[2];
                sub_48db10((unsigned int)(v42 >> 0));
                v6 = v42;
                if (v6 > 1.5707963267948966)
                    v0 = -v0;
                *(float *)&v36[174] = v0;
                v34 = (st_50d4a0_2 *)v35->padding_0;
            } while (v35->padding_0);
        }
        v43 = v9 * v9 + v10 * v10 + v11 * v11;
        v44 = sqrt(v43);
        if (isnan(v44))
            sub_487dc0(*(unsigned int *)&v43);
        else
            v43 = v44;
        v15 = (float)v43;
        if (v15 < 5.0f)
        {
            *(float *)(*(unsigned int *)&idx + 692) = (float)(0.2 + *(float *)(*(unsigned int *)&idx + 692));
            if (5.0 < *(float *)(*(unsigned int *)&idx + 692))
            {
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 508))(idx);
                return 5.0;
            }
        }
        else
        {
            *(unsigned int *)(*(unsigned int *)&idx + 692) = 0;
        }
    }
    v45 = 0.2 + gpGlobals->field_0;
    *(float *)(*(int *)idx + 260) = (float)v45;
    return v45;
}

