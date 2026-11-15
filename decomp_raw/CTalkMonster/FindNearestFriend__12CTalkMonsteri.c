// FindNearestFriend__12CTalkMonsteri @0x125bb0 size=770
typedef struct st_525bb0_4 {
    char padding_0[384];
    unsigned int field_180;
} st_525bb0_4;

typedef struct st_525bb0_2 {
    unsigned int field_0;
} st_525bb0_2;

typedef struct st_525bb0_1 {
    char padding_0[76];
    struct st_525bb0_2 *field_4c;
    char padding_50[60];
    struct st_525bb0_2 *field_8c;
    char padding_90[368];
    struct st_525bb0_2 *field_200;
} st_525bb0_1;

typedef struct st_525bb0_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[196];
    float field_d8;
    char padding_dc[300];
    int field_208;
} st_525bb0_0;

typedef struct st_525bb0_3 {
    struct st_525bb0_0 *field_0;
    char padding_4[92];
    struct st_525bb0_1 *field_60;
} st_525bb0_3;

extern unsigned int _12CTalkMonster.m_szFriends[4];

st_525bb0_3 * FindNearestFriend__12CTalkMonsteri(st_525bb0_3 *a0, unsigned int a1)
{
    st_525bb0_3 *v22;  // edi
    unsigned int *v23;  // eax
    float v32;  // 112
    double v33;  // mm7
    double v34;  // mm6
    float v35;  // 112
    float v36;  // 112
    float v37;  // 112
    double v38;  // mm7
    double v39;  // mm6
    float v40;  // 112
    float v41;  // 112
    unsigned int *v24;  // edx
    float v42;  // 112
    double v43;  // mm7
    double v44;  // mm6
    int v25;  // eax
    int v27;  // esi
    st_525bb0_4 *v28;  // eax
    unsigned int *v29;  // edx
    float v30;  // 112
    float v31;  // 112
    int v0;  // [bp-0x100]
    int v1;  // [bp-0x100]
    float v2;  // [bp-0xfc]
    st_525bb0_3 *v3;  // [bp-0xf8]
    float v4;  // [bp-0xc4]
    float v5;  // [bp-0xc0]
    float v6;  // [bp-0xbc]
    float v7;  // [bp-0xb8]
    float v8;  // [bp-0xb4]
    float v9;  // [bp-0xb0]
    float v10;  // [bp-0xac]
    float v11;  // [bp-0xa4]
    float v12;  // [bp-0xa0]
    float v13;  // [bp-0x9c]
    unsigned int v14;  // [bp-0x84]
    unsigned int v15;  // [bp-0x80]
    unsigned int v16;  // [bp-0x7c]
    unsigned int v17;  // [bp-0x64]
    unsigned int v18;  // [bp-0x60]
    unsigned int v19;  // [bp-0x5c]
    char v20;  // [bp-0x44]
    float v21;  // [bp-0x34]

    v22 = NULL;
    v3 = NULL;
    v2 = 10000000.0f;
    v23 = a0->field_0;
    v24 = v23 + 2;
    *(float *)&v17 = *(float *)&v23[2];
    *(float *)&v18 = *(float *)&v24[1];
    *(float *)&v19 = *(float *)&v24[2];
    *(float *)&v19 = *(float *)&v23[54];
    v25 = 3;
    if (a1)
        v25 = 1;
    v0 = v25 - 1;
    if (v0 <= -0x1)
        return v3;
    do
    {
        v1 = v0;
        v27 = (!a1 ? _12CTalkMonster.m_szFriends[a0->field_60->field_200(a0, v1)] : "player");
        if (v27)
        {
            while (1)
            {
                v22 = sub_487e80(v22, v27);
                if (!v22)
                    break;
                if (v22 != a0 && v22->field_60->field_8c(v22) && (v28 = v22->field_60->field_4c(v22), v28 && v28->field_180 != 6 && v28->field_180 != 5))
                {
                    v29 = v22->field_0;
                    v14 = v29[2];
                    v15 = v29[3];
                    v16 = v29[4];
                    *(float *)&v16 = v22->field_0->field_d8;
                    v30 = *(float *)&v17 - *(float *)&v14;
                    v11 = v30;
                    v31 = *(float *)&v18 - *(float *)&v15;
                    v12 = v31;
                    v32 = *(float *)&v19 - *(float *)&v16;
                    v13 = v32;
                    v33 = v30 * v30 + v31 * v31 + v32 * v32;
                    v34 = sqrt(v33);
                    if (isnan(v34))
                        sub_487dc0(*(unsigned int *)&v33);
                    else
                        v33 = v34;
                    v7 = (float)v33;
                    if (v7 < v2 && (sub_487b80(&v17, &v14, 1, a0->field_0->field_208, &v20), v21 == 1.0f))
                    {
                        v35 = *(float *)&v17 - *(float *)&v14;
                        v4 = v35;
                        v36 = *(float *)&v18 - *(float *)&v15;
                        v5 = v36;
                        v37 = *(float *)&v19 - *(float *)&v16;
                        v6 = v37;
                        v38 = v35 * v35 + v36 * v36 + v37 * v37;
                        v39 = sqrt(v38);
                        if (isnan(v39))
                            sub_487dc0(*(unsigned int *)&v38);
                        else
                            v38 = v39;
                        v10 = (float)v38;
                        if (v10 < 500.0f)
                        {
                            v3 = v22;
                            v40 = *(float *)&v17 - *(float *)&v14;
                            v7 = v40;
                            v41 = *(float *)&v18 - *(float *)&v15;
                            v8 = v41;
                            v42 = *(float *)&v19 - *(float *)&v16;
                            v9 = v42;
                            v43 = v40 * v40 + v41 * v41 + v42 * v42;
                            v44 = sqrt(v43);
                            if (isnan(v44))
                                sub_487dc0(*(unsigned int *)&v43);
                            else
                                v43 = v44;
                            v2 = (float)v43;
                        }
                    }
                }
            }
        }
        v0 = v1 - 1;
    } while (v1 - 1 >= 0);
    return v3;
}

