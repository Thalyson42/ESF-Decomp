// MakeMeleeComboList__4CBot @0x154fc0 size=3502
typedef struct st_554fc0_3 {
    char padding_0[2956];
    struct st_554fc0_4 *field_b8c;
} st_554fc0_3;

typedef struct st_554fc0_4 {
    struct st_554fc0_2 *field_0;
    struct st_554fc0_2 *field_4;
} st_554fc0_4;

typedef struct st_554fc0_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_554fc0_1;

typedef struct st_554fc0_2 {
    struct st_554fc0_1 *field_0;
    struct st_554fc0_0 *field_4;
    unsigned int field_8;
} st_554fc0_2;

typedef struct st_554fc0_0 {
    struct st_554fc0_1 *field_0;
    unsigned int field_4;
    struct st_554fc0_2 *field_8;
} st_554fc0_0;

typedef struct st_554fc0_5 {
    unsigned int field_0;
} st_554fc0_5;

extern st_554fc0_5 *g_engfuncs.pfnRandomLong;

char MakeMeleeComboList__4CBot(st_554fc0_3 *a0)
{
    st_554fc0_2 **v35;  // eax
    unsigned int v36;  // eax
    st_554fc0_2 **v45;  // edi
    st_554fc0_2 *v46;  // esi
    st_554fc0_0 *v47;  // esi
    st_554fc0_0 *v48;  // eax
    unsigned int *v49;  // eax
    st_554fc0_2 **v50;  // edi
    st_554fc0_2 *v51;  // esi
    st_554fc0_2 *v52;  // eax
    st_554fc0_0 *v53;  // esi
    st_554fc0_0 *v54;  // eax
    st_554fc0_2 **v37;  // edi
    st_554fc0_2 **v56;  // edi
    st_554fc0_2 *v57;  // esi
    st_554fc0_0 *v58;  // esi
    st_554fc0_0 *v59;  // eax
    st_554fc0_2 **v60;  // edi
    st_554fc0_2 *v61;  // esi
    st_554fc0_0 *v62;  // esi
    st_554fc0_0 *v63;  // eax
    unsigned int *v64;  // eax
    st_554fc0_2 *v38;  // esi
    st_554fc0_2 **v65;  // edi
    st_554fc0_2 *v66;  // esi
    st_554fc0_2 *v67;  // eax
    st_554fc0_0 *v68;  // esi
    st_554fc0_0 *v69;  // eax
    st_554fc0_0 *v39;  // esi
    st_554fc0_0 *v40;  // eax
    st_554fc0_2 **v41;  // edi
    st_554fc0_2 *v42;  // esi
    st_554fc0_0 *v43;  // esi
    st_554fc0_0 *v44;  // eax
    char v0;  // [bp-0x8d]
    st_554fc0_2 *v1;  // [bp-0x8c]
    char v2;  // [bp-0x85]
    unsigned int *v3;  // [bp-0x84]
    unsigned int *v4;  // [bp-0x80]
    char v5;  // [bp-0x79]
    st_554fc0_2 *v6;  // [bp-0x78]
    char v7;  // [bp-0x71]
    unsigned int *v8;  // [bp-0x70]
    unsigned int *v9;  // [bp-0x6c]
    char v10;  // [bp-0x65]
    st_554fc0_2 *v11;  // [bp-0x64]
    char v12;  // [bp-0x5d]
    unsigned int *v13;  // [bp-0x5c]
    unsigned int *v14;  // [bp-0x58]
    char v15;  // [bp-0x51]
    st_554fc0_2 *v16;  // [bp-0x50]
    char v17;  // [bp-0x49]
    unsigned int *v18;  // [bp-0x48]
    unsigned int *v19;  // [bp-0x44]
    char v20;  // [bp-0x3d]
    st_554fc0_2 *v21;  // [bp-0x3c]
    char v22;  // [bp-0x35]
    unsigned int *v23;  // [bp-0x34]
    unsigned int *v24;  // [bp-0x30]
    char v25;  // [bp-0x29]
    st_554fc0_2 *v26;  // [bp-0x28]
    char v27;  // [bp-0x21]
    unsigned int *v28;  // [bp-0x20]
    unsigned int *v29;  // [bp-0x1c]
    char v30;  // [bp-0x15]
    st_554fc0_2 *v31;  // [bp-0x14]
    char v32;  // [bp-0xd]
    unsigned int *v33;  // [bp-0xc]
    unsigned int *v34;  // [bp-0x8]

    CBot::ClearMeleeComboList(a0);
    v35 = __builtin_new(8);
    *v35 = NULL;
    v35[1] = NULL;
    a0->field_b8c = v35;
    v36 = g_engfuncs.pfnRandomLong(1, 2);
    if (v36 == 1)
    {
        v34 = __builtin_new(8);
        *v34 = 0;
        v34[1] = 0x11;
        v56 = a0->field_b8c;
        v33 = v34;
        if (!*v56)
        {
            v57 = __builtin_new(12);
            v32 = 1;
            v57->field_4 = NULL;
            v57->field_8 = 0;
            memset@GLIBC_2.0(v57, 0, 4);
            v32 = 0;
            *v56 = v57;
            if (v32)
                __builtin_delete(v57);
            *v56->field_0 = v33;
            *v56->field_4 = NULL;
            *v56->field_8 = 0;
            v56[1] = *v56;
        }
        else
        {
            v31 = v56[1];
            v58 = __builtin_new(12);
            v30 = 1;
            v58->field_4 = 0;
            v58->field_8 = NULL;
            memset@GLIBC_2.0(v58, 0, 4);
            v30 = 0;
            v31->field_4 = v58;
            if (v30)
                __builtin_delete(v58);
            v56[1]->field_4->field_8 = v56[1];
            v59 = v56[1]->field_4;
            v56[1] = v59;
            v59->field_0 = v33;
            v56[1]->field_4 = NULL;
        }
        v29 = __builtin_new(8);
        *v29 = 0;
        v29[1] = 529;
        v60 = a0->field_b8c;
        v28 = v29;
        if (!*v60)
        {
            v61 = __builtin_new(12);
            v27 = 1;
            v61->field_4 = NULL;
            v61->field_8 = 0;
            memset@GLIBC_2.0(v61, 0, 4);
            v27 = 0;
            *v60 = v61;
            if (v27)
                __builtin_delete(v61);
            *v60->field_0 = v28;
            *v60->field_4 = NULL;
            *v60->field_8 = 0;
            v60[1] = *v60;
        }
        else
        {
            v26 = v60[1];
            v62 = __builtin_new(12);
            v25 = 1;
            v62->field_4 = 0;
            v62->field_8 = NULL;
            memset@GLIBC_2.0(v62, 0, 4);
            v25 = 0;
            v26->field_4 = v62;
            if (v25)
                __builtin_delete(v62);
            v60[1]->field_4->field_8 = v60[1];
            v63 = v60[1]->field_4;
            v60[1] = v63;
            v63->field_0 = v28;
            v60[1]->field_4 = NULL;
        }
        v24 = __builtin_new(8);
        *v24 = 0;
        v64 = v24;
        v64[1] = 513;
        v65 = a0->field_b8c;
        v23 = v64;
        if (!*v65)
        {
            v66 = __builtin_new(12);
            v22 = 1;
            v66->field_4 = NULL;
            v66->field_8 = 0;
            memset@GLIBC_2.0(v66, 0, 4);
            v22 = 0;
            *v65 = v66;
            if (v22)
                __builtin_delete(v66);
            *v65->field_0 = v23;
            *v65->field_4 = NULL;
            *v65->field_8 = 0;
            v67 = *v65;
            v65[1] = v67;
        }
        else
        {
            v21 = v65[1];
            v68 = __builtin_new(12);
            v20 = 1;
            v68->field_4 = 0;
            v68->field_8 = NULL;
            memset@GLIBC_2.0(v68, 0, 4);
            v20 = 0;
            v21->field_4 = v68;
            if (v20)
                __builtin_delete(v68);
            v65[1]->field_4->field_8 = v65[1];
            v69 = v65[1]->field_4;
            v65[1] = v69;
            v69->field_0 = v23;
            v67 = v65[1];
            v67->field_4 = NULL;
        }
        v36 = _INSERT(v67, 0, 0);
    }
    else if (v36 == 2)
    {
        v19 = __builtin_new(8);
        *v19 = 0;
        v19[1] = 0x11;
        v37 = a0->field_b8c;
        v18 = v19;
        if (!*v37)
        {
            v38 = __builtin_new(12);
            v17 = 1;
            v38->field_4 = NULL;
            v38->field_8 = 0;
            memset@GLIBC_2.0(v38, 0, 4);
            v17 = 0;
            *v37 = v38;
            if (v17)
                __builtin_delete(v38);
            *v37->field_0 = v18;
            *v37->field_4 = NULL;
            *v37->field_8 = 0;
            v37[1] = *v37;
        }
        else
        {
            v16 = v37[1];
            v39 = __builtin_new(12);
            v15 = 1;
            v39->field_4 = 0;
            v39->field_8 = NULL;
            memset@GLIBC_2.0(v39, 0, 4);
            v15 = 0;
            v16->field_4 = v39;
            if (v15)
                __builtin_delete(v39);
            v37[1]->field_4->field_8 = v37[1];
            v40 = v37[1]->field_4;
            v37[1] = v40;
            v40->field_0 = v18;
            v37[1]->field_4 = NULL;
        }
        v14 = __builtin_new(8);
        *v14 = 0;
        v14[1] = 1041;
        v41 = a0->field_b8c;
        v13 = v14;
        if (!*v41)
        {
            v42 = __builtin_new(12);
            v12 = 1;
            v42->field_4 = NULL;
            v42->field_8 = 0;
            memset@GLIBC_2.0(v42, 0, 4);
            v12 = 0;
            *v41 = v42;
            if (v12)
                __builtin_delete(v42);
            *v41->field_0 = v13;
            *v41->field_4 = NULL;
            *v41->field_8 = 0;
            v41[1] = *v41;
        }
        else
        {
            v11 = v41[1];
            v43 = __builtin_new(12);
            v10 = 1;
            v43->field_4 = 0;
            v43->field_8 = NULL;
            memset@GLIBC_2.0(v43, 0, 4);
            v10 = 0;
            v11->field_4 = v43;
            if (v10)
                __builtin_delete(v43);
            v41[1]->field_4->field_8 = v41[1];
            v44 = v41[1]->field_4;
            v41[1] = v44;
            v44->field_0 = v13;
            v41[1]->field_4 = NULL;
        }
        v9 = __builtin_new(8);
        *v9 = 0;
        v9[1] = 1025;
        v45 = a0->field_b8c;
        v8 = v9;
        if (!*v45)
        {
            v46 = __builtin_new(12);
            v7 = 1;
            v46->field_4 = NULL;
            v46->field_8 = 0;
            memset@GLIBC_2.0(v46, 0, 4);
            v7 = 0;
            *v45 = v46;
            if (v7)
                __builtin_delete(v46);
            *v45->field_0 = v8;
            *v45->field_4 = NULL;
            *v45->field_8 = 0;
            v45[1] = *v45;
        }
        else
        {
            v6 = v45[1];
            v47 = __builtin_new(12);
            v5 = 1;
            v47->field_4 = 0;
            v47->field_8 = NULL;
            memset@GLIBC_2.0(v47, 0, 4);
            v5 = 0;
            v6->field_4 = v47;
            if (v5)
                __builtin_delete(v47);
            v45[1]->field_4->field_8 = v45[1];
            v48 = v45[1]->field_4;
            v45[1] = v48;
            v48->field_0 = v8;
            v45[1]->field_4 = NULL;
        }
        v4 = __builtin_new(8);
        *v4 = 1;
        v49 = v4;
        v49[1] = 0xa00;
        v50 = a0->field_b8c;
        v3 = v49;
        if (!*v50)
        {
            v51 = __builtin_new(12);
            v2 = 1;
            v51->field_4 = NULL;
            v51->field_8 = 0;
            memset@GLIBC_2.0(v51, 0, 4);
            v2 = 0;
            *v50 = v51;
            if (v2)
                __builtin_delete(v51);
            *v50->field_0 = v3;
            *v50->field_4 = NULL;
            *v50->field_8 = 0;
            v52 = *v50;
            v50[1] = v52;
        }
        else
        {
            v1 = v50[1];
            v53 = __builtin_new(12);
            v0 = 1;
            v53->field_4 = 0;
            v53->field_8 = NULL;
            memset@GLIBC_2.0(v53, 0, 4);
            v0 = 0;
            v1->field_4 = v53;
            if (v0)
                __builtin_delete(v53);
            v50[1]->field_4->field_8 = v50[1];
            v54 = v50[1]->field_4;
            v50[1] = v54;
            v54->field_0 = v3;
            v52 = v50[1];
            v52->field_4 = NULL;
        }
        v36 = _INSERT(v52, 0, 0);
    }
    return v36;
}

