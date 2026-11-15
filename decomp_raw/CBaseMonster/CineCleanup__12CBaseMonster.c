// CineCleanup__12CBaseMonster @0x115ef0 size=893
typedef struct st_515ef0_1 {
    char padding_0[416];
    char field_1a0;
} st_515ef0_1;

typedef struct st_515ef0_2 {
    struct st_515ef0_1 *field_0;
    char padding_4[680];
    unsigned int field_2ac;
} st_515ef0_2;

typedef struct st_515ef0_0 {
    unsigned int field_0;
} st_515ef0_0;

extern st_515ef0_0 *g_616828;

unsigned int CineCleanup__12CBaseMonster(float idx)
{
    st_515ef0_2 *v14;  // edi
    unsigned int *v15;  // edx
    unsigned int *v16;  // edx
    float v17;  // 112
    float v18;  // 112
    double v19;  // mm7
    double v20;  // mm6
    int v21;  // eax
    unsigned int *v22;  // edx
    float v0;  // [bp-0x78]
    float v1;  // [bp-0x64]
    float v2;  // [bp-0x60]
    float v3;  // [bp-0x5c]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned int v7;  // [bp-0x24]
    float v8;  // [bp-0x24]
    float v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x20]
    float v11;  // [bp-0x1c]
    char v12;  // [bp-0x18]

    v14 = *(int *)(*(unsigned int *)&idx + 676);
    if (v14)
    {
        sub_48d960(&v14->padding_4[268], 0);
        *(int *)(*(int *)idx + 264) = *(int *)(*(int *)(*(unsigned int *)&idx + 676) + 716);
        *(int *)(*(int *)idx + 268) = *(int *)(*(int *)(*(unsigned int *)&idx + 676) + 720);
        *(int *)(*(int *)idx + 280) = *(int *)(*(int *)(*(unsigned int *)&idx + 676) + 724);
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 264) = 4;
        *(unsigned int *)(*(int *)idx + 268) = 3;
    }
    *(st_515ef0_2 **)(*(unsigned int *)&idx + 676) = NULL;
    sub_48d960(*(unsigned int *)&idx + 272, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 4) = 0;
    if (*(int *)(*(int *)idx + 368) == 1)
    {
        *(unsigned int *)(*(int *)idx + 352) = 0;
        *(unsigned int *)(*(int *)idx + 312) = 0;
        *(unsigned int *)(*(int *)idx + 268) = 0;
        sub_48ad20(idx, 8);
        *(unsigned int *)(*(int *)idx + 368) = 2;
        v15 = *(int *)idx;
        *(float *)&v7 = *(float *)&v15[58];
        *(float *)&v10 = *(float *)&v15[59];
        v11 = (float)(*(float *)&v15[57] + 2.0);
        sub_48a0d0(v15, v15 + 55, &v7);
        if (v14 && v14->field_0->field_1a0 & 8)
            memset(*(unsigned int *)&idx + 12, 0, 24);
        else
            sub_48b5d0(idx);
        *(unsigned int *)(*(int *)idx + 312) = 0;
        *(unsigned int *)(*(int *)idx + 264) = 0;
        *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) | 32;
        return 0;
    }
    else
    {
        if (v14 && v14->field_2ac)
        {
            if ((char)v14->field_0->field_1a0 >= 0)
            {
                sub_488c40(idx, 0, &v7, &v12);
                v16 = *(int *)idx + 8;
                *(float *)&v4 = *(float *)(*(int *)idx + 8);
                *(float *)&v5 = *(float *)&v16[1];
                *(float *)&v6 = *(float *)&v16[2];
                v17 = *(float *)&v4 - v8;
                v1 = v17;
                v18 = *(float *)&v5 - v9;
                v2 = v18;
                v3 = *(float *)&v6 - v11;
                v19 = v17 * v17 + v18 * v18;
                v20 = sqrt(v19);
                if (isnan(v20))
                    sub_487dc0(*(unsigned int *)&v19);
                else
                    v19 = v20;
                v0 = (float)v19;
                if (v0 < 8.0f)
                {
                    *(unsigned int *)&v8 = v4;
                    *(unsigned int *)&v9 = v5;
                    *(unsigned int *)&v11 = v6;
                }
                *(float *)(*(int *)idx + 8) = v8;
                *(float *)(*(int *)idx + 12) = v9;
                *(float *)(*(int *)idx + 16) = (float)(1.0 + *(float *)(*(int *)idx + 16));
                *(char *)(*(int *)idx + 421) = *(char *)(*(int *)idx + 421) | 2;
                v21 = g_616828(*(int *)(*(int *)idx + 520));
                if (v21 < NULL)
                {
                    v22 = *(int *)idx;
                    v22[2] = v4;
                    v22[3] = v5;
                    v22[4] = v6;
                }
                else if (!v21)
                {
                    *(float *)(*(int *)idx + 16) = v11;
                    *(char *)(*(int *)idx + 421) = *(char *)(*(int *)idx + 421) & 253;
                }
                sub_48db50(*(int *)idx, *(int *)idx + 8);
                *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) | 32;
            }
            *(unsigned int *)(*(unsigned int *)&idx + 372) = 0;
        }
        *(unsigned int *)(*(int *)idx + 400) = 0;
        if (0.0 < *(float *)(*(int *)idx + 352))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 388) = 1;
        }
        else
        {
            *(unsigned int *)(*(unsigned int *)&idx + 388) = 8;
            *(char *)(*(unsigned int *)&idx + 261) = *(char *)(*(unsigned int *)&idx + 261) | 1;
            *(unsigned int *)(*(int *)idx + 368) = 1;
            sub_48d420(idx);
            *(unsigned int *)(*(int *)idx + 368) = 0;
        }
        *(char *)(*(int *)idx + 416) = *(char *)(*(int *)idx + 416) & 127;
        return 1;
    }
}

