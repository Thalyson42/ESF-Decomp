// EnableWallJump__11CBasePlayerG6Vector @0xf6b40 size=693
typedef struct st_4f6b40_1 {
    char padding_0[140];
    struct st_4f6b40_2 *field_8c;
} st_4f6b40_1;

typedef struct st_4f6b40_3 {
    unsigned int field_0;
    char padding_4[92];
    struct st_4f6b40_1 *field_60;
    char padding_64[700];
    unsigned int field_320;
    char padding_324[8];
    unsigned int field_32c;
    unsigned int field_330;
    unsigned int field_334;
    char padding_338[4];
    unsigned int field_33c;
    unsigned int field_340;
    char padding_344[16];
    unsigned int field_354;
    char padding_358[12];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char field_380;
    char padding_381[31];
    unsigned int field_3a0;
    char padding_3a4[40];
    unsigned int field_3cc;
    unsigned int field_3d0;
    unsigned int field_3d4;
    char padding_3d8[300];
    char field_504;
    char padding_505[439];
    unsigned int field_6bc;
    char padding_6c0[8];
    unsigned int field_6c8;
    char padding_6cc[136];
    float field_754;
    char padding_758[24];
    unsigned int field_770;
} st_4f6b40_3;

typedef struct st_4f6b40_2 {
    unsigned int field_0;
} st_4f6b40_2;

typedef struct st_4f6b40_0 {
    float field_0;
    char padding_4[36];
    float field_28;
    float field_2c;
    float field_30;
} st_4f6b40_0;

extern st_4f6b40_0 *gpGlobals;

st_4f6b40_3 * EnableWallJump__11CBasePlayerG6Vector(st_4f6b40_3 *a0, float *a1)
{
    st_4f6b40_3 *v10;  // eax
    st_4f6b40_3 *v11;  // ecx
    char *v20;  // esi
    char *v21;  // edi
    unsigned int v22;  // 4101
    unsigned int v23;  // 4109
    double v24;  // mm6
    char *v25;  // esi
    char *v26;  // edi
    unsigned int v27;  // ecx
    unsigned int v28;  // cc_op
    unsigned int v29;  // cc_dep1
    float *v12;  // eax
    unsigned int v30;  // cc_dep2
    char *v31;  // esi
    char *v32;  // edi
    unsigned int v33;  // 4101
    double v34;  // mm7
    double v35;  // mm7
    char *v36;  // esi
    char *v37;  // edi
    unsigned int v38;  // ecx
    unsigned int v39;  // cc_op
    char *v13;  // edi
    unsigned int v40;  // cc_dep1
    unsigned int v41;  // cc_dep2
    char *v42;  // esi
    char *v43;  // edi
    unsigned int v44;  // 4101
    double v45;  // mm7
    unsigned int *v46;  // edx
    st_4f6b40_3 *v47;  // eax
    char *v14;  // edi
    unsigned int v15;  // ecx
    unsigned int v16;  // cc_op
    unsigned int v17;  // cc_dep1
    unsigned int v18;  // cc_dep2
    unsigned int v19;  // eax
    float *v0;  // [bp-0x78], Other Possible Types: int
    float v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    float v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40], Other Possible Types: float
    unsigned int v5;  // [bp-0x3c]
    float v6;  // [bp-0x38]
    float v7;  // [bp-0x34]
    float v8;  // [bp-0x30]
    char v9;  // [bp-0x24]

    v10 = a0;
    if (!v10->field_364 && !v10->field_334 && !v10->field_330 && !v10->field_32c && !v10->field_340 && !v10->field_770 && !v10->field_37c && !v10->field_6bc && v10->field_60->field_8c(a0) && !a0->field_33c && !a0->field_354)
    {
        if (a0->field_320)
            sub_48c5a0(a0);
        sub_48a800(a0->field_0 + 80);
        v11 = a0;
        v11->field_6c8 = 1;
        v11->field_37c = 1;
        v11->field_754 = 0;
        *(float *)&v11->field_3cc = gpGlobals->field_28;
        *(float *)&v11->field_3d0 = gpGlobals->field_2c;
        *(float *)&v11->field_3d4 = gpGlobals->field_30;
        *(float *)&v11->field_3a0 = gpGlobals->field_0;
        sub_489d40(&v11->field_504);
        sub_4887c0(&a0->field_380);
        v12 = a1;
        *(float *)&v2 = *v12;
        *(float *)&v4 = v12[1];
        *(float *)&v5 = v12[2];
        v13 = &v9;
        sub_487ca0(a0, "grabwall_", &v2, &v9);
        v0 = a1;
        sub_488860(&v2, v0);
        v14 = "grabwall_forward";
        v15 = 0x11;
        v16 = 15;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        do
        {
            v20 = v13;
            v21 = v14;
            if (!v15)
                break;
            v15 -= 1;
            v16 = 4;
            v17 = *v20;
            v18 = *v21;
            v14 = v21 + 1;
            v13 = v20 + 1;
        } while (*v20 == *v21);
        v22 = _ccall(4, v16, v17, v18, 0);
        if (!(v22 & 1))
        {
            v23 = _ccall(v16, v17, v18, 0);
            v19 = -(v23 & 1) | 1;
        }
        if (!v19)
        {
            v24 = *(float *)&v4 + 180.0;
            v4 = (float)v24;
            if (v24 > 180.0)
                v4 = (float)(v24 - 360.0);
            v2 = -v2;
        }
        else
        {
            v25 = &v9;
            v26 = "grabwall_left";
            v27 = 14;
            v28 = 13;
            v29 = 0;
            v30 = 0;
            do
            {
                v31 = v25;
                v32 = v26;
                if (!v27)
                    break;
                v27 -= 1;
                v28 = 4;
                v29 = *v31;
                v30 = *v32;
                v26 = v32 + 1;
                v25 = v31 + 1;
            } while (*v31 == *v32);
            v33 = _ccall(4, v28, v29, v30, 0);
            if (v33 & 1)
            {
                v34 = *(float *)&v4 + 90.0;
                v4 = (float)v34;
                if (v34 <= 180.0)
                    goto LABEL_4f6d8c;
                v35 = v34 - 360.0;
                goto LABEL_4f6d87;
            }
            else
            {
                v36 = &v9;
                v37 = "grabwall_right";
                v38 = 15;
                v39 = 13;
                v40 = 0;
                v41 = 0;
                do
                {
                    v42 = v36;
                    v43 = v37;
                    if (!v38)
                        break;
                    v38 -= 1;
                    v39 = 4;
                    v40 = *v42;
                    v41 = *v43;
                    v37 = v43 + 1;
                    v36 = v42 + 1;
                } while (*v42 == *v43);
                v44 = _ccall(4, v39, v40, v41, 0);
                if (v44 & 1)
                {
                    v45 = *(float *)&v4 - 90.0;
                    v4 = (float)v45;
                    if (v45 < -180.0)
                    {
                        v35 = v45 + 360.0;
LABEL_4f6d87:
                        v4 = (float)v35;
                    }
                    else
                    {
LABEL_4f6d8c:
                    }
                }
            }
        }
        *(unsigned int *)&v3 = -v2;
        sub_48a800(&v3);
        v46 = &gpGlobals->field_28;
        v6 = gpGlobals->field_28;
        v7 = *(float *)&v46[1];
        v8 = *(float *)&v46[2];
        *(unsigned short *)&v0 = 1;
        return sub_488dc0(&a0->field_380, &v6, v0, gpGlobals->field_0, &v9);
    }
    v47 = a0;
    v1 = v47->field_754;
    sub_489f10(v47);
    a0->field_754 = v1;
    return a0;
}

