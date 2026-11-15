// EvaluateTrain__16CFuncTrackChangeP10CPathTrack @0xed280 size=315
typedef struct st_4ed280_4 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_4ed280_4;

typedef struct st_4ed280_3 {
    struct st_4ed280_4 *field_0;
    char padding_4[296];
    struct st_4ed280_1 *field_12c;
} st_4ed280_3;

typedef struct st_4ed280_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[484];
    float field_1f8;
} st_4ed280_2;

typedef struct st_4ed280_1 {
    struct st_4ed280_2 *field_0;
    char padding_4[96];
    struct st_4ed280_0 *field_64;
    float field_68;
} st_4ed280_1;

typedef struct st_4ed280_0 {
    char padding_0[108];
    struct st_4ed280_0 *field_6c;
    struct st_4ed280_0 *field_70;
} st_4ed280_0;

double EvaluateTrain__16CFuncTrackChangeP10CPathTrack(st_4ed280_3 *a0, st_4ed280_0 *a1)
{
    double v4;  // mm7
    unsigned int *v5;  // esi
    unsigned int *v6;  // edx
    float v7;  // 112
    float v8;  // 112
    double v9;  // mm7
    double v10;  // mm6
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x24]
    float v2;  // [bp-0x20]
    float v3;  // [bp-0x1c]

    if (a1 && a0->field_12c && (a0->field_12c->field_64 == a1 || a1->field_70 && a0->field_12c->field_64 == a1->field_70 || a1->field_6c && a0->field_12c->field_64 == a1->field_6c))
    {
        v4 = a0->field_12c->field_0->field_1f8;
        if (v4 == 0.0)
        {
            v5 = &a0->field_0->field_8;
            v6 = &a0->field_12c->field_0->field_8;
            v7 = a0->field_0->field_8 - a0->field_12c->field_0->field_8;
            v1 = v7;
            v8 = *(float *)&v5[1] - *(float *)&v6[1];
            v2 = v8;
            v3 = *(float *)&v5[2] - *(float *)&v6[2];
            v9 = v7 * v7 + v8 * v8;
            v10 = sqrt(v9);
            if (isnan(v10))
                sqrt(*(unsigned int *)&v9);
            else
                v9 = v10;
            v0 = (float)v9;
            v4 = v0;
            if (v4 < a0->field_12c->field_68)
            {
                return v4;
            }
            else if (a0->field_12c->field_68 + 150.0 < v4)
            {
                return v4;
            }
        }
        return v4;
    }
    return v4;
}

