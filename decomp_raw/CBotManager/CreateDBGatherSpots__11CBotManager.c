// CreateDBGatherSpots__11CBotManager @0x16a7b0 size=2490
typedef struct st_56a7b0_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_56a7b0_1;

typedef struct st_56a7b0_2 {
    struct st_56a7b0_1 *field_0;
} st_56a7b0_2;

typedef struct st_56a7b0_3 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_56a7b0_2 *field_8;
} st_56a7b0_3;

typedef struct st_56a7b0_4 {
    struct st_56a7b0_3 *field_0;
    struct st_56a7b0_4 *field_4;
    struct st_56a7b0_4 *field_8;
} st_56a7b0_4;

typedef struct st_56a7b0_6 {
    unsigned int field_0;
    unsigned int field_4;
    int field_8;
} st_56a7b0_6;

typedef struct st_56a7b0_5 {
    char padding_0[20];
    struct st_56a7b0_0 *field_14;
} st_56a7b0_5;

typedef struct st_56a7b0_0 {
    unsigned int field_0;
} st_56a7b0_0;

extern unsigned int FindSelection__t12TMultiChoice1ZP11CBaseEntityPQ2t12TMultiChoice1ZP11CBaseEntity12SMultiChoicei;
extern unsigned int g_teamplay;
extern char CheckForDBSpot;
extern st_56a7b0_0 *g_6168a4;
extern st_56a7b0_0 *g_616928;
extern unsigned int GatherDBPosForTeamGood;
extern unsigned int g_625c24;
extern unsigned int g_625c28;
extern unsigned int GatherDBPosForTeamEvil;
extern unsigned int g_625c30;
extern unsigned int g_625c34;
extern unsigned int GatherSpotsForTeamGood[4];
extern unsigned int GatherSpotsForTeamEvil[4];
extern char cout;
extern st_56a7b0_5 *g_625f80;

double CreateDBGatherSpots__11CBotManager(float a0)
{
    double v26;  // mm0
    unsigned short v27;  // di
    st_56a7b0_4 *v36;  // eax
    st_56a7b0_4 *v38;  // esi
    st_56a7b0_4 *v39;  // esi
    st_56a7b0_4 *v40;  // esi
    st_56a7b0_6 *v41;  // eax
    unsigned int *v42;  // edx
    st_56a7b0_4 **v43;  // eax
    st_56a7b0_3 *v44;  // eax
    st_56a7b0_4 **v45;  // edi
    unsigned int v28;  // edx
    st_56a7b0_4 *v46;  // esi
    st_56a7b0_4 *v47;  // esi
    st_56a7b0_4 *v48;  // eax
    st_56a7b0_4 *v50;  // esi
    st_56a7b0_4 *v51;  // esi
    st_56a7b0_4 *v52;  // esi
    st_56a7b0_3 *v53;  // eax
    unsigned int *v54;  // edx
    st_56a7b0_4 **v55;  // edx
    unsigned int v29;  // edx
    st_56a7b0_3 *v56;  // esi
    st_56a7b0_4 *v57;  // ecx
    st_56a7b0_4 *v58;  // eax
    st_56a7b0_3 *v59;  // eax
    st_56a7b0_4 **v60;  // edi
    st_56a7b0_4 *iter;  // esi
    st_56a7b0_4 *v62;  // eax
    st_56a7b0_4 **v63;  // edx
    st_56a7b0_6 *v64;  // esi
    st_56a7b0_4 *v65;  // ecx
    unsigned int v30;  // eax
    st_56a7b0_4 *v66;  // eax
    st_56a7b0_6 *v67;  // eax
    st_56a7b0_4 **v68;  // edi
    st_56a7b0_4 *node;  // esi
    st_56a7b0_4 *v70;  // eax
    double v71;  // mm7
    st_56a7b0_4 **v31;  // eax
    st_56a7b0_6 *v32;  // eax
    st_56a7b0_4 **v33;  // edi
    st_56a7b0_4 *v34;  // esi
    st_56a7b0_4 *v35;  // esi
    char *v0;  // [bp-0x68]
    unsigned int v1;  // [bp-0x64]
    unsigned int *v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x5c]
    st_56a7b0_2 **v4;  // [bp-0x58]
    char v5;  // [bp-0x51]
    st_56a7b0_4 *v6;  // [bp-0x50]
    char v7;  // [bp-0x49]
    st_56a7b0_3 *v8;  // [bp-0x48]
    char *v9;  // [bp-0x44]
    unsigned int v10;  // [bp-0x40]
    unsigned int *v11;  // [bp-0x3c]
    unsigned int v12;  // [bp-0x38]
    st_56a7b0_2 **v13;  // [bp-0x34]
    char v14;  // [bp-0x2d]
    st_56a7b0_4 *v15;  // [bp-0x2c]
    char v16;  // [bp-0x25]
    st_56a7b0_6 *v17;  // [bp-0x24]
    unsigned short v18;  // [bp-0x1e]
    st_56a7b0_1 **v19;  // [bp-0x1c], Other Possible Types: int
    st_56a7b0_1 **v20;  // [bp-0x18], Other Possible Types: int, unsigned int
    unsigned int v21;  // [bp-0x14]
    st_56a7b0_4 **v22;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v23;  // [bp-0xc]
    st_56a7b0_4 **v24;  // [bp-0x8], Other Possible Types: unsigned int

    CheckForDBSpot = 0;
    if (!g_teamplay)
        return v71;
    g_6168a4("mp_gamemode");
    if (v26 != 2.0)
        return 2.0;
    v27 = sub_48a550(a0, 1);
    v18 = sub_48a550(a0, 2);
    if ((short)v27 > -0x1 && (short)v18 > -0x1)
    {
        v28 = v27 * 16;
        GatherDBPosForTeamGood = *(int *)((char *)&GatherSpotsForTeamGood[0] + v28);
        g_625c24 = *(int *)((char *)&GatherSpotsForTeamGood[0] + v28 + 4);
        g_625c28 = *(int *)((char *)&GatherSpotsForTeamGood[0] + v28 + 8);
        v29 = v18 * 16;
        GatherDBPosForTeamEvil = *(int *)((char *)&GatherSpotsForTeamEvil[0] + v29);
        g_625c30 = *(int *)((char *)&GatherSpotsForTeamEvil[0] + v29 + 4);
        g_625c34 = *(int *)((char *)&GatherSpotsForTeamEvil[0] + v29 + 8);
        return 2.0;
    }
    if (v27 == 0xffff)
    {
        v30 = "Error: missing DB gather spot for team good!\n";
    }
    else
    {
        if (v18 != 0xffff || v27 == 0xffff)
            goto LABEL_56a8dc;
        v30 = "Error: missing DB gather spot for team evil!\n";
    }
    g_625f80->field_14(&cout, v30);
LABEL_56a8dc:
    v19 = 0;
    v23 = 0;
    v31 = sub_48d6a0(8);
    *v31 = NULL;
    v31[1] = NULL;
    v24 = v31;
    v20 = 0;
    while (1)
    {
        v19 = sub_487e80(v19, "item_dragonball");
        if (!v19)
            break;
        if (!(char)sub_48b140(v19))
        {
            v32 = sub_48d6a0(12);
            v32->field_0 = 0;
            v32->field_4 = 0;
            v17 = v32;
            v17->field_0 = v23;
            v17->field_4 = v23 + 50;
            v17->field_8 = v19;
            v33 = v24;
            if (!*v33)
            {
                v34 = sub_48d6a0(12);
                v16 = 1;
                v34->field_4 = NULL;
                v34->field_8 = NULL;
                sub_48d0e0(v34, 0, 4);
                v16 = 0;
                *v33 = v34;
                if (v16)
                    sub_48d4e0(v34);
                *v33->field_0 = v17;
                *v33->field_4 = NULL;
                *v33->field_8 = NULL;
                v33[1] = *v33;
            }
            else
            {
                v15 = v33[1];
                v35 = sub_48d6a0(12);
                v14 = 1;
                v35->field_4 = NULL;
                v35->field_8 = NULL;
                sub_48d0e0(v35, 0, 4);
                v14 = 0;
                v15->field_4 = v35;
                if (v14)
                    sub_48d4e0(v35);
                v33[1]->field_4->field_8 = v33[1];
                v36 = v33[1]->field_4;
                v33[1] = v36;
                v36->field_0 = v17;
                v33[1]->field_4 = NULL;
            }
            v23 += 50;
        }
    }
    v20 = NULL;
    v13 = &v20;
    v12 = g_616928(0, v23);
    v10 = _INSERT(v12, 0, 0) | 0xffff0000;
    v11 = &FindSelection__t12TMultiChoice1ZP11CBaseEntityPQ2t12TMultiChoice1ZP11CBaseEntity12SMultiChoicei;
    v38 = *v24;
    if (*v24)
    {
        v9 = (char *)&v23 + (unsigned short)v10;
        do
        {
            v39 = v38;
            v40 = v39->field_4;
            if ((char)v11(v9, v39->field_0, v12))
            {
                v41 = v39->field_0;
                goto LABEL_56ab63;
            }
        } while ((v38 = v40, v39->field_4));
        v41 = NULL;
LABEL_56ab63:
        if (v41)
            v20 = v41->field_8;
    }
    if (v20)
    {
        v42 = *v20;
        GatherDBPosForTeamGood = v42[2];
        g_625c24 = v42[3];
        g_625c28 = v42[4];
    }
    v21 = 0;
    v43 = sub_48d6a0(8);
    *v43 = NULL;
    v43[1] = NULL;
    v22 = v43;
    v19 = NULL;
    while (1)
    {
        v19 = sub_487e80(v19, "item_dragonball");
        if (!v19)
            break;
        if (!(char)sub_48b140(v19) && v19 != v20)
        {
            v44 = sub_48d6a0(12);
            v44->field_0 = 0;
            v44->field_4 = 0;
            v8 = v44;
            v8->field_0 = v21;
            v8->field_4 = v21 + 50;
            v8->field_8 = v19;
            v45 = v22;
            if (!*v45)
            {
                v46 = sub_48d6a0(12);
                v7 = 1;
                v46->field_4 = NULL;
                v46->field_8 = NULL;
                sub_48d0e0(v46, 0, 4);
                v7 = 0;
                *v45 = v46;
                if (v7)
                    sub_48d4e0(v46);
                *v45->field_0 = v8;
                *v45->field_4 = NULL;
                *v45->field_8 = NULL;
                v45[1] = *v45;
            }
            else
            {
                v6 = v45[1];
                v47 = sub_48d6a0(12);
                v5 = 1;
                v47->field_4 = NULL;
                v47->field_8 = NULL;
                sub_48d0e0(v47, 0, 4);
                v5 = 0;
                v6->field_4 = v47;
                if (v5)
                    sub_48d4e0(v47);
                v45[1]->field_4->field_8 = v45[1];
                v48 = v45[1]->field_4;
                v45[1] = v48;
                v48->field_0 = v8;
                v45[1]->field_4 = NULL;
            }
            v21 += 50;
        }
    }
    v19 = NULL;
    v4 = &v19;
    v3 = g_616928(0, v21);
    v1 = _INSERT(v3, 0, 0) | 0xffff0000;
    v2 = &FindSelection__t12TMultiChoice1ZP11CBaseEntityPQ2t12TMultiChoice1ZP11CBaseEntity12SMultiChoicei;
    v50 = *v22;
    if (*v22)
    {
        v0 = (char *)&v21 + (unsigned short)v1;
        do
        {
            v51 = v50;
            v52 = v51->field_4;
            if ((char)v2(v0, v51->field_0, v3))
            {
                v53 = v51->field_0;
                goto LABEL_56ae23;
            }
        } while ((v50 = v52, v51->field_4));
        v53 = NULL;
LABEL_56ae23:
        if (v53)
            v19 = v53->field_8;
    }
    if (v19)
    {
        v54 = *v19;
        GatherDBPosForTeamEvil = v54[2];
        g_625c30 = v54[3];
        g_625c34 = v54[4];
    }
    while (*v22 && (v55 = v22, *v55))
    {
        v56 = *v55->field_0;
        v57 = *v55;
        if (v57)
        {
            if (v57 == v55[1])
                v55[1] = v57->field_4;
            v58 = *v55->field_4;
            *v55 = v58;
            if (v58)
                v58->field_8 = NULL;
            v57->field_4 = NULL;
            sub_48d4e0(v57);
        }
        v59 = v56;
        if (!v59)
            break;
        sub_48d4e0(v59);
    }
    if (v22)
    {
        v60 = v22;
        iter = *v60;
        if (*v60)
        {
            do
            {
                v62 = iter;
                iter = iter->field_4;
                v62->field_4 = NULL;
                v62->field_8 = NULL;
                sub_48d4e0(v62);
            } while (iter);
        }
        v60[1] = NULL;
        *v60 = NULL;
        sub_48d4e0(v60);
    }
    v22 = 0;
    while (*v24 && (v63 = v24, *v63))
    {
        v64 = *v63->field_0;
        v65 = *v63;
        if (v65)
        {
            if (v65 == v63[1])
                v63[1] = v65->field_4;
            v66 = *v63->field_4;
            *v63 = v66;
            if (v66)
                v66->field_8 = NULL;
            v65->field_4 = NULL;
            sub_48d4e0(v65);
        }
        v67 = v64;
        if (!v67)
            break;
        sub_48d4e0(v67);
    }
    if (v24)
    {
        v68 = v24;
        node = *v68;
        if (*v68)
        {
            do
            {
                v70 = node;
                node = node->field_4;
                v70->field_4 = NULL;
                v70->field_8 = NULL;
                sub_48d4e0(v70);
            } while (node);
        }
        v68[1] = NULL;
        *v68 = NULL;
        sub_48d4e0(v68);
    }
    v24 = 0;
    return 2.0;
}

