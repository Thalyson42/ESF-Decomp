// ManageEnemyList__4CBot @0x153ef0 size=829
typedef struct st_553ef0_1 {
    char padding_0[164];
    struct st_553ef0_2 *field_a4;
} st_553ef0_1;

typedef struct st_553ef0_3 {
    struct st_553ef0_0 *field_0;
    char padding_4[92];
    struct st_553ef0_1 *field_60;
    char padding_64[720];
    unsigned int field_334;
    unsigned int field_338;
    char padding_33c[1076];
    unsigned int field_770;
} st_553ef0_3;

typedef struct st_553ef0_2 {
    unsigned int field_0;
} st_553ef0_2;

typedef struct st_553ef0_4 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[244];
    unsigned int field_100;
    char padding_104[153];
    char field_19d;
} st_553ef0_4;

typedef struct st_553ef0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[244];
    unsigned int field_108;
    char padding_10c[153];
    char field_1a5;
} st_553ef0_0;

extern int EnemyPriorityCmp__FPCvT0;

int ManageEnemyList__4CBot(float a0)
{
    st_553ef0_3 *v16;  // edx
    int *v17;  // edi
    float v26;  // 112
    double v27;  // mm7
    double v28;  // mm6
    float v29;  // 128
    float v30;  // 120
    st_553ef0_3 **v18;  // esi
    unsigned int iter;  // edi
    unsigned int v20;  // eax
    st_553ef0_3 *v21;  // esi
    st_553ef0_4 *v22;  // edx
    unsigned int idx;  // edx
    float v24;  // 112
    float v25;  // 112
    int v0;  // [bp-0xa8], Other Possible Types: unsigned int
    int v1;  // [bp-0xa4]
    char v2;  // [bp-0x86]
    char v3;  // [bp-0x85]
    st_553ef0_3 **v4;  // [bp-0x84]
    char v5;  // [bp-0x7d]
    float v6;  // [bp-0x7c]
    short node;  // [bp-0x76]
    float v8;  // [bp-0x58]
    float v9;  // [bp-0x44]
    float v10;  // [bp-0x40]
    float v11;  // [bp-0x3c]
    unsigned int v12;  // [bp-0x24]
    unsigned int v13;  // [bp-0x20]
    unsigned int v14;  // [bp-0x1c]

    node = 0;
    v6 = 9999.900390625f;
    v4 = *(unsigned int *)&a0 + 2888;
    do
    {
        v5 = 0;
        v0 = v4[2 * node];
        v3 = sub_489f70(a0, v0);
        if (!v3 || (v0 = v4[2 * node], !(char)sub_48bf70(a0, v0)))
            v5 = 1;
        if (v5)
        {
            v16 = sub_489630(a0);
            if (v16)
            {
                v4[2 * node] = v16;
            }
            else if (!v3)
            {
                *(unsigned short *)&v1 = 1;
                *(unsigned short *)&v0 = 0;
                v17 = node * 8;
                v18 = *(unsigned int *)&a0 + 2888;
                if ((char)sub_489a70(*(int *)(v17 + v18), v0, v1))
                    *(int *)(*(unsigned int *)&a0 + 2928) = *(int *)(v17 + v18);
                v4[2 * node] = 0;
            }
        }
        node += 1;
    } while (node <= 3);
    node = 0;
    do
    {
        iter = 1;
        v20 = node * 8;
        v21 = *(int *)(v20 + *(unsigned int *)&a0 + 2888);
        if (!v21)
        {
            *(unsigned short *)(v20 + *(unsigned int *)&a0 + 2884) = 0xff9c;
        }
        else
        {
            if (v21->field_770)
                iter = 0;
            v2 = 0;
            if (!v21->field_60->field_a4(v21))
                v2 = (v21->field_0->field_1a5 & 32) != 0;
            if (v2 && v21 && *(int *)&v21[1].padding_33c[188] != *(unsigned int *)&a0)
            {
                *(unsigned short *)&v1 = 1;
                *(unsigned short *)&v0 = 1;
                if ((char)sub_489a70(*(int *)&v21[1].padding_33c[188], v0, v1))
                    iter -= 2;
            }
            if (v21->field_0->field_108 == 11)
                iter += 2;
            if (v21->field_334 || v21->field_338)
                iter += 2;
            if ((short)sub_48aab0(a0, v21) > 64)
                iter += 1;
            if ((char)sub_489330(a0, v21))
                iter += 1;
            v22 = &v21->field_0->field_8;
            *(float *)&v12 = *(float *)&v21->field_0->field_8;
            *(float *)&v13 = *(float *)&v22->field_4;
            *(float *)&v14 = *(float *)&v22->field_8;
            idx = *(int *)a0 + 8;
            v24 = *(float *)&v12 - *(float *)(*(int *)a0 + 8);
            v9 = v24;
            v25 = *(float *)&v13 - *(float *)(idx + 4);
            v10 = v25;
            v26 = *(float *)&v14 - *(float *)(idx + 8);
            v11 = v26;
            v27 = v24 * v24 + v25 * v25 + v26 * v26;
            v28 = sqrt(v27);
            if (isnan(v28))
                sub_487dc0(*(unsigned int *)&v27);
            else
                v27 = v28;
            v8 = (float)v27;
            v29 = v8;
            if (v29 < v6)
            {
                v30 = v6 - v29;
                iter = (v30 > 300.0f ? iter + 1 : v30 > 800.0f ? iter + 2 : iter + 3);
                v6 = v29;
            }
            if (v29 < 400.0f)
            {
                iter += 2;
            }
            else if (v29 < 800.0f)
            {
                iter += 1;
            }
            v0 = v21;
            if (!(char)sub_48bf70(a0, v0))
                iter -= 2;
            *(unsigned short *)(*(unsigned int *)&a0 + node * 8 + 2884) = iter;
        }
    } while ((node += 1, node <= 3));
    return sub_48b520(*(unsigned int *)&a0 + 2884, 4, 8, &EnemyPriorityCmp__FPCvT0);
}

