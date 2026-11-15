// Think__30CHalfLifeCaptureTheDragonBalls @0x9af20 size=601
typedef struct st_49af20_3 {
    char padding_0[160];
    struct st_49af20_4 *field_a0;
} st_49af20_3;

typedef struct st_49af20_5 {
    char padding_0[96];
    struct st_49af20_3 *field_60;
    char padding_64[1748];
    unsigned int field_738;
} st_49af20_5;

typedef struct st_49af20_4 {
    unsigned int field_0;
} st_49af20_4;

typedef struct st_49af20_2 {
    char padding_0[628];
    unsigned int field_274;
} st_49af20_2;

typedef struct st_49af20_1 {
    char padding_0[628];
    unsigned int field_274;
    int field_278;
} st_49af20_1;

typedef struct st_49af20_0 {
    float field_0;
    char padding_4[140];
    int field_90;
} st_49af20_0;

extern float g_5bcfdc;
extern unsigned int g_fGameOver;
extern st_49af20_0 *gpGlobals;

int Think__30CHalfLifeCaptureTheDragonBalls(float idx)
{
    unsigned int *v4;  // eax
    st_49af20_1 *v5;  // eax
    unsigned int index;  // ecx
    int v15;  // edi
    int i;  // esi
    st_49af20_2 *v7;  // eax
    int v8;  // esi
    unsigned int v9;  // edi
    int *v10;  // eax
    int idx1;  // edi
    int v12;  // edi
    st_49af20_5 *v13;  // esi
    unsigned int *v0;  // [bp-0x90]
    float v1;  // [bp-0x8c]
    int v2;  // [bp-0x84]

    v4 = (unsigned int *)idx;
    if (v4[0x99] || v4[166])
    {
        if (sub_488600(idx))
        {
            v5 = (st_49af20_1 *)idx;
            if (!v5->field_274)
            {
                v5->field_274 = 1;
                i = 0;
                do
                {
                    sub_48d450((&v5->field_278)[i]);
                    i += 1;
                } while (i <= 6);
            }
        }
        else
        {
            v7 = (st_49af20_2 *)idx;
            if (v7->field_274)
            {
                v7->field_274 = 0;
                v8 = 0;
                v9 = v7 + 1;
                do
                {
                    v10 = v8 * 4;
                    if (*(int *)((char *)v10 + v9))
                        sub_48d9a0(*(int *)((char *)v10 + v9));
                } while ((v8 += 1, v8 <= 6));
                sub_48cc00(*(int *)(*(unsigned int *)&idx + 660));
                *(unsigned int *)(*(unsigned int *)&idx + 660) = 0;
            }
        }
        v1 = g_5bcfdc;
        if (v1 != 0.0f && !g_fGameOver)
        {
            idx1 = 0;
            do
            {
                (&v2)[idx1] = 0;
                idx1 += 1;
            } while (idx1 <= 31);
            v12 = 1;
            if (1 <= gpGlobals->field_90)
            {
                v0 = &v2;
                do
                {
                    v13 = sub_48a500(v12);
                    if (v13 && v13->field_60->field_a0(v13))
                    {
                        index = (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 0xcc))(idx, &v13[1].padding_64[508]) + 1;
                        if (index)
                            v0[index] = v0[index] + v13->field_738;
                    }
                } while ((v12 += 1, v12 <= gpGlobals->field_90));
            }
            v15 = 1;
            do
            {
                if ((double)(&v2)[v15] >= v1)
                    return (*(int *)(*(int *)(*(unsigned int *)&idx + 0x44) + 272))(idx);
            } while ((v15 += 1, v15 <= 31));
        }
    }
    else if (!v4[154] || *(float *)(*(unsigned int *)&idx + 624) < gpGlobals->field_0)
    {
        sub_48a870(idx);
        *(unsigned int *)(*(unsigned int *)&idx + 620) = 1;
    }
    return sub_48cdf0(idx);
}

