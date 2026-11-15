// InitModulationParms__15CAmbientGeneric @0x11aed0 size=663
typedef struct st_51aed0_1 {
    struct st_51aed0_0 *field_0;
    char padding_4[100];
    int field_68;
    int field_6c;
    unsigned int field_70;
    int field_74;
    int field_78;
    int field_7c;
    unsigned int field_80;
    int field_84;
    int field_88;
    unsigned int field_8c;
    int field_90;
    unsigned int field_94;
    char padding_98[4];
    int field_9c;
    unsigned int field_a0;
    unsigned int field_a4;
    int field_a8;
    int field_ac;
    unsigned int field_b0;
    int field_b4;
    int field_b8;
    int field_bc;
    unsigned int field_c0;
    unsigned int field_c4;
} st_51aed0_1;

typedef struct st_51aed0_0 {
    char padding_0[352];
    unsigned int field_160;
} st_51aed0_0;

extern char __vt_11CSolarFlare+252;

st_51aed0_1 * InitModulationParms__15CAmbientGeneric(st_51aed0_1 *a0)
{
    st_51aed0_1 *v4;  // edx
    st_51aed0_1 *v5;  // edx
    unsigned int v14;  // eax
    st_51aed0_1 *v15;  // edx
    int v16;  // eax
    st_51aed0_1 *v17;  // edx
    st_51aed0_1 *v18;  // ecx
    int v19;  // eax
    st_51aed0_1 *v20;  // eax
    unsigned int *iter;  // edi
    unsigned int *i;  // esi
    unsigned int v8;  // ecx
    st_51aed0_1 *v9;  // ecx
    st_51aed0_1 *v10;  // ecx
    st_51aed0_1 *v11;  // edx
    unsigned int v12;  // eax
    st_51aed0_1 *v13;  // edx
    int v0;  // [bp-0x14]
    int v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x8]
    unsigned short v3;  // [bp-0x6]

    v4 = a0;
    v3 = __fnstcw();
    v2 = v3 | 0xc00;
    v1 = (int)(*(float *)&v4->field_0->field_160 * 10.0);
    v4->field_7c = v1;
    if (v1 > 100)
        v4->field_7c = 100;
    if (a0->field_7c < 0)
        a0->field_7c = 0;
    v5 = a0;
    if (v5->field_68 && v5->field_68 <= 27)
    {
        iter = &v5->field_68;
        i = &(&__vt_11CSolarFlare+252)[100 * v5->field_68];
        for (v8 = 25; v8; i += 1)
        {
            v8 -= 1;
            *iter = *i;
            iter += 1;
        }
        if (v5->field_78 > 0)
            v5->field_78 = (101 - v5->field_78) * 64;
        if (a0->field_74 > 0)
            a0->field_74 = (101 - a0->field_74) * 64;
        v9 = a0;
        v9->field_80 = v9->field_80 * 10;
        v9->field_7c = v9->field_7c * 10;
        if (v9->field_84 > 0)
            v9->field_84 = (101 - v9->field_84) * 64;
        if (a0->field_88 > 0)
            a0->field_88 = (101 - a0->field_88) * 64;
        v10 = a0;
        v10->field_90 = v10->field_90 * 0x100;
        v10->field_b8 = v10->field_84;
        v10->field_bc = v10->field_88;
        v10->field_a8 = v10->field_74;
        v10->field_ac = v10->field_78;
    }
    v11 = a0;
    v12 = v11->field_b8;
    v11->field_84 = v12;
    v11->field_88 = 0;
    if (v12)
        v11->field_b4 = v11->field_80;
    else
        a0->field_b4 = a0->field_7c;
    v13 = a0;
    v14 = v13->field_a8;
    v13->field_74 = v14;
    v13->field_78 = 0;
    if (v14)
        v13->field_a4 = v13->field_70;
    else
        a0->field_a4 = a0->field_6c;
    if (!a0->field_a4)
        a0->field_a4 = 100;
    v15 = a0;
    v15->field_b0 = v15->field_a4 * 0x100;
    v15->field_c0 = v15->field_b4 * 0x100;
    v15->field_c4 = 0;
    v16 = v15->field_90;
    if (v16 < 0)
        v16 = -v16;
    v17 = a0;
    v17->field_90 = v16;
    v17->field_a0 = 1;
    if (v17->field_9c)
    {
        v0 = v17->field_70;
        v18 = v17;
        v19 = (0xff - v17->field_70) / v18->field_9c + v0;
        v18->field_6c = v19;
        if (v19 > 0xff)
            v18->field_6c = 0xff;
    }
    v20 = a0;
    if (!v20->field_a8 && !v20->field_ac)
    {
        if (!v20->field_8c)
        {
            return v20;
        }
        else if (!v20->field_94)
        {
            return v20;
        }
    }
    if (a0->field_a4 == 100)
        a0->field_a4 = 101;
    return v20;
}

