// StrikeThink__10CLightning @0xb1210 size=1521
typedef struct st_4b1210_2 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4b1210_2;

typedef struct st_4b1210_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4b1210_1;

typedef struct st_4b1210_0 {
    unsigned int field_0;
} st_4b1210_0;

extern st_4b1210_0 *g_616878;
extern st_4b1210_0 *g_61687c;
extern st_4b1210_0 *g_616880;
extern st_4b1210_0 *g_616888;
extern st_4b1210_0 *g_616894;
extern st_4b1210_0 *g_6168b4;
extern st_4b1210_0 *g_6168dc;
extern st_4b1210_0 *g_61692c;
extern st_4b1210_1 *gpGlobals;

double StrikeThink__10CLightning(float idx)
{
    double v10;  // mm7
    double v11;  // mm0
    unsigned int *v12;  // eax
    unsigned int v13;  // eax
    unsigned int *v14;  // eax
    unsigned int v15;  // eax
    unsigned int v0;  // [bp-0x8c]
    float v1;  // [bp-0x8c]
    st_4b1210_2 **v2;  // [bp-0x64]
    st_4b1210_2 **v3;  // [bp-0x60]
    st_4b1210_2 **v4;  // [bp-0x60]
    char v5;  // [bp-0x5c]
    int v6;  // [bp-0xc]
    unsigned short v7;  // [bp-0x8]
    unsigned short v8;  // [bp-0x6]

    v10 = *(float *)(*(unsigned int *)&idx + 112);
    if (v10 != 0.0)
    {
        if (*(char *)(*(int *)idx + 416) & 4)
        {
            g_61692c(0, *(float *)(*(unsigned int *)&idx + 132));
            v10 = gpGlobals->field_0 + *(float *)(*(unsigned int *)&idx + 112);
            *(float *)(*(int *)idx + 260) = (float)(v11 + v10);
        }
        else
        {
            v10 = gpGlobals->field_0 + *(float *)(*(unsigned int *)&idx + 112) + *(float *)(*(unsigned int *)&idx + 132);
            *(float *)(*(int *)idx + 260) = (float)v10;
        }
    }
    *(unsigned int *)(*(unsigned int *)&idx + 100) = 1;
    if (*(int *)(*(unsigned int *)&idx + 108))
    {
        v3 = sub_488440(idx, *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
        v2 = sub_488440(idx, *(int *)(*(unsigned int *)&idx + 108) + gpGlobals->field_98);
        if (!v3)
            return v10;
        if (v2)
        {
            if ((sub_4888c0(v3) || sub_4888c0(v2)) && *(char *)(*(int *)idx + 416) & 8)
                return v10;
            g_616878(0, 23, 0, 0);
            if (sub_4888c0(v3) || sub_4888c0(v2))
            {
                if (!sub_4888c0(v2))
                {
                    v4 = v2;
                    v2 = v3;
                    v3 = v4;
                }
                if (!sub_4888c0(v3))
                {
                    g_616880(1);
                    v15 = g_6168dc(*v3->field_208);
                    g_616888(v15);
                    g_616894(*v2->field_8);
                    g_616894(*v2->field_c);
                    g_616894(*v2->field_10);
                }
                else
                {
                    g_616880(0);
                    g_616894(*v3->field_8);
                    g_616894(*v3->field_c);
                    g_616894(*v3->field_10);
                    g_616894(*v2->field_8);
                    g_616894(*v2->field_c);
                    v1 = *v2->field_10;
                    v14 = g_616894;
LABEL_4b15e9:
                    v14(v1);
                }
            }
            else
            {
                v0 = (!(*(char *)(*(int *)idx + 416) & 8) ? 8 : 24);
                g_616880((!(*(char *)(*(int *)idx + 416) & 8) ? 8 : 24));
                v13 = g_6168dc(*v3->field_208);
                g_616888(v13);
                *(unsigned int *)&v1 = g_6168dc(*v2->field_208);
                v14 = g_616888;
                goto LABEL_4b15e9;
            }
            g_616888(*(int *)(*(unsigned int *)&idx + 0x88));
            g_616880(*(int *)(*(unsigned int *)&idx + 144));
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 312);
            g_616880(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)(10.0 * *(float *)(*(unsigned int *)&idx + 112));
            g_616880(v6);
            g_616880(*(int *)(*(unsigned int *)&idx + 116));
            g_616880(*(int *)(*(unsigned int *)&idx + 120));
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 336);
            g_616880(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 340);
            g_616880(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 344);
            g_616880(v6);
            v8 = __fnstcw();
            v7 = v8 | 0xc00;
            v6 = (int)*(float *)(*(int *)idx + 332);
            g_616880(v6);
            v0 = *(int *)(*(unsigned int *)&idx + 128);
            g_616880(v0);
            g_61687c(v0);
            sub_489be0(idx, &*v3->field_8, &*v2->field_8);
            if (0.0 >= *(float *)(*(int *)idx + 480))
                return v10;
            sub_487b80(&*v3->field_8, &*v2->field_8, 0, 0, &v5);
            *(float *)(*(int *)idx + 484) = (float)(gpGlobals->field_0 - 1.0);
            sub_48bfc0(idx, &v5);
            return v10;
        }
        else
        {
            return v10;
        }
    }
    else if (!*(int *)(*(unsigned int *)&idx + 104))
    {
        sub_48de50(idx);
        return v10;
    }
    else
    {
        v12 = sub_488440(idx, *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
        if (!v12)
        {
            g_6168b4(1, "env_beam: unknown entity \"%s\"\n", *(int *)(*(unsigned int *)&idx + 104) + gpGlobals->field_98);
            return v10;
        }
        sub_489dc0(idx, *v12 + 8);
        return v10;
    }
}

