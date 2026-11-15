// TaskThink__22CShootScatterShotsTask @0x150600 size=697
typedef struct st_550600_1 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_550600_1;

typedef struct st_550600_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_550600_2;

typedef struct st_550600_3 {
    unsigned int field_0;
    char padding_4[2552];
    char field_9fc;
    char padding_9fd[367];
    struct st_550600_4 *field_b6c;
} st_550600_3;

typedef struct st_550600_4 {
    struct st_550600_2 *field_0;
} st_550600_4;

typedef struct st_550600_0 {
    float field_0;
} st_550600_0;

extern st_550600_0 *gpGlobals;

double TaskThink__22CShootScatterShotsTask(float idx)
{
    double v16;  // mm7
    st_550600_3 *v17;  // edx
    double v26;  // mm5
    st_550600_3 *v27;  // ecx
    unsigned int *v28;  // edx
    unsigned int idx1;  // edx
    float v30;  // 104
    float v31;  // 104
    float v32;  // 104
    double v33;  // mm6
    double v34;  // mm5
    unsigned int v18;  // fc3210
    st_550600_1 **v19;  // eax
    unsigned int *v20;  // edx
    unsigned int index;  // edx
    float v22;  // 104
    float v23;  // 104
    float v24;  // 104
    double v25;  // mm6
    st_550600_3 *v0;  // [bp-0x9c], Other Possible Types: unsigned long long
    st_550600_3 *v1;  // [bp-0x9c]
    float v2;  // [bp-0x7c]
    unsigned int v3;  // [bp-0x78]
    float v4;  // [bp-0x68]
    float v5;  // [bp-0x54]
    float v6;  // [bp-0x50]
    float v7;  // [bp-0x4c]
    int v8;  // [bp-0x24], Other Possible Types: unsigned int
    float v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20], Other Possible Types: unsigned short
    float v11;  // [bp-0x20]
    unsigned short v12;  // [bp-0x1e]
    unsigned int v13;  // [bp-0x1c]
    float v14;  // [bp-0x1c]

    v16 = *(float *)(*(unsigned int *)&idx + 24);
    if (v16 >= *(float *)gpGlobals && (v16 = *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 608), v12 = __fnstcw(), v10 = v12 | 0xc00, v8 = (int)v16, v8 > 19))
    {
        v17 = *(int *)(*(unsigned int *)&idx + 8);
        if (!v17->field_b6c)
        {
            v16 = *(float *)&v17->padding_9fd[323];
            if (*(float *)gpGlobals - 2.0 < v16)
            {
                if (!v17->field_b6c)
                {
                    sub_48d7b0(v17);
                    return v16;
                }
                goto LABEL_5506b0;
            }
        }
        else
        {
LABEL_5506b0:
            v0 = *(int *)(*(unsigned int *)&idx + 8);
            sub_48bfd0(v0);
            v0 = _INSERT(CONCAT(v0, 0), 4, *(int *)(*(int *)(*(unsigned int *)&idx + 8) + 2924));
            v1 = *(int *)(*(unsigned int *)&idx + 8);
            if (!(char)sub_48bf70(v1, *(unsigned int *)((void*)&v0 + 4)))
                return v16;
            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 0x200) | 1;
            if (*(char *)(*(unsigned int *)&idx + 32))
            {
                *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) | 8;
LABEL_550870:
                if ((char)*(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2556) > 1)
                    return v16;
                v0 = _INSERT((unsigned long long)v1, 4, 1);
                *(int *)&v0 = *(int *)(*(unsigned int *)&idx + 8);
                sub_48ab70(v0, *(unsigned int *)((void*)&v0 + 4));
                *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 2740) = (float)(1.5 + *(float *)gpGlobals);
                return v16;
            }
            v18 = (isunordered(*(float *)(*(unsigned int *)&idx + 28) + 0.550000011920929, *(float *)gpGlobals) ? 0x4500 : *(float *)(*(unsigned int *)&idx + 28) + 0.550000011920929 == *(float *)gpGlobals ? 0x4000 : *(float *)(*(unsigned int *)&idx + 28) + 0.550000011920929 < *(float *)gpGlobals ? 0x100 : 0);
            if (((char)((0x3800 | (unsigned short)v18 & 0x4700) >> 8) & 69) - 1 >= 64 || !(v1 = (st_550600_3 *)idx, v19 = sub_488650(v1), v19))
                goto LABEL_550870;
            v20 = &*v19->field_8;
            v9 = *v19->field_8;
            v11 = *(float *)&v20[1];
            v14 = *(float *)&v20[2];
            index = *(int *)*(int *)(*(unsigned int *)&idx + 8) + 8;
            v22 = v9 - *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 8) + 8);
            v5 = v22;
            v23 = v11 - *(float *)(index + 4);
            v6 = v23;
            v24 = v14 - *(float *)(index + 8);
            v7 = v24;
            v25 = v22 * v22 + v23 * v23 + v24 * v24;
            v26 = sqrt(v25);
            if (isnan(v26))
            {
                v1 = (st_550600_3 *)v25;
                sub_487dc0((unsigned long long)v1);
            }
            else
            {
                v25 = v26;
            }
            v2 = (float)v25;
            v27 = *(int *)(*(unsigned int *)&idx + 8);
            v28 = *(int *)v27->field_b6c + 8;
            *(float *)&v8 = *(float *)(*(int *)v27->field_b6c + 8);
            *(float *)&v10 = *(float *)&v28[1];
            *(float *)&v13 = *(float *)&v28[2];
            idx1 = v27->field_0 + 8;
            v30 = *(float *)&v8 - *(float *)(v27->field_0 + 8);
            v5 = v30;
            v31 = *(float *)&v10 - *(float *)(idx1 + 4);
            v6 = v31;
            v32 = *(float *)&v13 - *(float *)(idx1 + 8);
            v7 = v32;
            v33 = v30 * v30 + v31 * v31 + v32 * v32;
            v34 = sqrt(v33);
            if (isnan(v34))
            {
                v1 = (st_550600_3 *)v33;
                sub_487dc0((unsigned long long)v1);
            }
            else
            {
                v33 = v34;
            }
            v4 = (float)v33;
            v3 = (*(char *)(*(int *)(*(unsigned int *)&idx + 8) + 2556) * 5 + 5) * 5;
            if (v2 - ((double)(int)v3 + 225.0) <= v4)
                goto LABEL_550870;
            *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) = *(char *)(*(int *)(*(unsigned int *)&idx + 12) + 513) | 8;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
    return v16;
}

