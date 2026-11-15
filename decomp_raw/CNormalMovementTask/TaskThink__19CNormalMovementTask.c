// TaskThink__19CNormalMovementTask @0x171850 size=636
typedef struct st_571850_0 {
    float field_0;
} st_571850_0;

typedef struct st_571850_1 {
    unsigned int field_0;
} st_571850_1;

extern unsigned int g_teamplay;
extern st_571850_1 *g_61692c;
extern st_571850_0 *gpGlobals;
extern char g_6253c8;
extern unsigned int g_626824[4];
extern unsigned int num_waypoints;

double TaskThink__19CNormalMovementTask(float idx)
{
    unsigned int *v3;  // edx
    double v4;  // mm7
    unsigned int v5;  // edx
    unsigned int *v6;  // esi
    unsigned int v7;  // edx
    double v8;  // 128
    double v9;  // mm7
    char v0;  // [bp-0x9]
    int v1;  // [bp-0x8]

    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 12) + 252) = 0;
    *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 212) = *(float *)(*(int *)(*(unsigned int *)&idx + 12) + 248);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 12) + 216) = 0;
    v0 = 0;
    v1 = sub_48a780(*(int *)(*(unsigned int *)&idx + 8));
    if ((double)v1 == 0.0)
    {
        return (double)v1;
    }
    else if (g_6253c8)
    {
        v3 = *(int *)(*(unsigned int *)&idx + 8);
        v4 = *(float *)&v3[1036];
        if (v4 <= *(float *)gpGlobals && v3[200] && num_waypoints)
        {
            if (!(char)sub_48b150(v3))
            {
                v4 = 400.0;
                v5 = sub_489f20(*(int *)(*(unsigned int *)&idx + 12), 400.0f, (!g_teamplay ? 0xffffffff : *(int *)(*(int *)(*(unsigned int *)&idx + 12) + 556)));
                if (v5 == 0xffffffff)
                    goto LABEL_5719bf;
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 8) + 4104) = v5;
                v6 = *(int *)(*(unsigned int *)&idx + 8);
                v7 = v5 * 16;
                v6[0x3fe] = *(int *)((char *)&g_626824[0] + v7);
                v6[0x3ff] = *(int *)((char *)&g_626824[0] + v7 + 4);
                v6[0x400] = *(int *)((char *)&g_626824[0] + v7 + 8);
                v4 = *(float *)gpGlobals;
                *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 4100) = (float)v4;
            }
            v0 = sub_48b5b0(*(int *)(*(unsigned int *)&idx + 8));
        }
LABEL_5719bf:
        if (v0)
            return v4;
        v8 = *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 2848);
        if (v8 < *(float *)gpGlobals)
        {
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 8) + 4200) = 16;
            *(unsigned int *)(*(unsigned int *)&idx + 4) = 2;
            return v8;
        }
        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 0xff4) <= *(float *)gpGlobals)
            sub_48ab10(idx);
        sub_48d730(*(int *)(*(unsigned int *)&idx + 8));
        if (*(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3464) > *(float *)gpGlobals)
            return *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3464);
        v9 = *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3468);
        if (v9 < *(float *)gpGlobals)
        {
            sub_48a190(idx);
            sub_48a880(idx);
            g_61692c(0.800000011920929f, 1.2000000476837158f);
            v9 = 0.800000011920929 + *(float *)gpGlobals;
            *(float *)(*(int *)(*(unsigned int *)&idx + 8) + 3468) = (float)v9;
        }
        sub_489410(idx);
        return v9;
    }
    else
    {
        return (double)v1;
    }
}

