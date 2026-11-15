// LandRecoverDash__12CPlayerMelee @0x1023c0 size=1024
typedef struct st_5023c0_1 {
    char padding_0[384];
    unsigned int field_180;
} st_5023c0_1;

typedef struct st_5023c0_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_5023c0_0;

extern st_5023c0_0 *gpGlobals;

double LandRecoverDash__12CPlayerMelee(float idx)
{
    unsigned int v21;  // esi
    unsigned int v22;  // eax
    char *v31;  // edi
    unsigned int v32;  // ecx
    unsigned int v33;  // cc_op
    unsigned int v34;  // cc_dep1
    unsigned int v35;  // cc_dep2
    unsigned int v36;  // eax
    void* v37;  // esi
    void* v38;  // esi
    char *v39;  // edi
    unsigned int v40;  // 4101
    unsigned int *v23;  // edx
    unsigned int v41;  // 4109
    void* i;  // esi
    unsigned int v43;  // ecx
    char *v44;  // esi
    char *v45;  // edi
    unsigned int v46;  // ecx
    unsigned int v47;  // cc_op
    unsigned int v48;  // cc_dep1
    unsigned int v49;  // cc_dep2
    char *v50;  // esi
    int v24;  // edi
    char *v51;  // edi
    unsigned int v52;  // 4101
    void* iter;  // edi
    void* j;  // esi
    unsigned int v55;  // ecx
    void* node;  // edi
    void* k;  // esi
    unsigned int v58;  // ecx
    unsigned int *v59;  // edx
    double v60;  // mm7
    unsigned int *v25;  // edx
    double v26;  // mm7
    double v27;  // mm6
    double v28;  // mm7
    st_5023c0_1 *v29;  // edx
    void* iter1;  // edx
    char *v0;  // [bp-0x294], Other Possible Types: int
    void* v1;  // [bp-0x268]
    char v2;  // [bp-0x264]
    char v3;  // [bp-0x164]
    float v4;  // [bp-0x64]
    unsigned int v5;  // [bp-0x64]
    float v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x60]
    float v8;  // [bp-0x5c]
    unsigned int v9;  // [bp-0x5c]
    float v10;  // [bp-0x58]
    float v11;  // [bp-0x44]
    float v12;  // [bp-0x40]
    float v13;  // [bp-0x3c]
    unsigned int v14;  // [bp-0x24]
    float v15;  // [bp-0x24]
    unsigned int v16;  // [bp-0x20]
    float v17;  // [bp-0x20]
    float v18;  // [bp-0x1c]
    unsigned int v19;  // [bp-0x1c]

    sub_48a800(*(unsigned int *)&idx + 88);
    v14 = 0;
    v16 = 0;
    v19 = 0;
    v21 = 0;
    v22 = *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 384);
    if (v22 & 640)
    {
        v23 = &gpGlobals->field_40;
        v11 = -gpGlobals->field_40;
        v12 = -*(float *)&v23[1];
        v13 = -*(float *)&v23[2];
        v15 = v11;
        v17 = v12;
        v18 = v13;
        v24 = 2;
    }
    else if (*(char *)((void*)&v22 + 1) & 5)
    {
        v15 = gpGlobals->field_40;
        v17 = gpGlobals->field_44;
        v18 = gpGlobals->field_48;
        v24 = 3;
    }
    else if ((char)v22 & 8)
    {
        v15 = gpGlobals->field_28;
        v17 = gpGlobals->field_2c;
        v18 = gpGlobals->field_30;
        v24 = 4;
    }
    else if ((char)v22 & 16)
    {
        v25 = &gpGlobals->field_28;
        v11 = -gpGlobals->field_28;
        v12 = -*(float *)&v25[1];
        v13 = -*(float *)&v25[2];
        v15 = v11;
        v17 = v12;
        v18 = v13;
        v24 = 5;
    }
    else if ((char)v22 & 2)
    {
        v21 = 1;
        v11 = 0;
        v12 = 0;
        v13 = 1.0;
        v15 = v11;
        v17 = v12;
        v18 = v13;
        v24 = 0;
    }
    else
    {
        return v60;
    }
    if (!v21)
    {
        v18 = 0;
        v26 = v15 * v15 + v17 * v17 + 0.0;
        v27 = sqrt(v26);
        if (isnan(v27))
            sub_487dc0(*(unsigned int *)&v26);
        else
            v26 = v27;
        v10 = (float)v26;
        if (v10 == 0.0f)
        {
            v11 = 0.0f;
            v12 = 0.0f;
            v13 = 1.0;
        }
        else
        {
            v28 = 1.0 / v10;
            v11 = (float)(v28 * v15);
            v12 = (float)(v28 * v17);
            v13 = (float)(v28 * v18);
        }
        v15 = v11;
        v17 = v12;
        v18 = v13;
    }
    v4 = (float)(900.0 * v15);
    v6 = (float)(900.0 * v17);
    v8 = (float)(900.0 * v18);
    v15 = v4;
    v17 = v6;
    v18 = v8;
    if (!v21)
        v18 = (float)(v18 + 500.0);
    v29 = *(int *)*(int *)(*(unsigned int *)&idx + 292);
    *(float *)&v29->padding_0[32] = v15;
    *(float *)&v29->padding_0[36] = v17;
    *(float *)&v29->padding_0[40] = v18;
    sub_48c5a0(*(int *)(*(unsigned int *)&idx + 292));
    if (!v21)
    {
        sub_48b230(idx, 0, v24, &v2);
        v0 = &v2;
        v1 = &v3;
        sub_48d990(&v3, "throw_recover_%s", v0);
        iter1 = v1;
        v31 = "throw_recover_front";
        v32 = 20;
        v33 = 15;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        v37 = iter1;
        do
        {
            v38 = v37;
            v39 = v31;
            if (!v32)
                break;
            v32 -= 1;
            v33 = 4;
            v34 = *(char *)v38;
            v35 = *v39;
            v31 = v39 + 1;
            v37 = v38 + 1;
        } while (*(char *)v38 == *v39);
        v40 = _ccall(4, v33, v34, v35, 0);
        if (!(v40 & 1))
        {
            v41 = _ccall(v33, v34, v35, 0);
            v36 = -(v41 & 1) | 1;
        }
        if (!v36)
        {
            i = "throw_recover_forward";
            for (v43 = 5; v43; i += 4)
            {
                v43 -= 1;
                *(int *)iter1 = *(int *)i;
                iter1 += 4;
            }
            *(short *)iter1 = *(short *)i;
        }
        else
        {
            v44 = &v3;
            v45 = "throw_recover_back";
            v46 = 19;
            v47 = 13;
            v48 = 0;
            v49 = 0;
            do
            {
                v50 = v44;
                v51 = v45;
                if (!v46)
                    break;
                v46 -= 1;
                v47 = 4;
                v48 = *v50;
                v49 = *v51;
                v45 = v51 + 1;
                v44 = v50 + 1;
            } while (*v50 == *v51);
            v52 = _ccall(4, v47, v48, v49, 0);
            if (v52 & 1)
            {
                iter = &v3;
                j = "throw_recover_backward";
                for (v55 = 5; v55; j += 4)
                {
                    v55 -= 1;
                    *(int *)iter = *(int *)j;
                    iter += 4;
                }
                *(short *)iter = *(short *)j;
                *(char *)&iter[2] = (char)j[2];
            }
        }
    }
    else
    {
        node = &v3;
        k = "throw_recover_jump";
        for (v58 = 4; v58; k += 4)
        {
            v58 -= 1;
            *(int *)node = *(int *)k;
            node += 4;
        }
        *(short *)node = *(short *)k;
        *(char *)&node[2] = (char)k[2];
    }
    sub_48a800(*(unsigned int *)&idx + 88);
    v59 = &gpGlobals->field_28;
    v4 = gpGlobals->field_28;
    v6 = *(float *)&v59[1];
    v8 = *(float *)&v59[2];
    *(unsigned short *)&v0 = 0;
    sub_488dc0(idx, &v4, v0, gpGlobals->field_0, &v3);
    v5 = 0;
    v7 = 0;
    v9 = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 88) = v5;
    *(unsigned int *)(*(unsigned int *)&idx + 92) = v7;
    *(unsigned int *)(*(unsigned int *)&idx + 96) = v9;
    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 292) + 520), 4, "weapons/recoverjump.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    return 0.800000011920929;
}

