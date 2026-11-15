// UpdateClientData__11CBasePlayer @0xfd3d0 size=2085
typedef struct st_4fd3d0_15 {
    char padding_0[124];
    unsigned int field_7c;
} st_4fd3d0_15;

typedef struct st_4fd3d0_8 {
    struct st_4fd3d0_7 *field_0;
    char padding_4[1852];
    unsigned int field_740;
} st_4fd3d0_8;

typedef struct st_4fd3d0_9 {
    struct st_4fd3d0_10 *field_0;
    char padding_4[612];
    unsigned int field_268;
    char padding_26c[1676];
    unsigned int field_8f8;
} st_4fd3d0_9;

typedef struct st_4fd3d0_6 {
    struct st_4fd3d0_5 *field_0;
    char padding_4[2340];
    unsigned int field_928;
} st_4fd3d0_6;

typedef struct st_4fd3d0_13 {
    char padding_0[296];
    struct st_4fd3d0_0 *field_128;
} st_4fd3d0_13;

typedef struct st_4fd3d0_5 {
    char padding_0[352];
    unsigned int field_160;
} st_4fd3d0_5;

typedef struct st_4fd3d0_0 {
    unsigned int field_0;
} st_4fd3d0_0;

typedef struct st_4fd3d0_10 {
    char padding_0[472];
    float field_1d8;
    float field_1dc;
} st_4fd3d0_10;

typedef struct st_4fd3d0_3 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
    char padding_14[500];
    unsigned int field_208;
} st_4fd3d0_3;

typedef struct st_4fd3d0_17 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[376];
    struct st_4fd3d0_15 *field_184;
    char padding_188[192];
    unsigned int field_248;
} st_4fd3d0_17;

typedef struct st_4fd3d0_16 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[376];
    struct st_4fd3d0_15 *field_18c;
    char padding_190[192];
    unsigned int field_250;
} st_4fd3d0_16;

typedef struct st_4fd3d0_7 {
    char padding_0[596];
    float field_254;
} st_4fd3d0_7;

typedef struct st_4fd3d0_14 {
    char padding_0[96];
    struct st_4fd3d0_13 *field_60;
} st_4fd3d0_14;

typedef struct st_4fd3d0_4 {
    struct st_4fd3d0_3 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_4fd3d0_4;

typedef struct st_4fd3d0_1 {
    char padding_0[24];
    struct st_4fd3d0_0 *field_18;
    char padding_1c[20];
    struct st_4fd3d0_0 *field_30;
} st_4fd3d0_1;

typedef struct st_4fd3d0_2 {
    char padding_0[68];
    struct st_4fd3d0_1 *field_44;
} st_4fd3d0_2;

extern st_4fd3d0_2 *g_pGameRules;
extern unsigned int gInitHUD;
extern unsigned int gmsgResetHUD;
extern unsigned int gmsgInitHUD;
extern unsigned int gmsgHealth;
extern unsigned int gmsgWeaponList;
extern unsigned int gmsgHideWeapon;
extern unsigned int gmsgSetFOV;
extern unsigned int gmsgPowerLevel;
extern unsigned int gmsgInitHUDMap;
extern unsigned int gmsgBlobStart;
extern st_4fd3d0_0 *g_616878;
extern st_4fd3d0_0 *g_61687c;
extern st_4fd3d0_0 *g_616880;
extern st_4fd3d0_0 *g_616888;
extern st_4fd3d0_0 *g_61688c;
extern st_4fd3d0_0 *g_616894;
extern st_4fd3d0_0 *g_616898;
extern st_4fd3d0_0 *g_6168dc;
extern st_4fd3d0_0 *g_616958;
extern unsigned int _15CBasePlayerItem.ItemInfoArray[10];

unsigned int UpdateClientData__11CBasePlayer(float idx)
{
    st_4fd3d0_4 *v15;  // edi
    unsigned int v16;  // eax
    st_4fd3d0_9 *v25;  // edx
    st_4fd3d0_16 *v26;  // eax
    st_4fd3d0_17 *v27;  // edx
    unsigned int v28;  // ecx
    st_4fd3d0_9 *v29;  // ecx
    unsigned int *v30;  // edi
    int v31;  // esi
    unsigned int v32;  // edi
    st_4fd3d0_14 **v33;  // eax
    unsigned int *v34;  // edx
    st_4fd3d0_4 *v17;  // edi
    unsigned int v35;  // eax
    unsigned int v18;  // eax
    int v19;  // edi
    st_4fd3d0_6 *v20;  // edx
    int v21;  // edi
    st_4fd3d0_8 *v22;  // ecx
    unsigned int v23;  // edi
    unsigned int v24;  // eax
    unsigned int v0;  // [bp-0x80]
    st_4fd3d0_4 *v1;  // [bp-0x7c], Other Possible Types: int, unsigned int
    int v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x54]
    int v4;  // [bp-0x50]
    char v5;  // [bp-0x4c], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0x48]
    unsigned int v7;  // [bp-0x44]
    unsigned int v8;  // [bp-0x2c]
    unsigned int v9;  // [bp-0x28]
    unsigned int v10;  // [bp-0x24]
    unsigned short v11;  // [bp-0xc]
    unsigned short v12;  // [bp-0xa]
    int v13;  // [bp-0x8]

    if (*(int *)(*(unsigned int *)&idx + 2300))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 2300) = 0;
        gInitHUD = 0;
        g_616878(1, gmsgResetHUD, 0, *(int *)(*(int *)idx + 520));
        v1 = 0;
        g_616880(v1);
        g_61687c(v1);
        if (!*(int *)(*(unsigned int *)&idx + 0x900))
        {
            g_616878(1, gmsgInitHUD, 0, *(int *)(*(int *)idx + 520));
            g_61687c();
            g_pGameRules->field_44->field_30(g_pGameRules, idx);
            *(unsigned int *)(*(unsigned int *)&idx + 0x900) = 1;
            if (g_pGameRules->field_44->field_18(g_pGameRules))
                sub_48c1b0("game_playerjoin", idx, idx, 3, 0);
            v2 = "kishield";
            v1 = NULL;
            while (1)
            {
                v15 = sub_487e80(v1, v2);
                if (!v15)
                    break;
                g_616878(1, gmsgBlobStart, 0, *(int *)(*(int *)idx + 520));
                g_616880(0);
                g_616894(v15->field_0->field_8);
                g_616894(v15->field_0->field_c);
                g_616894(v15->field_0->field_10);
                v16 = g_6168dc(v15->field_0->field_208);
                g_616888(v16);
                g_616888(v15->field_64);
                g_61687c();
                v2 = "kishield";
                v1 = v15;
            }
            v2 = "kiblob";
            v1 = NULL;
            while (1)
            {
                v17 = sub_487e80(v1, v2);
                if (!v17)
                    break;
                g_616878(1, gmsgBlobStart, 0, *(int *)(*(int *)idx + 520));
                g_616880(1);
                g_616894(v17->field_0->field_8);
                g_616894(v17->field_0->field_c);
                g_616894(v17->field_0->field_10);
                v18 = g_6168dc(v17->field_0->field_208);
                g_616888(v18);
                g_616888(v17->field_64);
                g_61687c();
                v2 = "kiblob";
                v1 = v17;
            }
        }
        sub_48c1b0("game_playerspawn", idx, idx, 3, 0);
    }
    if (*(int *)(*(unsigned int *)&idx + 884))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 884) = 0;
        g_616878(1, gmsgInitHUDMap, 0, *(int *)(*(int *)idx + 520));
        g_61687c();
    }
    if (*(int *)(*(unsigned int *)&idx + 2352) != *(int *)(*(unsigned int *)&idx + 2356))
    {
        g_616878(1, gmsgHideWeapon, 0, *(int *)(*(int *)idx + 520));
        v1 = *(int *)(*(unsigned int *)&idx + 2352);
        g_616880(v1);
        g_61687c(v1);
        *(int *)(*(unsigned int *)&idx + 2356) = *(int *)(*(unsigned int *)&idx + 2352);
    }
    if (*(int *)(*(unsigned int *)&idx + 2360) != *(int *)(*(unsigned int *)&idx + 2364))
    {
        g_616878(1, gmsgSetFOV, 0, *(int *)(*(int *)idx + 520));
        v1 = *(int *)(*(unsigned int *)&idx + 2360);
        g_616880(v1);
        g_61687c(v1);
    }
    if (*(float *)(*(int *)idx + 352) != (double)*(int *)(*(unsigned int *)&idx + 2344))
    {
        v19 = 0;
        if (0.0 < *(float *)(*(int *)idx + 352))
        {
            v12 = __fnstcw();
            v11 = v12 | 0xc00;
            v13 = (int)*(float *)(*(int *)idx + 352);
            v19 = v13;
        }
        g_616878(1, gmsgHealth, 0, *(int *)(*(int *)idx + 520));
        v1 = v19;
        g_616880(v1);
        g_61687c(v1);
        v20 = (st_4fd3d0_6 *)idx;
        v12 = __fnstcw();
        v11 = v12 | 0xc00;
        v13 = (int)*(float *)&v20->field_0->field_160;
        v20->field_928 = v13;
    }
    v21 = sub_48a780(idx);
    if (v21 != *(int *)(*(unsigned int *)&idx + 1856))
    {
        if (v21)
            *(unsigned int *)(*(int *)idx + 592) = 0;
        else
            *(unsigned int *)(*(int *)idx + 592) = 1;
        v13 = sub_48a780(idx);
        g_616958(*(int *)(*(int *)idx + 520), (float)v13);
        v22 = (st_4fd3d0_8 *)idx;
        v13 = v21;
        v22->field_0->field_254 = (float)v13;
        v22->field_740 = v21;
    }
    v23 = sub_48bb90(idx);
    if (v23 != *(int *)(*(unsigned int *)&idx + 1872))
    {
        g_616878(2, gmsgPowerLevel, 0, 0);
        v24 = g_6168dc(*(int *)(*(int *)idx + 520));
        g_616880(v24);
        g_61688c(v23);
        g_61687c();
        *(unsigned int *)(*(unsigned int *)&idx + 1872) = v23;
    }
    v25 = (st_4fd3d0_9 *)idx;
    if (v25->field_0->field_1d8 == 0.0f && v25->field_0->field_1dc == 0.0f && v25->field_8f8 == v25->field_268)
        goto LABEL_4fdaad;
    v26 = *(int *)idx;
    v27 = &v26->field_8;
    *(float *)&v8 = *(float *)&v26->field_8;
    *(float *)&v9 = *(float *)&v27->field_4;
    *(float *)&v10 = *(float *)&v27->field_8;
    if (v26->field_18c)
    {
        v28 = v26->field_18c->field_7c;
        if (v28)
        {
            (*(int *)(*(int *)(v28 + 96) + 0xcc))(&v5, v28);
            v8 = v5;
            v9 = v6;
            v10 = v7;
        }
    }
    v29 = (st_4fd3d0_9 *)idx;
    *(unsigned int *)&v29->field_0->field_1d8 = 0;
    *(unsigned int *)&v29->field_0->field_1dc = 0;
    v29->field_8f8 = v29->field_268;
    v29->field_268 = v29->field_268 & 0xffffc000;
LABEL_4fdaad:
    if (!*(int *)(*(unsigned int *)&idx + 776))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 776) = 1;
        v4 = 0;
        do
        {
            v30 = &_15CBasePlayerItem.ItemInfoArray[11 * v4];
            if (v30[8])
            {
                v3 = "Empty";
                if (v30[6])
                    v3 = v30[6];
                g_616878(1, gmsgWeaponList, 0, *(int *)(*(int *)idx + 520));
                g_616898(v3);
                g_616880(*v30);
                g_616880(v30[1]);
                g_616880(v30[8]);
                v0 = v30[9];
                g_616880(v0);
                g_61687c(v0);
            }
        } while ((v4 += 1, v4 <= 63));
    }
    v31 = 0;
    v32 = *(unsigned int *)&idx + 2368;
    do
    {
        v33 = v31 * 4;
        if (*(int *)((char *)v33 + v32))
            (*(int *)(*(int *)(*(int *)((char *)v33 + v32) + 96) + 296))(*(int *)((char *)v33 + v32), idx);
    } while ((v31 += 1, v31 <= 9));
    v34 = (unsigned int *)idx;
    v34[603] = v34[602];
    v35 = v34[590];
    v34[591] = v35;
    return v35;
}

