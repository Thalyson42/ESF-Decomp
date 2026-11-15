// AdvanceRoute__12CBaseMonsterf @0xd5f60 size=408
typedef struct st_4d5f60_0 {
    char padding_0[172];
    struct st_4d5f60_1 *field_ac;
} st_4d5f60_0;

typedef struct st_4d5f60_1 {
    unsigned int field_0;
} st_4d5f60_1;

typedef struct st_4d5f60_3 {
    char padding_0[4];
    struct st_4d5f60_2 *field_4;
    char padding_8[104];
    unsigned int field_70;
    char padding_74[252];
    float field_170;
    char padding_174[44];
    char field_1a0;
    char padding_1a1[119];
    unsigned int field_218;
    char padding_21c[68];
    int field_260;
} st_4d5f60_3;

typedef struct st_4d5f60_2 {
    char padding_0[96];
    struct st_4d5f60_0 *field_60;
} st_4d5f60_2;

extern st_4d5f60_1 *g_6168b4;
extern int WorldGraph;
extern unsigned int g_617170;

double AdvanceRoute__12CBaseMonsterf(st_4d5f60_3 *a0, float a1)
{
    double v2;  // mm7
    double v3;  // mm7
    void* v4;  // edx
    char *v5;  // eax
    char *v6;  // ecx
    char *v7;  // edx
    double v9;  // mm6
    double v10;  // mm7
    double v11;  // mm7
    int v0;  // [bp-0x1c]
    char v1;  // [bp-0x18], Other Possible Types: int

    if (a0->field_218 != 7)
    {
        v4 = a0->field_218 * 16;
        v5 = &a0->field_1a0;
        if (*(char *)(v4 + v5) >= 0)
        {
            if ((*(int *)(v4 + v5) & 0xfffffe7f) == 16)
                a0->field_4 = a0->field_4->field_60->field_ac(a0->field_4);
            v6 = a0->field_218 * 16;
            v7 = &a0->field_1a0;
            if (*(char *)(v6 + v7) & 32 && v7[16 + 16 * a0->field_218] & 32)
            {
                v0 = sub_488f40(&WorldGraph, a0 + v6 + 404, a0);
                sub_48d800(&WorldGraph, v0, sub_488f40(&WorldGraph, &(a0->padding_0)[4 * a0->field_218 + 420], a0), &v1);
                if (v1 >= 0 && *(int *)(g_617170 + v1 * 24 + 8) && sub_48a1f0(&WorldGraph, v0, *(int *)(g_617170 + v1 * 24 + 8), a0->field_260, 0) && *(int *)(g_617170 + v1 * 24 + 8))
                {
                    sub_48c7b0(a0, *(int *)(g_617170 + v1 * 24 + 8));
                    a0->field_170 = (float)v9;
                }
            }
            a0->field_218 = a0->field_218 + 1;
            return v10;
        }
        else
        {
            v11 = 0.2 * *(float *)&a0->field_70;
            if (v11 <= a1)
                return v11;
            sub_48c820(a0);
            return v11;
        }
    }
    else if (!sub_48d390(a0))
    {
        g_6168b4(2, "Can't Refresh Route!!\n");
        return v2;
    }
    else
    {
        return v3;
    }
}

