// PlayerUse__11CBasePlayer @0xf85e0 size=1128
typedef struct st_4f85e0_6 {
    char padding_0[184];
    struct st_4f85e0_1 *field_b8;
} st_4f85e0_6;

typedef struct st_4f85e0_0 {
    char padding_0[28];
    struct st_4f85e0_1 *field_1c;
    char padding_20[152];
    struct st_4f85e0_1 *field_b8;
} st_4f85e0_0;

typedef struct st_4f85e0_3 {
    char padding_0[244];
    float field_f4;
    float field_f8;
    float field_fc;
} st_4f85e0_3;

typedef struct st_4f85e0_12 {
    char padding_0[404];
    unsigned int field_194;
} st_4f85e0_12;

typedef struct st_4f85e0_1 {
    unsigned int field_0;
} st_4f85e0_1;

typedef struct st_4f85e0_11 {
    char padding_0[412];
    unsigned int field_19c;
} st_4f85e0_11;

typedef struct st_4f85e0_7 {
    char padding_0[96];
    struct st_4f85e0_6 *field_60;
} st_4f85e0_7;

typedef struct st_4f85e0_2 {
    struct st_4f85e0_3 *field_0;
    char padding_4[92];
    struct st_4f85e0_0 *field_60;
} st_4f85e0_2;

typedef struct st_4f85e0_9 {
    char padding_0[252];
    struct st_4f85e0_1 *field_fc;
} st_4f85e0_9;

typedef struct st_4f85e0_8 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_4f85e0_8;

typedef struct st_4f85e0_10 {
    char padding_0[68];
    struct st_4f85e0_9 *field_44;
} st_4f85e0_10;

extern st_4f85e0_10 *g_pGameRules;
extern st_4f85e0_1 *g_6168d4;
extern st_4f85e0_8 *gpGlobals;

st_4f85e0_2 * PlayerUse__11CBasePlayer(float idx)
{
    st_4f85e0_2 *v27;  // eax
    unsigned int v28;  // esi
    unsigned int *v37;  // edx
    float v38;  // 128
    st_4f85e0_2 *v39;  // esi
    st_4f85e0_2 *v41;  // eax
    st_4f85e0_2 *v42;  // eax
    st_4f85e0_2 *v29;  // eax
    st_4f85e0_7 *v30;  // edx
    unsigned int v31;  // eax
    st_4f85e0_2 *v32;  // esi
    st_4f85e0_2 *v33;  // esi
    st_4f85e0_11 *v34;  // eax
    st_4f85e0_12 *v35;  // edx
    unsigned int *v36;  // edx
    unsigned int v0;  // [bp-0xd4]
    unsigned int v1;  // [bp-0x9c]
    char *v2;  // [bp-0x98]
    char v3[4];  // [bp-0x94]
    st_4f85e0_2 *v5;  // [bp-0x90]
    float v6;  // [bp-0x8c]
    char v7;  // [bp-0x8c]
    float v8;  // [bp-0x88]
    float v9;  // [bp-0x84]
    float v10;  // [bp-0x80]
    float v11;  // [bp-0x7c]
    float v12;  // [bp-0x78]
    float v13;  // [bp-0x6c]
    char v14;  // [bp-0x6c]
    float v15;  // [bp-0x68]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x4c]
    float v18;  // [bp-0x48]
    float v19;  // [bp-0x44]
    float v20;  // [bp-0x2c]
    float v21;  // [bp-0x28]
    float v22;  // [bp-0x24]
    int v23;  // [bp-0xc]
    unsigned short v24;  // [bp-0x8]
    unsigned short v25;  // [bp-0x6]

    if (*(int *)(*(unsigned int *)&idx + 848))
        return v42;
    v27 = *(int *)(*(int *)idx + 384) | *(int *)(*(unsigned int *)&idx + 712) | *(int *)(*(unsigned int *)&idx + 716);
    if (!((char)v27 & 32))
        return v27;
    if (*(char *)(*(unsigned int *)&idx + 712) & 32)
    {
        v28 = *(unsigned int *)&idx + 2316;
        v29 = sub_48d8b0(v28);
        if (v29)
        {
            v30 = sub_489fd0(v28);
            v30->field_60->field_b8(v30, idx, idx, 0, 0);
            return sub_48d960(v28, 0);
        }
        else if (*(char *)(*(unsigned int *)&idx + 784) & 2)
        {
            *(char *)(*(unsigned int *)&idx + 784) = *(char *)(*(unsigned int *)&idx + 784) & 253;
            *(unsigned int *)(*(unsigned int *)&idx + 2308) = 192;
            return v29;
        }
        else
        {
            v31 = *(int *)(*(int *)idx + 412);
            if (*(int *)(*(int *)idx + 412) || (v31 = g_6168d4(0), v31))
                v32 = *(int *)(v31 + 124);
            else
                v32 = NULL;
            if (v32 && !(*(char *)(*(int *)idx + 384) & 2) && *(char *)(*(int *)idx + 421) & 2 && (char)v32->field_60->field_1c(v32) & 64 && (*(int *)&v32->field_60->padding_20[100])(v32, *(int *)idx))
            {
                *(char *)(*(unsigned int *)&idx + 784) = *(char *)(*(unsigned int *)&idx + 784) | 2;
                v25 = __fnstcw();
                v24 = v25 | 0xc00;
                v23 = (int)v32->field_0[1].field_f8;
                *(unsigned int *)(*(unsigned int *)&idx + 2308) = sub_488890(v23, *(int *)&v32->field_0[1].padding_0[132]);
                *(char *)(*(unsigned int *)&idx + 2308) = *(char *)(*(unsigned int *)&idx + 2308) | 192;
                return sub_489390(*(int *)(*(int *)idx + 520), 3, "plats/train_use1.wav", 0.800000011920929f, 0.800000011920929f, 0, 100);
            }
        }
    }
    v33 = NULL;
    strncpy(v3, "333?", 8);
    sub_48a800(*(int *)idx + 116);
    v2 = &v7;
    while (1)
    {
        v33 = sub_48bba0(v33, *(int *)idx + 8, 64.0f);
        if (!v33)
            break;
        if ((char)v33->field_60->field_1c(v33) & 56)
        {
            sub_48b610(&v14, v33->field_0);
            v34 = *(int *)idx;
            v35 = &v34->padding_0[8];
            v6 = *(float *)&v34->padding_0[8] + *(float *)&v34->padding_0[372];
            v8 = *(float *)&v35->padding_0[4] + *(float *)&v34->padding_0[376];
            v9 = *(float *)&v35->padding_0[8] + *(float *)&v34->padding_0[380];
            v17 = v13 - v6;
            v18 = v15 - v8;
            v19 = v16 - v9;
            v20 = v17;
            v21 = v18;
            v22 = v19;
            v36 = &v33->field_0->field_f4;
            v10 = (float)(0.5 * v33->field_0->field_f4);
            v11 = (float)(0.5 * *(float *)&v36[1]);
            v12 = (float)(0.5 * *(float *)&v36[2]);
            sub_48af50(v2, &v20, &v10);
            v20 = v6;
            v21 = v8;
            v22 = v9;
            v37 = &gpGlobals->field_28;
            v38 = v20 * gpGlobals->field_28 + v21 * *(float *)&v37[1] + v22 * *(float *)&v37[2];
            if (v38 > *(float *)v3)
            {
                v5 = v33;
                *(float *)&*(uint32_t *)v3 = v38;
            }
        }
    }
    v39 = v5;
    if (v39)
    {
        v1 = v39->field_60->field_1c(v39);
        if (*(char *)(*(unsigned int *)&idx + 712) & 32)
            sub_489390(*(int *)(*(int *)idx + 520), 3, "common/wpn_select.wav", 0.4000000059604645f, 0.800000011920929f, 0, 100);
        if (!(*(char *)(*(int *)idx + 384) & 32) || !((char)v1 & 16))
        {
            if (*(char *)(*(unsigned int *)&idx + 712) & 32 && (char)v1 & 40)
            {
                if (!((char)v1 & 16))
                {
                    v0 = 0x3f800000;
                    return v39->field_60->field_b8(v39, idx, idx, 2);
                }
            }
            else
            {
                if (*(char *)(*(unsigned int *)&idx + 716) & 32)
                {
                    v41 = v39->field_60->field_1c(v39);
                    if (!((char)v41 & 32))
                        return v41;
                    v0 = 0;
                    return v39->field_60->field_b8(v39, idx, idx, 2);
                }
                else
                {
                    return *(int *)idx;
                }
            }
        }
        *(char *)(*(unsigned int *)&idx + 784) = *(char *)(*(unsigned int *)&idx + 784) | 16;
        v0 = 0x3f800000;
        return v39->field_60->field_b8(v39, idx, idx, 2);
    }
    else
    {
        if (!(*(char *)(*(unsigned int *)&idx + 712) & 32))
            return v33;
        g_pGameRules->field_44->field_fc(g_pGameRules, idx);
        return v33;
    }
}

