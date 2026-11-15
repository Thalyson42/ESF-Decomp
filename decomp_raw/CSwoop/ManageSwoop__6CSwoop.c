// ManageSwoop__6CSwoop @0x123a90 size=851
typedef struct st_523a90_3 {
    char padding_0[88];
    unsigned int field_58;
} st_523a90_3;

typedef struct st_523a90_2 {
    char padding_0[92];
    unsigned int field_5c;
} st_523a90_2;

typedef struct st_523a90_1 {
    char padding_0[96];
    unsigned int field_60;
} st_523a90_1;

typedef struct st_523a90_0 {
    float field_0;
} st_523a90_0;

extern st_523a90_0 *gpGlobals;

unsigned int ManageSwoop__6CSwoop(float a0)
{
    unsigned int v5;  // eax
    unsigned int v6;  // edx
    float *v15;  // esi
    unsigned int *v17;  // edx
    unsigned int v7;  // ecx
    int v8;  // eax
    float *v10;  // ecx
    int v12;  // eax
    float *v13;  // ecx
    st_523a90_1 *v14;  // edx
    st_523a90_3 *v0;  // [bp-0x24]
    st_523a90_1 *v1;  // [bp-0x20]
    st_523a90_2 *v2;  // [bp-0x1c]
    int iter;  // [bp-0x18], Other Possible Types: unsigned int

    if (!*(int *)(*(unsigned int *)&a0 + 120))
        return v5;
    v5 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 120) + 96) + 140))(*(int *)(*(unsigned int *)&a0 + 120));
    if (!v5)
        return v5;
    sub_489890(a0);
    if (!sub_48c460(a0))
    {
        iter = 0;
        do
        {
            v6 = iter * 16;
            if (*(float *)(v6 + *(unsigned int *)&a0 + 24) != 0.0f)
                sub_48d4a0(a0, *(unsigned int *)&a0 + v6 + 24);
        } while ((iter += 1, iter <= 5));
    }
    else
    {
        iter = 0;
        v2 = *(unsigned int *)&a0 + 28;
        do
        {
            if (sub_487d10(a0, iter))
            {
                v7 = iter * 16;
                if (!*(int *)(v7 + *(unsigned int *)&a0 + 36))
                {
                    v13 = iter * 16;
                    v14 = *(unsigned int *)&a0 + 24;
                    if (*(float *)(v13 + v14) == 0.0f)
                    {
                        *(float *)(v13 + v14) = *(float *)gpGlobals;
                        continue;
                    }
                }
                else if (*(float *)(v7 + *(unsigned int *)&a0 + 32) == 0.0)
                {
                    v10 = iter * 16;
                    if (*(float *)gpGlobals - *(float *)(v10 + v2) < 0.35)
                    {
                        *(float *)((char *)v10 + *(unsigned int *)&a0 + 32) = *(float *)gpGlobals;
                        continue;
                    }
                    else
                    {
                        sub_488f60(a0, sub_48b040(a0, iter));
                        v12 = *(unsigned int *)&a0 + iter * 16 + 24;
                        goto LABEL_523d8a;
                    }
                }
                else if (sub_48cf00(a0, *(unsigned int *)&a0 + v7 + 24, iter))
                {
                    v8 = sub_489ca0(a0);
                    if (sub_48c980(*(int *)(*(unsigned int *)&a0 + 120), v8))
                    {
                        if (*(int *)(*(unsigned int *)&a0 + 4))
                        {
                            *(unsigned int *)(*(unsigned int *)&a0 + 12) = 0;
                            sub_488f60(a0, sub_48b040(a0, *(int *)a0));
                        }
                        sub_48a6e0(a0, iter);
                        sub_48b630(a0, iter);
                        continue;
                    }
                }
                goto LABEL_523d8a;
            }
            v15 = iter * 16;
            v1 = *(unsigned int *)&a0 + 24;
            if (*(float *)(v15 + v1) != 0.0f && *(float *)(v15 + v2) == 0.0f && !sub_487d10(a0, iter))
            {
                if (*(float *)gpGlobals - *(float *)(v15 + v1) >= 0.4)
                {
                    sub_488f60(a0, sub_48b040(a0, iter));
                    goto LABEL_523d83;
                }
                else
                {
                    v17 = iter * 16;
                    *(float *)(v17 + v2) = *(float *)gpGlobals;
                    *(unsigned int *)((char *)v17 + *(unsigned int *)&a0 + 36) = 1;
                }
            }
            v15 = iter * 16;
            v0 = *(unsigned int *)&a0 + 32;
            if (*(float *)(v15 + v0) == 0.0f || sub_487d10(a0, iter))
                continue;
            if (*(float *)gpGlobals - *(float *)(v15 + v0) < 0.05)
            {
LABEL_523d83:
                v12 = *(unsigned int *)&a0 + (char *)v15 + 24;
LABEL_523d8a:
                sub_48d4a0(a0, v12);
                goto LABEL_523dba;
            }
            else
            {
                sub_48d4a0(a0, *(unsigned int *)&a0 + iter * 16 + 24);
                if (iter != *(int *)a0)
                    continue;
                sub_48a910(a0);
LABEL_523dba:
            }
        } while ((iter += 1, (int)iter <= 5));
    }
    if (!*(int *)(*(unsigned int *)&a0 + 4))
        return v5;
    sub_488240(a0);
    return v5;
}

