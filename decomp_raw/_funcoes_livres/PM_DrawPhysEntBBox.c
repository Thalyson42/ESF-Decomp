// PM_DrawPhysEntBBox @0x18cf00 size=939
typedef struct st_58cf00_1 {
    unsigned int field_0;
} st_58cf00_1;

typedef struct st_58cf00_0 {
    char padding_0[588];
    int field_24c;
    char padding_250[324420];
    struct st_58cf00_1 *field_4f594;
} st_58cf00_0;

extern unsigned int PM_boxpnt[4];
extern unsigned int g_5ccd24[4];
extern unsigned int g_5ccd28[4];
extern unsigned int g_5ccd2c[4];
extern st_58cf00_0 *pmove;

unsigned int PM_DrawPhysEntBBox(int a0, int a1, int a2)
{
    unsigned int *v31;  // edi
    int i;  // esi
    unsigned int v41;  // eax
    int n;  // esi
    unsigned int v43;  // eax
    unsigned int v44;  // eax
    unsigned int v45;  // eax
    float *v33;  // eax
    int j;  // esi
    unsigned int v35;  // eax
    int k;  // esi
    unsigned int v37;  // eax
    int l;  // esi
    unsigned int v39;  // eax
    int m;  // esi
    char *v0;  // [bp-0x14c]
    char *v1;  // [bp-0x148]
    char v2;  // [bp-0x144]
    float v3;  // [bp-0x144]
    float v4;  // [bp-0x140]
    float v5;  // [bp-0x13c]
    char v6;  // [bp-0x124]
    float v7;  // [bp-0x124]
    float v8;  // [bp-0x120]
    float v9;  // [bp-0x11c]
    char v10;  // [bp-0x104]
    float v11;  // [bp-0x104]
    float v12;  // [bp-0x100]
    float v13;  // [bp-0xfc]
    float v14;  // [bp-0xe4]
    char v15;  // [bp-0xe4]
    float v16;  // [bp-0xe0]
    float v17;  // [bp-0xdc]
    float v18;  // [bp-0xc4]
    char v19;  // [bp-0xc4]
    float v20;  // [bp-0xc0]
    float v21;  // [bp-0xbc]
    float v22;  // [bp-0xa4]
    float v23;  // [bp-0xa0]
    char v24;  // [bp-0x9c]
    float v25;  // [bp-0x44]
    float v26;  // [bp-0x40]
    float v27;  // [bp-0x3c]
    float v28;  // [bp-0x24]
    float v29;  // [bp-0x20]
    float v30;  // [bp-0x1c]

    if (a0 >= pmove->field_24c)
    {
        return v45;
    }
    else if (a0 > 0)
    {
        v31 = &pmove->padding_0[224 * a0 + 592];
        if (v31[12])
        {
            v28 = *(float *)&v31[9];
            v29 = *(float *)&v31[10];
            v30 = *(float *)&v31[11];
            pmove->field_4f594(v31[12], &v19, &v15);
            i = 0;
            v1 = &v22;
            v0 = &v23;
            do
            {
                v25 = (float)(!(i & 1) ? 0.0 + v14 : v18 - 0.0);
                v26 = (float)(!(i & 2) ? 0.0 + v16 : v20 - 0.0);
                v27 = (float)(!(i & 4) ? 0.0 + v17 : v21 - 0.0);
                v33 = i * 12;
                *(float *)(v33 + v1) = v25;
                *(float *)(v33 + v0) = v26;
                *(float *)(v33 + &v24) = v27;
                i += 1;
            } while (i <= 7);
            if (*(float *)&v31[21] == 0.0f && *(float *)&v31[22] == 0.0f && *(float *)&v31[23] == 0.0f)
                goto LABEL_58d12c;
            sub_4890e0(v31 + 21, &v10, &v6, &v2);
            j = 0;
            do
            {
                v35 = j * 12;
                v25 = *(float *)(v35 + (char *)&v22);
                v26 = *(float *)(v35 + (char *)&v23);
                v27 = *(float *)&(&v24)[v35];
                *(float *)(v35 + (char *)&v22) = *(float *)(v35 + (char *)&v22) * v11 + *(float *)(v35 + (char *)&v23) * v12 + *(float *)&(&v24)[v35] * v13;
                *(float *)(v35 + (char *)&v23) = v25 * v7 + v26 * v8 + v27 * v9;
                *(float *)&(&v24)[v35] = v25 * v3 + v26 * v4 + v27 * v5;
                j += 1;
            } while (j <= 7);
LABEL_58d12c:
            k = 0;
            do
            {
                v37 = k * 12;
                *(float *)(v37 + (char *)&v22) = *(float *)(v37 + (char *)&v22) + v28;
                *(float *)(v37 + (char *)&v23) = *(float *)(v37 + (char *)&v23) + v29;
                *(float *)&(&v24)[v37] = *(float *)&(&v24)[v37] + v30;
                k += 1;
            } while (k <= 7);
            l = 0;
            do
            {
                v39 = sub_489c70(&(&v22)[3 * g_5ccd24[4 * l]], &(&v22)[3 * PM_boxpnt[4 * l]], &(&v22)[3 * g_5ccd28[4 * l]], &(&v22)[3 * g_5ccd2c[4 * l]], a1, a2);
                l += 1;
            } while (l <= 5);
            return v39;
        }
        else
        {
            m = 0;
            do
            {
                v25 = (float)(!(m & 1) ? *(float *)&v31[0x11] : *(float *)&v31[14]);
                v26 = (float)(!(m & 2) ? *(float *)&v31[18] : *(float *)&v31[15]);
                v27 = (float)(!(m & 4) ? *(float *)&v31[19] : *(float *)&v31[16]);
                v25 += *(float *)&v31[9];
                v26 += *(float *)&v31[10];
                v27 += *(float *)&v31[11];
                v41 = m * 12;
                *(float *)((char *)&v22 + v41) = v25;
                *(float *)(v41 + (char *)&v23) = v26;
                *(float *)&(&v24)[v41] = v27;
                m += 1;
            } while (m <= 7);
            n = 0;
            do
            {
                v43 = sub_489c70(&(&v22)[3 * g_5ccd24[4 * n]], &(&v22)[3 * PM_boxpnt[4 * n]], &(&v22)[3 * g_5ccd28[4 * n]], &(&v22)[3 * g_5ccd2c[4 * n]], a1, a2);
                n += 1;
            } while (n <= 5);
            return v43;
        }
    }
    else
    {
        return v44;
    }
}

