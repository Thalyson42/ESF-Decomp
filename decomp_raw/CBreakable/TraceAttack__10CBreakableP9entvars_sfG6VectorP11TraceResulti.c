// TraceAttack__10CBreakableP9entvars_sfG6VectorP11TraceResulti @0xc2520 size=359
typedef struct st_4c2520_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4c2520_1;

typedef struct st_4c2520_2 {
    struct st_4c2520_1 *field_0;
    char padding_4[104];
    unsigned int field_6c;
} st_4c2520_2;

typedef struct st_4c2520_0 {
    unsigned int field_0;
} st_4c2520_0;

extern st_4c2520_0 *g_616928;
extern st_4c2520_0 *g_61692c;

float TraceAttack__10CBreakableP9entvars_sfG6VectorP11TraceResulti(st_4c2520_2 *a0, int a1, float a2, float *a3, int a4, int a5)
{
    unsigned int v5;  // eax
    unsigned int v6;  // edx
    int v7;  // eax
    char v0[32];  // [bp-0x5c]
    char v1[4];  // [bp-0x28], Other Possible Types: int
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]

    if (g_616928(0, 1))
    {
        if (a0->field_6c != 6)
        {
            if (a0->field_6c != 7)
            {
                v2 = *a3;
                v3 = a3[1];
                v4 = a3[2];
                sub_48d460(a0, a1, a2, &v2, a4, a5);
                return a2;
            }
            g_61692c(0.5f, 1.5f);
            sub_48b940(a4 + 20, 0.5f);
            goto LABEL_4c2644;
        }
        sub_48a3b0(a4 + 20);
        strncpy(v0, "333?", 4);
        g_61692c(v0, 0x3f800000);
        strncpy(v1, "333?", 4);
        v5 = g_616928(0, 1);
        if (!v5)
        {
            v6 = a0->field_0->field_208;
            v7 = "buttons/spark5.wav";
            goto LABEL_4c25e5;
        }
        else if (v5 == 1)
        {
            v6 = a0->field_0->field_208;
            v7 = "buttons/spark6.wav";
LABEL_4c25e5:
            sub_489390(v6, 2, v7, v1, 0.800000011920929f, 0, 100);
LABEL_4c2644:
        }
    }
    v2 = *a3;
    v3 = a3[1];
    v4 = a3[2];
    sub_48d460(a0, a1, a2, &v2, a4, a5);
    return a2;
}

