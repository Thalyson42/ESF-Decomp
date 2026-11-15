// CreateSuperBot__11CBotManagersPCcss @0x13eea0 size=768
typedef struct st_53eea0_2 {
    char padding_0[4];
    char field_4;
    char padding_5[11];
    float field_10;
    char padding_14[24];
    char field_2c;
} st_53eea0_2;

typedef struct st_53eea0_1 {
    float field_0;
} st_53eea0_1;

typedef struct st_53eea0_0 {
    unsigned int field_0;
} st_53eea0_0;

extern st_53eea0_0 *g_6168a4;
extern st_53eea0_0 *g_6168ac;
extern st_53eea0_0 *g_6168b4;
extern st_53eea0_0 *g_6168c4;
extern st_53eea0_0 *g_6168d8;
extern st_53eea0_0 *g_61695c;
extern st_53eea0_1 *gpGlobals;
extern int BotManager;

unsigned int * CreateSuperBot__11CBotManagersPCcss(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    char *v7;  // edx
    unsigned int v8;  // 4156
    char *v17;  // edx
    unsigned int *v18;  // edi
    unsigned int v19;  // esi
    unsigned int v20;  // edx
    int v21;  // esi
    st_53eea0_2 *v22;  // ecx
    float *v23;  // eax
    double v24;  // mm7
    char *v9;  // esi
    unsigned int v10;  // ecx
    char *v11;  // edi
    char *v12;  // edi
    char *v13;  // ecx
    char *v14;  // edi
    char *iter;  // edi
    char *i;  // ecx
    char *v0;  // [bp-0x164]
    char *v1;  // [bp-0x160]
    unsigned short v2;  // [bp-0x15a]
    short v3;  // [bp-0x158]
    short v4;  // [bp-0x156]
    char v5;  // [bp-0x144]
    uint3904_t v6;  // [bp-0xc4]

    *(uint3904_t **)((char *)&v6 + 192) = (char *)&v6 + 196;
    v7 = *(unsigned int *)((void*)&v6 + 208);
    v4 = *(unsigned int *)((void*)&v6 + 0xcc);
    v3 = *(unsigned int *)((void*)&v6 + 212);
    v2 = *(unsigned int *)((void*)&v6 + 216);
    v8 = _ccall(14, 14, v2, 0, 0);
    if (v8 & 1)
    {
        v2 = 1;
    }
    else if ((short)v2 > 3)
    {
        v2 = 3;
    }
    if (v7 && *v7)
    {
        sub_48d360((char *)&v6 + 64, v7, 31);
        *((char *)&v6 + 96) = 0;
    }
    else if (*(short *)(*(unsigned int *)((void*)&v6 + 200) + 62) > 0)
    {
        sub_4898f0(&BotManager, (char *)&v6 + 64);
    }
    else
    {
        *(unsigned int *)((char *)&v6 + 64) = 7630658;
    }
    v9 = &v6;
    sub_48d990(&v6, "[SBot%i]", v2);
    v10 = 0xffffffff;
    v11 = v9;
    do
    {
        v12 = v11;
    } while (v10 && (v10 -= 1, v11 = v12 + 1, *v12));
    sub_488150(&v6, (char *)&v6 + 64, 32 - ~v10);
    v13 = 0xffffffff;
    do
    {
        v14 = v9;
    } while (v13 && (v13 -= 1, v9 = v14 + 1, *v14));
    iter = ~v13 - 1;
    v1 = NULL;
    if (v1 < iter)
    {
        v0 = &v6;
        do
        {
            if ((char)(*(char *)(v1 + v0) - 32) > 94 || *(char *)(v1 + v0) == 0x22)
            {
                if (v1 < iter)
                {
                    i = v1;
                    do
                    {
                        v17 = i + 1;
                        *(char *)(i + &v6) = *(char *)(v17 + &v6);
                        i = v17;
                    } while (i < iter);
                    iter -= 1;
                }
                else
                {
                    iter -= 1;
                }
            }
        } while ((v1 += 1, v1 < iter));
    }
    v18 = g_61695c(&v6);
    v19 = 0;
    if (!v18 || !g_6168d8(v18))
        v19 = 1;
    if (v19)
    {
        v20 = "Max. Players reached.  Can't create bot!\n";
    }
    else
    {
        g_6168b4(1, "Creating bot...\n");
        g_6168c4(v18);
        v18[31] = 0;
        v18[121] = 0;
        v21 = sub_48ceb0((!v18 ? 0 : v18 + 32));
        if (!v21)
        {
            v20 = "Error ! Couldn't create bot\n";
        }
        else
        {
            sub_48a0a0(v18, &v6, "127.0.0.1", &v5);
            sub_48d410(v18);
            sub_48bde0(v21, 2, v4, 1, v3, v2);
            v22 = *(unsigned int *)((void*)&v6 + 200);
            v22->field_4 = v22->field_4 + 1;
            v23 = gpGlobals;
            v24 = 5.0 + *(float *)gpGlobals;
            v22->field_10 = (float)v24;
            if (!v22->field_2c)
            {
                g_6168a4("mp_plcatchup");
                *(float *)(*(unsigned int *)((void*)&v6 + 200) + 40) = (float)v24;
                v23 = g_6168ac("mp_plcathcup", 0);
            }
            *(char *)(*(unsigned int *)((void*)&v6 + 200) + 44) = *(char *)(*(unsigned int *)((void*)&v6 + 200) + 44) + 1;
            return v23;
        }
    }
    return g_6168b4(1, v20);
}

