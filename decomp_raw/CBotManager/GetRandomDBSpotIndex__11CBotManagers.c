// GetRandomDBSpotIndex__11CBotManagers @0x16b170 size=1323
typedef struct st_56b170_0 {
    unsigned int field_0;
    unsigned int field_4;
    short field_8;
} st_56b170_0;

typedef struct st_56b170_1 {
    struct st_56b170_0 *field_0;
    struct st_56b170_1 *field_4;
    struct st_56b170_1 *field_8;
} st_56b170_1;

typedef struct st_56b170_2 {
    unsigned int field_0;
} st_56b170_2;

extern unsigned int FindSelection__t12TMultiChoice1ZsPQ2t12TMultiChoice1Zs12SMultiChoicei;
extern st_56b170_2 *g_engfuncs.pfnRandomLong;
extern char GatherSpotsForTeamGood;
extern char GatherSpotsForTeamEvil;

unsigned int GetRandomDBSpotIndex__11CBotManagers(unsigned int a0, unsigned short a1)
{
    st_56b170_1 **v13;  // eax
    st_56b170_0 *v14;  // eax
    st_56b170_0 *v23;  // eax
    st_56b170_1 **v24;  // edx
    st_56b170_0 *v25;  // esi
    st_56b170_1 *v26;  // ecx
    st_56b170_1 *v27;  // eax
    st_56b170_0 *v28;  // eax
    st_56b170_1 **v29;  // edi
    st_56b170_1 *iter;  // esi
    st_56b170_1 *v31;  // eax
    st_56b170_1 **v32;  // edx
    st_56b170_1 **v15;  // edi
    st_56b170_0 *v33;  // esi
    st_56b170_1 *v34;  // ecx
    st_56b170_1 *v35;  // eax
    st_56b170_0 *v36;  // eax
    st_56b170_1 **v37;  // edi
    st_56b170_1 *node;  // esi
    st_56b170_1 *v39;  // eax
    st_56b170_1 *v16;  // esi
    st_56b170_1 *v17;  // esi
    st_56b170_1 *v18;  // eax
    st_56b170_1 *v20;  // esi
    st_56b170_1 *v21;  // esi
    st_56b170_1 *v22;  // esi
    unsigned int v0;  // [bp-0x38]
    char *v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int *v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    char *v5;  // [bp-0x24]
    char v6;  // [bp-0x1d]
    st_56b170_1 *v7;  // [bp-0x1c]
    char v8;  // [bp-0x15]
    st_56b170_0 *v9;  // [bp-0x14]
    short i;  // [bp-0xe]
    unsigned int v11;  // [bp-0xc]
    st_56b170_1 **v12;  // [bp-0x8], Other Possible Types: unsigned int

    v11 = 0;
    v13 = __builtin_new(8);
    *v13 = NULL;
    v13[1] = NULL;
    v12 = v13;
    i = 0;
    if (i <= 9)
    {
        do
        {
            if (!((a1 == 1 ? &GatherSpotsForTeamGood : &GatherSpotsForTeamEvil))[12 + 16 * i])
            {
                v14 = __builtin_new(12);
                v14->field_0 = 0;
                v14->field_4 = 0;
                v9 = v14;
                v9->field_0 = v11;
                v9->field_4 = v11 + 50;
                v9->field_8 = i;
                v15 = v12;
                if (!*v15)
                {
                    v16 = __builtin_new(12);
                    v8 = 1;
                    v16->field_4 = NULL;
                    v16->field_8 = NULL;
                    memset@GLIBC_2.0(v16, 0, 4);
                    v8 = 0;
                    *v15 = v16;
                    if (v8)
                        __builtin_delete(v16);
                    *v15->field_0 = v9;
                    *v15->field_4 = NULL;
                    *v15->field_8 = NULL;
                    v15[1] = *v15;
                }
                else
                {
                    v7 = v15[1];
                    v17 = __builtin_new(12);
                    v6 = 1;
                    v17->field_4 = NULL;
                    v17->field_8 = NULL;
                    memset@GLIBC_2.0(v17, 0, 4);
                    v6 = 0;
                    v7->field_4 = v17;
                    if (v6)
                        __builtin_delete(v17);
                    v15[1]->field_4->field_8 = v15[1];
                    v18 = v15[1]->field_4;
                    v15[1] = v18;
                    v18->field_0 = v9;
                    v15[1]->field_4 = NULL;
                }
                v11 += 50;
            }
            i += 1;
        } while (i <= 9);
    }
    v5 = &i;
    v4 = g_engfuncs.pfnRandomLong(0, v11);
    v2 = _INSERT(v4, 0, 0) | 0xffff0000;
    v3 = &FindSelection__t12TMultiChoice1ZsPQ2t12TMultiChoice1Zs12SMultiChoicei;
    v20 = *v12;
    if (*v12)
    {
        v1 = (char *)&v11 + (unsigned short)v2;
        do
        {
            v21 = v20;
            v22 = v21->field_4;
            if ((char)v3(v1, v21->field_0, v4))
            {
                v23 = v21->field_0;
                goto LABEL_56b413;
            }
        } while ((v20 = v22, v21->field_4));
        v23 = NULL;
LABEL_56b413:
        if (v23)
        {
            i = v23->field_8;
            v0 = i;
            while (*v12 && (v24 = v12, *v24))
            {
                v25 = *v24->field_0;
                v26 = *v24;
                if (v26)
                {
                    if (v26 == v24[1])
                        v24[1] = v26->field_4;
                    v27 = *v24->field_4;
                    *v24 = v27;
                    if (v27)
                        v27->field_8 = NULL;
                    v26->field_4 = NULL;
                    __builtin_delete(v26);
                }
                v28 = v25;
                if (!v28)
                    break;
                __builtin_delete(v28);
            }
            if (v12)
            {
                v29 = v12;
                iter = *v29;
                if (*v29)
                {
                    do
                    {
                        v31 = iter;
                        iter = iter->field_4;
                        v31->field_4 = NULL;
                        v31->field_8 = NULL;
                        __builtin_delete(v31);
                    } while (iter);
                }
                v29[1] = NULL;
                *v29 = NULL;
                __builtin_delete(v29);
            }
            v12 = 0;
            return v0;
        }
    }
    while (*v12 && (v32 = v12, *v32))
    {
        v33 = *v32->field_0;
        v34 = *v32;
        if (v34)
        {
            if (v34 == v32[1])
                v32[1] = v34->field_4;
            v35 = *v32->field_4;
            *v32 = v35;
            if (v35)
                v35->field_8 = NULL;
            v34->field_4 = NULL;
            __builtin_delete(v34);
        }
        v36 = v33;
        if (!v36)
            break;
        __builtin_delete(v36);
    }
    if (v12)
    {
        v37 = v12;
        node = *v37;
        if (*v37)
        {
            do
            {
                v39 = node;
                node = node->field_4;
                v39->field_4 = NULL;
                v39->field_8 = NULL;
                __builtin_delete(v39);
            } while (node);
        }
        v37[1] = NULL;
        *v37 = NULL;
        __builtin_delete(v37);
    }
    v12 = 0;
    return 0xffffffff;
}

