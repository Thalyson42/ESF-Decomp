// GetRandomTeleDir__13CTeleportTask @0x182850 size=3806
typedef struct st_582850_2 {
    char padding_0[12];
    int field_c;
} st_582850_2;

typedef struct st_582850_0 {
    struct st_582850_1 *field_0;
    struct st_582850_0 *field_4;
    struct st_582850_0 *field_8;
} st_582850_0;

typedef struct st_582850_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
} st_582850_1;

typedef struct st_582850_3 {
    unsigned int field_0;
} st_582850_3;

extern unsigned int FindSelection__t12TMultiChoice1ZiPQ2t12TMultiChoice1Zi12SMultiChoicei;
extern st_582850_3 *g_616928;

int GetRandomTeleDir__13CTeleportTask(st_582850_2 *a0)
{
    st_582850_0 **v37;  // eax
    unsigned int *v38;  // eax
    st_582850_0 *v47;  // eax
    unsigned int *v48;  // eax
    st_582850_0 **v49;  // esi
    st_582850_0 *v50;  // edi
    st_582850_0 *v51;  // edi
    st_582850_0 *v52;  // eax
    unsigned int *v53;  // eax
    st_582850_0 **v54;  // esi
    st_582850_0 *v55;  // edi
    st_582850_0 *v56;  // edi
    st_582850_0 **v39;  // esi
    st_582850_0 *v57;  // eax
    unsigned int *v58;  // eax
    st_582850_0 **v59;  // esi
    st_582850_0 *v60;  // edi
    st_582850_0 *v61;  // edi
    st_582850_0 *v62;  // eax
    unsigned int *v63;  // eax
    st_582850_0 **v64;  // esi
    st_582850_0 *v65;  // edi
    st_582850_0 *v66;  // edi
    st_582850_0 *v40;  // edi
    st_582850_0 *v67;  // eax
    unsigned int *v68;  // eax
    st_582850_0 **v69;  // esi
    st_582850_0 *v70;  // edi
    st_582850_0 *v71;  // edi
    st_582850_0 *v72;  // eax
    st_582850_0 *v74;  // esi
    st_582850_0 *v75;  // esi
    st_582850_0 *v76;  // esi
    st_582850_0 *v41;  // edi
    unsigned int *v77;  // eax
    st_582850_0 **v78;  // edx
    unsigned int *v79;  // esi
    st_582850_0 *v80;  // ecx
    st_582850_0 *v81;  // eax
    unsigned int *v82;  // eax
    st_582850_0 **v83;  // edi
    st_582850_0 *node;  // esi
    st_582850_0 *v85;  // eax
    st_582850_0 *v42;  // eax
    unsigned int *v43;  // eax
    st_582850_0 **v44;  // esi
    st_582850_0 *v45;  // edi
    st_582850_0 *v46;  // edi
    unsigned int v0;  // [bp-0x98]
    char *v1;  // [bp-0x94]
    unsigned int v2;  // [bp-0x90]
    unsigned int *v3;  // [bp-0x8c]
    unsigned int v4;  // [bp-0x88]
    char *v5;  // [bp-0x84]
    char v6;  // [bp-0x7d]
    st_582850_0 *v7;  // [bp-0x7c]
    char v8;  // [bp-0x75]
    unsigned int *v9;  // [bp-0x74]
    char v10;  // [bp-0x6d]
    st_582850_0 *v11;  // [bp-0x6c]
    char v12;  // [bp-0x65]
    unsigned int *v13;  // [bp-0x64]
    char v14;  // [bp-0x5d]
    st_582850_0 *v15;  // [bp-0x5c]
    char v16;  // [bp-0x55]
    unsigned int *v17;  // [bp-0x54]
    char v18;  // [bp-0x4d]
    st_582850_0 *v19;  // [bp-0x4c]
    char v20;  // [bp-0x45]
    unsigned int *v21;  // [bp-0x44]
    char v22;  // [bp-0x3d]
    st_582850_0 *v23;  // [bp-0x3c]
    char v24;  // [bp-0x35]
    unsigned int *v25;  // [bp-0x34]
    char v26;  // [bp-0x2d]
    st_582850_0 *v27;  // [bp-0x2c]
    char v28;  // [bp-0x25]
    unsigned int *v29;  // [bp-0x24]
    char v30;  // [bp-0x1d]
    st_582850_0 *v31;  // [bp-0x1c]
    char v32;  // [bp-0x15]
    unsigned int *v33;  // [bp-0x14]
    unsigned int v34;  // [bp-0x10]
    unsigned int iter;  // [bp-0xc]
    st_582850_0 **v36;  // [bp-0x8], Other Possible Types: unsigned int

    iter = 0;
    v37 = sub_48d6a0(8);
    *v37 = NULL;
    v37[1] = NULL;
    v36 = v37;
    if (!(char)sub_487c70(a0->field_c, 2, 350.0f))
    {
        v38 = sub_48d6a0(12);
        *v38 = 0;
        v38[1] = 0;
        v33 = v38;
        *v33 = iter;
        v33[1] = iter + 30;
        v33[2] = 2;
        v39 = v36;
        if (!*v39)
        {
            v40 = sub_48d6a0(12);
            v32 = 1;
            v40->field_4 = NULL;
            v40->field_8 = NULL;
            sub_48d0e0(v40, 0, 4);
            v32 = 0;
            *v39 = v40;
            if (v32)
                sub_48d4e0(v40);
            *v39->field_0 = v33;
            *v39->field_4 = NULL;
            *v39->field_8 = NULL;
            v39[1] = *v39;
        }
        else
        {
            v31 = v39[1];
            v41 = sub_48d6a0(12);
            v30 = 1;
            v41->field_4 = NULL;
            v41->field_8 = NULL;
            sub_48d0e0(v41, 0, 4);
            v30 = 0;
            v31->field_4 = v41;
            if (v30)
                sub_48d4e0(v41);
            v39[1]->field_4->field_8 = v39[1];
            v42 = v39[1]->field_4;
            v39[1] = v42;
            v42->field_0 = v33;
            v39[1]->field_4 = NULL;
        }
        iter += 30;
    }
    if (!(char)sub_487c70(a0->field_c, 4, 350.0f))
    {
        v43 = sub_48d6a0(12);
        *v43 = 0;
        v43[1] = 0;
        v29 = v43;
        *v29 = iter;
        v29[1] = iter + 30;
        v29[2] = 4;
        v44 = v36;
        if (!*v44)
        {
            v45 = sub_48d6a0(12);
            v28 = 1;
            v45->field_4 = NULL;
            v45->field_8 = NULL;
            sub_48d0e0(v45, 0, 4);
            v28 = 0;
            *v44 = v45;
            if (v28)
                sub_48d4e0(v45);
            *v44->field_0 = v29;
            *v44->field_4 = NULL;
            *v44->field_8 = NULL;
            v44[1] = *v44;
        }
        else
        {
            v27 = v44[1];
            v46 = sub_48d6a0(12);
            v26 = 1;
            v46->field_4 = NULL;
            v46->field_8 = NULL;
            sub_48d0e0(v46, 0, 4);
            v26 = 0;
            v27->field_4 = v46;
            if (v26)
                sub_48d4e0(v46);
            v44[1]->field_4->field_8 = v44[1];
            v47 = v44[1]->field_4;
            v44[1] = v47;
            v47->field_0 = v29;
            v44[1]->field_4 = NULL;
        }
        iter += 30;
    }
    if (!(char)sub_487c70(a0->field_c, 32, 650.0f))
    {
        v48 = sub_48d6a0(12);
        *v48 = 0;
        v48[1] = 0;
        v25 = v48;
        *v25 = iter;
        v25[1] = iter + 75;
        v25[2] = 32;
        v49 = v36;
        if (!*v49)
        {
            v50 = sub_48d6a0(12);
            v24 = 1;
            v50->field_4 = NULL;
            v50->field_8 = NULL;
            sub_48d0e0(v50, 0, 4);
            v24 = 0;
            *v49 = v50;
            if (v24)
                sub_48d4e0(v50);
            *v49->field_0 = v25;
            *v49->field_4 = NULL;
            *v49->field_8 = NULL;
            v49[1] = *v49;
        }
        else
        {
            v23 = v49[1];
            v51 = sub_48d6a0(12);
            v22 = 1;
            v51->field_4 = NULL;
            v51->field_8 = NULL;
            sub_48d0e0(v51, 0, 4);
            v22 = 0;
            v23->field_4 = v51;
            if (v22)
                sub_48d4e0(v51);
            v49[1]->field_4->field_8 = v49[1];
            v52 = v49[1]->field_4;
            v49[1] = v52;
            v52->field_0 = v25;
            v49[1]->field_4 = NULL;
        }
        iter += 75;
    }
    if (!(char)sub_487c70(a0->field_c, 64, 650.0f))
    {
        v53 = sub_48d6a0(12);
        *v53 = 0;
        v53[1] = 0;
        v21 = v53;
        *v21 = iter;
        v21[1] = iter + 75;
        v21[2] = 64;
        v54 = v36;
        if (!*v54)
        {
            v55 = sub_48d6a0(12);
            v20 = 1;
            v55->field_4 = NULL;
            v55->field_8 = NULL;
            sub_48d0e0(v55, 0, 4);
            v20 = 0;
            *v54 = v55;
            if (v20)
                sub_48d4e0(v55);
            *v54->field_0 = v21;
            *v54->field_4 = NULL;
            *v54->field_8 = NULL;
            v54[1] = *v54;
        }
        else
        {
            v19 = v54[1];
            v56 = sub_48d6a0(12);
            v18 = 1;
            v56->field_4 = NULL;
            v56->field_8 = NULL;
            sub_48d0e0(v56, 0, 4);
            v18 = 0;
            v19->field_4 = v56;
            if (v18)
                sub_48d4e0(v56);
            v54[1]->field_4->field_8 = v54[1];
            v57 = v54[1]->field_4;
            v54[1] = v57;
            v57->field_0 = v21;
            v54[1]->field_4 = NULL;
        }
        iter += 75;
    }
    if (!(char)sub_487c70(a0->field_c, 0x40000, 650.0f))
    {
        v58 = sub_48d6a0(12);
        *v58 = 0;
        v58[1] = 0;
        v17 = v58;
        *v17 = iter;
        v17[1] = iter + 40;
        v17[2] = 10;
        v59 = v36;
        if (!*v59)
        {
            v60 = sub_48d6a0(12);
            v16 = 1;
            v60->field_4 = NULL;
            v60->field_8 = NULL;
            sub_48d0e0(v60, 0, 4);
            v16 = 0;
            *v59 = v60;
            if (v16)
                sub_48d4e0(v60);
            *v59->field_0 = v17;
            *v59->field_4 = NULL;
            *v59->field_8 = NULL;
            v59[1] = *v59;
        }
        else
        {
            v15 = v59[1];
            v61 = sub_48d6a0(12);
            v14 = 1;
            v61->field_4 = NULL;
            v61->field_8 = NULL;
            sub_48d0e0(v61, 0, 4);
            v14 = 0;
            v15->field_4 = v61;
            if (v14)
                sub_48d4e0(v61);
            v59[1]->field_4->field_8 = v59[1];
            v62 = v59[1]->field_4;
            v59[1] = v62;
            v62->field_0 = v17;
            v59[1]->field_4 = NULL;
        }
        iter += 40;
    }
    if (!(char)sub_487c70(a0->field_c, 0x80000, 650.0f))
    {
        v63 = sub_48d6a0(12);
        *v63 = 0;
        v63[1] = 0;
        v13 = v63;
        *v13 = iter;
        v13[1] = iter + 40;
        v13[2] = 12;
        v64 = v36;
        if (!*v64)
        {
            v65 = sub_48d6a0(12);
            v12 = 1;
            v65->field_4 = NULL;
            v65->field_8 = NULL;
            sub_48d0e0(v65, 0, 4);
            v12 = 0;
            *v64 = v65;
            if (v12)
                sub_48d4e0(v65);
            *v64->field_0 = v13;
            *v64->field_4 = NULL;
            *v64->field_8 = NULL;
            v64[1] = *v64;
        }
        else
        {
            v11 = v64[1];
            v66 = sub_48d6a0(12);
            v10 = 1;
            v66->field_4 = NULL;
            v66->field_8 = NULL;
            sub_48d0e0(v66, 0, 4);
            v10 = 0;
            v11->field_4 = v66;
            if (v10)
                sub_48d4e0(v66);
            v64[1]->field_4->field_8 = v64[1];
            v67 = v64[1]->field_4;
            v64[1] = v67;
            v67->field_0 = v13;
            v64[1]->field_4 = NULL;
        }
        iter += 40;
    }
    if (!(char)sub_487c70(a0->field_c, 8, 650.0f))
    {
        v68 = sub_48d6a0(12);
        *v68 = 0;
        v68[1] = 0;
        v9 = v68;
        *v9 = iter;
        v9[1] = iter + 40;
        v9[2] = 8;
        v69 = v36;
        if (!*v69)
        {
            v70 = sub_48d6a0(12);
            v8 = 1;
            v70->field_4 = NULL;
            v70->field_8 = NULL;
            sub_48d0e0(v70, 0, 4);
            v8 = 0;
            *v69 = v70;
            if (v8)
                sub_48d4e0(v70);
            *v69->field_0 = v9;
            *v69->field_4 = NULL;
            *v69->field_8 = NULL;
            v69[1] = *v69;
        }
        else
        {
            v7 = v69[1];
            v71 = sub_48d6a0(12);
            v6 = 1;
            v71->field_4 = NULL;
            v71->field_8 = NULL;
            sub_48d0e0(v71, 0, 4);
            v6 = 0;
            v7->field_4 = v71;
            if (v6)
                sub_48d4e0(v71);
            v69[1]->field_4->field_8 = v69[1];
            v72 = v69[1]->field_4;
            v69[1] = v72;
            v72->field_0 = v9;
            v69[1]->field_4 = NULL;
        }
        iter += 40;
    }
    v34 = 0;
    v5 = &v34;
    v4 = g_616928(0, iter);
    v2 = _INSERT(v4, 0, 0) | 0xffff0000;
    v3 = &FindSelection__t12TMultiChoice1ZiPQ2t12TMultiChoice1Zi12SMultiChoicei;
    v74 = *v36;
    if (*v36)
    {
        v1 = (char *)&iter + (unsigned short)v2;
        do
        {
            v75 = v74;
            v76 = v75->field_4;
            if ((char)v3(v1, v75->field_0, v4))
            {
                v77 = &v75->field_0->field_0;
                goto LABEL_58355f;
            }
        } while ((v74 = v76, v75->field_4));
        v77 = NULL;
LABEL_58355f:
        if (v77)
            v34 = v77[2];
    }
    v0 = v34;
    while (*v36 && (v78 = v36, *v78))
    {
        v79 = &*v78->field_0->field_0;
        v80 = *v78;
        if (v80)
        {
            if (v80 == v78[1])
                v78[1] = v80->field_4;
            v81 = *v78->field_4;
            *v78 = v81;
            if (v81)
                v81->field_8 = NULL;
            v80->field_4 = NULL;
            sub_48d4e0(v80);
        }
        v82 = v79;
        if (!v82)
            break;
        sub_48d4e0(v82);
    }
    if (v36)
    {
        v83 = v36;
        node = *v83;
        if (*v83)
        {
            do
            {
                v85 = node;
                node = node->field_4;
                v85->field_4 = NULL;
                v85->field_8 = NULL;
                sub_48d4e0(v85);
            } while (node);
        }
        v83[1] = NULL;
        *v83 = NULL;
        sub_48d4e0(v83);
    }
    v36 = 0;
    return v0;
}

