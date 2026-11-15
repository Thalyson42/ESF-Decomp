// Use__14CMomentaryDoorP11CBaseEntityT18USE_TYPEf @0xad900 size=447
typedef struct st_4ad900_1 {
    struct st_4ad900_0 *field_0;
    char padding_4[152];
    float field_9c;
    float field_a0;
    float field_a4;
    float field_a8;
    float field_ac;
    float field_b0;
} st_4ad900_1;

typedef struct st_4ad900_0 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[236];
    float field_100;
    float field_104;
    char padding_108[228];
    unsigned int field_1ec;
    char padding_1f0[24];
    int field_208;
} st_4ad900_0;

typedef struct st_4ad900_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4ad900_2;

extern st_4ad900_2 *gpGlobals;

double Use__14CMomentaryDoorP11CBaseEntityT18USE_TYPEf(st_4ad900_1 *a0, unsigned int a1, unsigned int a2, unsigned int a3, float a4)
{
    double v14;  // mm7
    unsigned int *v15;  // eax
    unsigned int *v16;  // edx
    unsigned int *v17;  // edx
    float v18;  // 112
    float v19;  // 112
    float v20;  // 112
    double v21;  // mm7
    double v22;  // mm6
    double v23;  // mm7
    float v0;  // [bp-0x78]
    float v1;  // [bp-0x74]
    float v2;  // [bp-0x70]
    float v3;  // [bp-0x6c]
    float v4;  // [bp-0x68]
    float v5;  // [bp-0x64]
    double v6;  // [bp-0x60]
    float v7;  // [bp-0x5c]
    float v8;  // [bp-0x54]
    float v9;  // [bp-0x50]
    float v10;  // [bp-0x4c]
    float v11;  // [bp-0x34]
    float v12;  // [bp-0x30]
    double v13;  // [bp-0x2c]

    v14 = a4;
    if (a3 == 2)
    {
        if (1.0 < v14)
            v14 = 1.0;
        v15 = &a0->field_a8;
        v16 = &a0->field_9c;
        v1 = a0->field_a8 - a0->field_9c;
        v2 = *(float *)&v15[1] - *(float *)&v16[1];
        v3 = *(float *)&v15[2] - *(float *)&v16[2];
        v8 = (float)(v14 * v1);
        v9 = (float)(v14 * v2);
        v10 = (float)(v14 * v3);
        v11 = a0->field_9c + v8;
        v12 = *(float *)&v16[1] + v9;
        v13 = *(float *)&v16[2] + v10;
        v17 = &a0->field_0->field_8;
        v18 = v11 - a0->field_0->field_8;
        v1 = v18;
        v19 = v12 - *(float *)&v17[1];
        v2 = v19;
        v20 = (float)(v13 - *(float *)&v17[2]);
        v3 = v20;
        v21 = v18 * v18 + v19 * v19 + v20 * v20;
        v22 = sqrt(v21);
        if (isnan(v22))
            sqrt(*(unsigned int *)&v21);
        else
            v21 = v22;
        v7 = (float)v21;
        v23 = v7 * 10.0;
        v0 = (float)v23;
        v14 = 0.0;
        if (v23 != 0.0)
        {
            if (a0->field_0->field_104 >= a0->field_0->field_100 && a0->field_0->field_104 != 0.0f)
            {
                v4 = v11;
                v5 = v12;
                v6 = v13;
                CBaseToggle::LinearMove(a0, &v4, v0);
                return v13;
            }
            EMIT_SOUND_DYN(a0->field_0->field_208, 6, a0->field_0->field_1ec + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
            v4 = v11;
            v5 = v12;
            v6 = v13;
            CBaseToggle::LinearMove(a0, &v4, v0);
            return v13;
        }
    }
    return v14;
}

