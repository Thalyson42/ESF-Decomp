// Teleport__11CBasePlayer @0xf0500 size=631
typedef struct st_4f0500_0 {
    float field_0;
} st_4f0500_0;

extern st_4f0500_0 *gpGlobals;

double Teleport__11CBasePlayer(float a0)
{
    double v13;  // mm7
    unsigned int v14;  // esi
    double v15;  // mm6
    double v16;  // mm5
    double v17;  // mm6
    double v18;  // mm4
    double v19;  // mm4
    unsigned int v20;  // edx
    unsigned int v21;  // ecx
    double v22;  // mm7
    char v0;  // [bp-0x94]
    float v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    float v3;  // [bp-0x74]
    float v4;  // [bp-0x70]
    float v5;  // [bp-0x6c]
    float v6;  // [bp-0x54]
    float v7;  // [bp-0x50]
    float v8;  // [bp-0x4c]
    float v9;  // [bp-0x34]
    float v10;  // [bp-0x30]
    float v11;  // [bp-0x2c]

    if (*(char *)(*(int *)a0 + 423) & 4)
        return v22;
    v13 = 0.2 + *(float *)(*(unsigned int *)&a0 + 1436);
    if (v13 > *(float *)gpGlobals)
    {
        return v13;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 868))
    {
        return v13;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 808))
    {
        return v13;
    }
    else if (!(*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 140))(a0))
    {
        return v13;
    }
    else if (!*(int *)(*(unsigned int *)&a0 + 828))
    {
        if (*(int *)(*(unsigned int *)&a0 + 820) && !(*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 1892) + 4) + 0x44))(*(int *)(*(unsigned int *)&a0 + 1892)))
            return v13;
        if (*(int *)(*(unsigned int *)&a0 + 832))
        {
            return v13;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 892))
        {
            return v13;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 812))
        {
            return v13;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 1724))
        {
            return v13;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 816))
        {
            return v13;
        }
        else if (*(int *)(*(unsigned int *)&a0 + 1904))
        {
            return v13;
        }
        else if (sub_48c980(a0, 150))
        {
            sub_489390(*(int *)(*(int *)a0 + 520), 0, "weapons/teleport.wav", 0x3f800000, 0.800000011920929f, 0, 100);
            sub_488020(a0);
            v14 = *(int *)a0 + 32;
            v15 = *(float *)(*(int *)a0 + 32) * *(float *)(*(int *)a0 + 32) + *(float *)(v14 + 4) * *(float *)(v14 + 4) + *(float *)(v14 + 8) * *(float *)(v14 + 8);
            v16 = sqrt(v15);
            if (isnan(v16))
                sub_487dc0(*(unsigned int *)&v15);
            else
                v15 = v16;
            v1 = (float)v15;
            if (v1 == 0.0f)
            {
                v3 = 0.0f;
                v4 = 0.0f;
                v5 = 1.0;
            }
            else
            {
                v17 = 1.0 / v1;
                v3 = (float)(v17 * *(float *)v14);
                v4 = (float)(v17 * *(float *)(v14 + 4));
                v5 = (float)(v17 * *(float *)(v14 + 8));
            }
            v18 = 400.0 * v3;
            v6 = (float)v18;
            v19 = 400.0 * v4;
            v7 = (float)v19;
            v8 = (float)(400.0 * v5);
            v20 = *(int *)a0;
            v21 = v20 + 8;
            v9 = (float)(v18 + *(float *)(v20 + 8));
            v10 = (float)(v19 + *(float *)(v21 + 4));
            v11 = *(float *)(v21 + 8) + v8;
            sub_488460(v21, &v9, 0, 1, *(int *)(v20 + 520), &v0);
            sub_48db50(*(int *)a0, &v2);
            *(float *)(*(unsigned int *)&a0 + 1436) = *(float *)gpGlobals;
            return v13;
        }
        else
        {
            return v13;
        }
    }
    else
    {
        return v13;
    }
}

