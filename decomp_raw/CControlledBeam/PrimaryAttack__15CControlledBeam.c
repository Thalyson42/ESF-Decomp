// PrimaryAttack__15CControlledBeam @0xa85e0 size=735
typedef struct st_4a85e0_0 {
    unsigned int field_0;
} st_4a85e0_0;

extern unsigned int gmsgPowerStruggle;
extern st_4a85e0_0 *g_616878;
extern st_4a85e0_0 *g_61687c;
extern st_4a85e0_0 *g_616884;

double PrimaryAttack__15CControlledBeam(float idx)
{
    double v10;  // mm0
    double v11;  // mm0
    double v12;  // mm1
    unsigned int *v13;  // edx
    int v0;  // [bp-0x6c]
    float v1;  // [bp-0x6c]
    int v2;  // [bp-0x5c]
    int v3;  // [bp-0x58]
    int v4;  // [bp-0x54]
    int v5;  // [bp-0x3c]
    unsigned short v6;  // [bp-0x1c]
    unsigned short v7;  // [bp-0x1a]
    int v8;  // [bp-0x18]

    sub_488640(v2, v3, v4);
    v11 = v10 + 0.2;
    *(float *)(*(unsigned int *)&idx + 156) = (float)v11;
    if (*(int *)(*(unsigned int *)&idx + 196) == 2 && *(int *)(*(unsigned int *)&idx + 200))
    {
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 708) && !*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 732))
        {
            if (*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 688))
            {
                v7 = __fnstcw();
                v6 = v7 | 0xc00;
                v8 = (int)((double)*(int *)(*(unsigned int *)&idx + 228) * 0.25);
                if (sub_48c980(*(int *)(*(unsigned int *)&idx + 128), v8))
                {
                    sub_48aef0(idx);
                    v7 = __fnstcw();
                    v6 = v7 | 0xc00;
                    v8 = (int)(v12 * (double)*(int *)(*(unsigned int *)&idx + 232) + *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 480));
                    if (v8 > 9999)
                        v8 = 9999;
                    v5 = v8;
                    *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 480) = (float)v5;
                }
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 860) = 1;
            }
            else if (*(int *)(*(int *)(*(unsigned int *)&idx + 200) + 684))
            {
                v7 = __fnstcw();
                v6 = v7 | 0xc00;
                v8 = (int)((double)*(int *)(*(unsigned int *)&idx + 228) * 0.25);
                if (sub_48c980(*(int *)(*(unsigned int *)&idx + 128), v8))
                {
                    sub_48aef0(idx);
                    v7 = __fnstcw();
                    v6 = v7 | 0xc00;
                    v8 = (int)(v12 * (double)*(int *)(*(unsigned int *)&idx + 232) + *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 480));
                    if (v8 > 9999)
                        v8 = 9999;
                    v5 = v8;
                    *(float *)(*(int *)*(int *)(*(unsigned int *)&idx + 200) + 480) = (float)v5;
                }
                *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 852) = 1;
                *(int *)(*(int *)(*(unsigned int *)&idx + 128) + 876) = *(int *)(*(int *)(*(unsigned int *)&idx + 200) + 704);
            }
            else
            {
                v1 = idx;
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(v1);
                sub_488640(v1);
                *(float *)(*(unsigned int *)&idx + 156) = (float)v11;
                return 0.2;
            }
            g_616878(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520));
            v7 = __fnstcw();
            v6 = v7 | 0xc00;
            v8 = (int)(*(float *)(*(int *)(*(unsigned int *)&idx + 200) + 696) * 100.0);
            v0 = v8;
            g_616884(v0);
            g_61687c(v0);
            return 0.2;
        }
        sub_48bd60(idx);
        v13 = *(int *)(*(unsigned int *)&idx + 200);
        if (v13[177])
            (*(int *)(v13[24] + 508))(v13);
        *(unsigned int **)(*(unsigned int *)&idx + 200) = NULL;
        return 0.2;
    }
    sub_48a630(idx);
    *(float *)(*(unsigned int *)&idx + 160) = *(float *)(*(unsigned int *)&idx + 156);
    return 0.2;
}

