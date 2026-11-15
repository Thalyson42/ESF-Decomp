// EntSelectSpawnPoint__FP11CBaseEntity @0xfa570 size=2311
typedef struct st_4fa570_7 {
    char padding_0[52];
    struct st_4fa570_1 *field_34;
    char padding_38[104];
    struct st_4fa570_1 *field_a0;
} st_4fa570_7;

typedef struct st_4fa570_1 {
    unsigned int field_0;
} st_4fa570_1;

typedef struct st_4fa570_6 {
    char padding_0[520];
    unsigned int field_208;
} st_4fa570_6;

typedef struct st_4fa570_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4fa570_3;

typedef struct st_4fa570_5 {
    char padding_0[8];
    float field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4fa570_5;

typedef struct st_4fa570_8 {
    struct st_4fa570_6 *field_0;
    char padding_4[92];
    struct st_4fa570_7 *field_60;
} st_4fa570_8;

typedef struct st_4fa570_0 {
    char padding_0[28];
    struct st_4fa570_1 *field_1c;
    struct st_4fa570_1 *field_20;
    struct st_4fa570_1 *field_24;
} st_4fa570_0;

typedef struct st_4fa570_4 {
    struct st_4fa570_3 *field_0;
} st_4fa570_4;

typedef struct st_4fa570_9 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[132];
    unsigned int field_98;
} st_4fa570_9;

typedef struct st_4fa570_2 {
    char padding_0[68];
    struct st_4fa570_0 *field_44;
} st_4fa570_2;

extern st_4fa570_2 *g_pGameRules;
extern st_4fa570_1 *g_6168b4;
extern st_4fa570_1 *g_6168d8;
extern st_4fa570_1 *g_6168e0;
extern st_4fa570_1 *g_616928;
extern st_4fa570_9 *gpGlobals;
extern st_4fa570_4 *g_pLastSpawn;

unsigned int EntSelectSpawnPoint__FP11CBaseEntity(float a0)
{
    unsigned int v26;  // esi
    unsigned int v27;  // esi
    unsigned int v36;  // esi
    st_4fa570_8 *v37;  // esi
    unsigned int v38;  // eax
    unsigned int v39;  // eax
    int k;  // esi
    unsigned int v41;  // esi
    unsigned int *v42;  // edx
    unsigned int v43;  // ecx
    unsigned int v44;  // esi
    st_4fa570_8 *v45;  // esi
    unsigned int *v28;  // edx
    unsigned int v46;  // eax
    unsigned int v47;  // eax
    char *v48;  // edi
    unsigned int v49;  // ecx
    char *v50;  // edi
    st_4fa570_5 **v51;  // eax
    unsigned int v52;  // esi
    void* i;  // esi
    void* iter;  // edi
    unsigned int v31;  // ecx
    int j;  // esi
    unsigned int v33;  // esi
    unsigned int *v34;  // edx
    unsigned int v35;  // ecx
    unsigned int v0;  // [bp-0x184]
    float v1;  // [bp-0x180]
    st_4fa570_5 **v2;  // [bp-0x17c], Other Possible Types: unsigned int
    char *v3;  // [bp-0x178], Other Possible Types: void*
    st_4fa570_5 **v4;  // [bp-0x158]
    st_4fa570_3 **v5;  // [bp-0x158]
    unsigned int v6;  // [bp-0x154]
    st_4fa570_7 *v7;  // [bp-0x150]
    unsigned int v8;  // [bp-0x14c]
    unsigned int v9;  // [bp-0x148]
    st_4fa570_7 *v10;  // [bp-0x144]
    unsigned int v11;  // [bp-0x140]
    st_4fa570_5 **v12;  // [bp-0x13c]
    unsigned int v13;  // [bp-0x138]
    char *v14;  // [bp-0x134]
    unsigned int v15;  // [bp-0x130]
    unsigned int v16;  // [bp-0x12c]
    unsigned int v17;  // [bp-0x128]
    unsigned int v18;  // [bp-0x124]
    unsigned int v19;  // [bp-0x120]
    unsigned int v20;  // [bp-0x11c]
    char v21;  // [bp-0x104]
    unsigned int v22;  // [bp-0x100]
    unsigned int v23;  // [bp-0xfc]
    unsigned int v24;  // [bp-0xf8]

    v17 = *(int *)(*(int *)a0 + 520);
    if (g_pGameRules->field_44->field_24(g_pGameRules))
    {
        v4 = sub_487e80(g_pLastSpawn, "info_player_coop");
        v16 = 0;
        if (v4)
        {
            v26 = 0;
            if (!*v4->field_208 || !g_6168d8(*v4->field_208))
                v26 = 1;
            if (!v26)
                goto LABEL_4fa621;
        }
        v16 = 1;
LABEL_4fa621:
        if (v16)
        {
            v4 = sub_487e80(g_pLastSpawn, "info_player_start");
            v15 = 0;
            if (v4)
            {
                v27 = 0;
                if (!*v4->field_208 || !g_6168d8(*v4->field_208))
                    v27 = 1;
                if (!v27)
                    goto LABEL_4fa697;
            }
            v15 = 1;
LABEL_4fa697:
            if (v15)
                goto LABEL_4fa6a4;
        }
    }
    else
    {
LABEL_4fa6a4:
        if (g_pGameRules->field_44->field_20(g_pGameRules))
        {
            v4 = g_pLastSpawn;
            if (!sub_488af0(*(unsigned int *)&a0 + 2460, "Good"))
            {
                v28 = "info_good_start";
                goto LABEL_4fa72a;
            }
            else if (!sub_488af0(*(unsigned int *)&a0 + 2460, "Evil"))
            {
                v28 = "info_evil_start";
LABEL_4fa72a:
                strncpy(&v21, "info", 4);
                v22 = v28[1];
                v23 = v28[2];
                v24 = v28[3];
            }
            else
            {
                i = "info_player_deathmatch";
                iter = &v21;
                for (v31 = 5; v31; i += 4)
                {
                    v31 -= 1;
                    *(int *)iter = *(int *)i;
                    iter += 4;
                }
                *(short *)iter = *(short *)i;
                *(char *)&iter[2] = (char)i[2];
            }
            j = g_616928(1, 5);
            if (j > 0)
            {
                v14 = &v21;
                do
                {
                    v4 = sub_487e80(v4, v14);
                    j -= 1;
                } while (j > 0);
            }
            v13 = 0;
            if (v4)
            {
                v33 = 0;
                if (!*v4->field_208 || !g_6168d8(*v4->field_208))
                    v33 = 1;
                if (!v33)
                    goto LABEL_4fa80a;
            }
            v13 = 1;
LABEL_4fa80a:
            if (v13)
                v4 = sub_487e80(v4, &v21);
            v12 = v4;
            do
            {
                if (v4 && sub_48d020(a0, v4))
                {
                    v18 = 0;
                    v19 = 0;
                    v20 = 0;
                    v34 = &*v4->field_8;
                    v35 = 0;
                    if (*v4->field_8 == 0.0f && *(float *)&v34[1] == 0.0f)
                        v35 = *(float *)&v34[2] == 0.0f;
                    if (!v35)
                        goto LABEL_4fadc5;
                    v3 = &v21;
                    v2 = v4;
                    continue;
                }
                else
                {
                    v3 = &v21;
                    v2 = v4;
                }
            } while ((v4 = sub_487e80(v2, v3), v4 != v12));
            v11 = 0;
            if (v4)
            {
                v36 = 0;
                if (!*v4->field_208 || !g_6168d8(*v4->field_208))
                    v36 = 1;
                if (!v36)
                    goto LABEL_4fa963;
            }
            v11 = 1;
LABEL_4fa963:
            if (!v11)
            {
                v37 = NULL;
                while (1)
                {
                    v37 = sub_48bba0(v37, &*v4->field_8, 128.0f);
                    if (!v37)
                        break;
                    if (v37->field_60->field_a0(v37) && v37->field_0->field_208 != v17)
                    {
                        v10 = v37->field_60;
                        v2 = 0;
                        v1 = 300.0f;
                        v38 = g_6168e0(0);
                        v0 = (!v38 ? 0 : v38 + 128);
                        v39 = g_6168e0(0);
                        v10->field_34(v37, (!v39 ? 0 : v39 + 128));
                    }
                }
                goto LABEL_4fadc5;
            }
        }
        if (g_pGameRules->field_44->field_1c(g_pGameRules))
        {
            v5 = g_pLastSpawn;
            k = g_616928(1, 5);
            if (k > 0)
            {
                do
                {
                    v5 = sub_487e80(v5, "info_player_deathmatch");
                    k -= 1;
                } while (k > 0);
            }
            v9 = 0;
            if (v5)
            {
                v41 = 0;
                if (!*v5->field_208 || !g_6168d8(*v5->field_208))
                    v41 = 1;
                if (!v41)
                    goto LABEL_4fab07;
            }
            v9 = 1;
LABEL_4fab07:
            if (v9)
                v5 = sub_487e80(v5, "info_player_deathmatch");
            v4 = v5;
            do
            {
                if (v4 && sub_48d020(a0, v4))
                {
                    v18 = 0;
                    v19 = 0;
                    v20 = 0;
                    v42 = &*v4->field_8;
                    v43 = 0;
                    if (*v4->field_8 == 0.0f && *(float *)&v42[1] == 0.0f)
                        v43 = *(float *)&v42[2] == 0.0f;
                    if (!v43)
                        goto LABEL_4fadc5;
                    v3 = "info_player_deathmatch";
                    v2 = v4;
                    continue;
                }
                else
                {
                    v3 = "info_player_deathmatch";
                    v2 = v4;
                }
            } while ((v4 = sub_487e80(v2, v3), v4 != v5));
            v8 = 0;
            if (v4)
            {
                v44 = 0;
                if (!*v4->field_208 || !g_6168d8(*v4->field_208))
                    v44 = 1;
                if (!v44)
                    goto LABEL_4fac54;
            }
            v8 = 1;
LABEL_4fac54:
            if (v8)
                goto LABEL_4fad30;
            v45 = NULL;
            while (1)
            {
                v45 = sub_48bba0(v45, &*v4->field_8, 128.0f);
                if (!v45)
                    break;
                if (v45->field_60->field_a0(v45) && v45->field_0->field_208 != v17)
                {
                    v7 = v45->field_60;
                    v2 = 0;
                    v1 = 300.0f;
                    v46 = g_6168e0(0);
                    v0 = (!v46 ? 0 : v46 + 128);
                    v47 = g_6168e0(0);
                    v7->field_34(v45, (!v47 ? 0 : v47 + 128));
                }
            }
        }
        else
        {
LABEL_4fad30:
            if (gpGlobals->field_10)
            {
                v48 = gpGlobals->field_98 + gpGlobals->field_10;
                v49 = 0xffffffff;
                do
                {
                    v50 = v48;
                } while (v49 && (v49 -= 1, v48 = v50 + 1, *v50));
                if (v49 == 0xfffffffe)
                    goto LABEL_4fad56;
                v51 = sub_48cce0(0, gpGlobals->field_10 + gpGlobals->field_98);
            }
            else
            {
LABEL_4fad56:
                v51 = sub_487e80(0, "info_player_start");
            }
            v4 = v51;
        }
    }
LABEL_4fadc5:
    v6 = 0;
    if (v4)
    {
        v52 = 0;
        if (!*v4->field_208 || !g_6168d8(*v4->field_208))
            v52 = 1;
        if (!v52)
            goto LABEL_4fae18;
    }
    v6 = 1;
LABEL_4fae18:
    if (v6)
    {
        g_6168b4(4, "PutClientInServer: no info_player_start on level");
        return g_6168e0(0);
    }
    g_pLastSpawn = v4;
    return *v4->field_208;
}

