// ReadChatFile__10CChatClass @0x1449d0 size=2337
typedef struct st_5449d0_0 {
    char padding_0[840];
    int field_348;
} st_5449d0_0;

typedef struct st_5449d0_1 {
    unsigned int field_0;
} st_5449d0_1;

extern st_5449d0_1 *g_616904;
extern int server_cmd.2781;

int ReadChatFile__10CChatClass(st_5449d0_0 *a0)
{
    int i;  // esi
    unsigned int v37;  // eax
    unsigned int v46;  // cc_dep2
    char *v47;  // esi
    char *v48;  // edi
    unsigned int v49;  // 4101
    char *v50;  // esi
    char *v51;  // edi
    unsigned int v52;  // ecx
    unsigned int v53;  // cc_op
    unsigned int v54;  // cc_dep1
    unsigned int v55;  // cc_dep2
    int idx;  // esi
    char *v56;  // esi
    char *v57;  // edi
    unsigned int v58;  // 4101
    char *v59;  // esi
    char *v60;  // edi
    unsigned int v61;  // ecx
    unsigned int v62;  // cc_op
    unsigned int v63;  // cc_dep1
    unsigned int v64;  // cc_dep2
    char *v65;  // esi
    int k;  // esi
    char *v66;  // edi
    unsigned int v67;  // 4101
    char *v68;  // esi
    char *v69;  // edi
    unsigned int v70;  // ecx
    unsigned int v71;  // cc_op
    unsigned int v72;  // cc_dep1
    unsigned int v73;  // cc_dep2
    char *v74;  // esi
    char *v75;  // edi
    unsigned int v40;  // eax
    unsigned int v76;  // 4101
    int n;  // esi
    char *v78;  // esi
    unsigned int v79;  // ecx
    char *v80;  // edi
    unsigned int v81;  // eax
    int v82;  // esi
    unsigned int v83;  // eax
    int v84;  // esi
    int index;  // esi
    char *v41;  // edi
    char *v42;  // edi
    unsigned int v43;  // ecx
    unsigned int v44;  // cc_op
    unsigned int v45;  // cc_dep1
    int v0;  // [bp-0x55c]
    char *v1;  // [bp-0x538]
    char *v2;  // [bp-0x534]
    char *v3;  // [bp-0x530]
    char *v4;  // [bp-0x52c]
    char *v5;  // [bp-0x528]
    char *v6;  // [bp-0x524]
    char *v7;  // [bp-0x520]
    char *v8;  // [bp-0x51c]
    unsigned int v9;  // [bp-0x518]
    int v10;  // [bp-0x514]
    unsigned int v11;  // [bp-0x510]
    char v12;  // [bp-0x509]
    int l;  // [bp-0x508]
    char v14;  // [bp-0x504]
    char v15;  // [bp-0x4b5]
    char v16;  // [bp-0x4a4]
    char v17;  // [bp-0x3a4]
    char v18;  // [bp-0x2a4]
    char v19;  // [bp-0x2a2]
    char v20;  // [bp-0x2a1]
    char v21;  // [bp-0x2a0]
    char v22;  // [bp-0x29f]
    unsigned int v23;  // [bp-0x284]
    char v24;  // [bp-0x245]
    char v25;  // [bp-0x244]
    char v26;  // [bp-0x205]
    char v27;  // [bp-0x204]
    char v28;  // [bp-0x1c5]
    char v29;  // [bp-0x1c4]
    char v30;  // [bp-0x185]
    char v31;  // [bp-0x184]
    char v32;  // [bp-0x145]
    char v33;  // [bp-0x144]
    char v34;  // [bp-0x105]
    char v35;  // [bp-0x104]

    v18 = 0;
    sub_48d0e0(&v18 + 1, 0, 5);
    v12 = 0;
    v11 = 4;
    v10 = 3;
    i = 0;
    do
    {
        v37 = i * 4;
        *(unsigned int *)&a0[1].padding_0[12 + v37] = 0;
        *(unsigned int *)&a0[1].padding_0[32 + v37] = 0;
        *(unsigned int *)&a0[1].padding_0[52 + v37] = 0;
        i += 1;
    } while (i <= 4);
    idx = 0;
    do
    {
        *(char *)&(&v23)[16 * idx] = 0;
        idx += 1;
    } while (idx <= 5);
    k = 0;
    do
    {
        (&v18)[k] = 0;
        k += 1;
    } while (k <= 5);
    sub_489050(&v35, "esf_bot_chat.txt", 0);
    g_616904("Reading bot_chat file... ");
    l = sub_48d440(&v35, "r");
    if (!l)
        return g_616904("file not found\n");
    v14 = 0;
    sub_48d0e0(&v14 + 1, 0, 79);
    if (!l)
        return g_616904("done\n");
    v2 = &v17;
    v1 = &v14;
    do
    {
        v9 = 0;
        v17 = 0;
        v0 = l;
        while (1)
        {
            v40 = sub_487f00(v0);
            switch (v40)
            {
            case 9: case 32:
                v0 = l;
                continue;
            case 10: case 4294967295:
LABEL_544c18:
                if (v40 != 13)
                    break;
            case 13:
LABEL_544c1d:
                v40 = sub_487f00(l);
                break;
            default:
                while (1)
                {
                    if (v40 == 9)
                        v40 = 32;
                    (&v17)[v9] = v40;
                    v40 = sub_487f00(l);
                    if ((&v17)[v9] == 32 && v40 == 32)
                    {
                        do
                        {
                            v40 = sub_487f00(l);
                        } while ((&v17)[v9] == 32 && v40 == 32);
                    }
                    v9 += 1;
                    if (v40 == 0xffffffff)
                        break;
                    if (v40 == 13)
                        goto LABEL_544c1d;
                    if (v40 == 10)
                        break;
                }
                goto LABEL_544c18;
            }
            break;
        }
        if (v40 == 0xffffffff)
        {
            sub_48c560(l);
            l = 0;
        }
        v2[v9] = 0;
        sub_48e110(&server_cmd.2781, v2);
        sub_48c150(&server_cmd.2781, "\n");
        v41 = &v16;
        sub_48e110(&v16, v2);
        sub_48d6b0(v2, " ,");
        v8 = sub_48d6b0(0, " ,");
        v7 = sub_48d6b0(0, " ,");
        v6 = sub_48d6b0(0, " ,");
        v5 = sub_48d6b0(0, " ,");
        v4 = sub_48d6b0(0, " ,");
        v3 = sub_48d6b0(0, " ,");
        if (v16 == 35 || !v16)
            continue;
        v42 = "[bot_welcome]";
        v43 = 14;
        v44 = 13;
        v45 = 0;
        v46 = 0;
        do
        {
            v47 = v41;
            v48 = v42;
            if (!v43)
                break;
            v43 -= 1;
            v44 = 4;
            v45 = *v47;
            v46 = *v48;
            v42 = v48 + 1;
            v41 = v47 + 1;
        } while (*v47 == *v48);
        v49 = _ccall(4, v44, v45, v46, 0);
        if (v49 & 1)
        {
            v11 = 0;
            continue;
        }
        else
        {
            v50 = &v16;
            v51 = "[bot_chat]";
            v52 = 11;
            v53 = 13;
            v54 = 0;
            v55 = 0;
            do
            {
                v56 = v50;
                v57 = v51;
                if (!v52)
                    break;
                v52 -= 1;
                v53 = 4;
                v54 = *v56;
                v55 = *v57;
                v51 = v57 + 1;
                v50 = v56 + 1;
            } while (*v56 == *v57);
            v58 = _ccall(4, v53, v54, v55, 0);
            if (v58 & 1)
            {
                v11 = 1;
                continue;
            }
            else
            {
                v59 = &v16;
                v60 = "[bot_taunt]";
                v61 = 12;
                v62 = 13;
                v63 = 0;
                v64 = 0;
                do
                {
                    v65 = v59;
                    v66 = v60;
                    if (!v61)
                        break;
                    v61 -= 1;
                    v62 = 4;
                    v63 = *v65;
                    v64 = *v66;
                    v60 = v66 + 1;
                    v59 = v65 + 1;
                } while (*v65 == *v66);
                v67 = _ccall(4, v62, v63, v64, 0);
                if (v67 & 1)
                {
                    v11 = 3;
                    continue;
                }
                else
                {
                    v68 = &v16;
                    v69 = "[bot_whine]";
                    v70 = 12;
                    v71 = 13;
                    v72 = 0;
                    v73 = 0;
                    do
                    {
                        v74 = v68;
                        v75 = v69;
                        if (!v70)
                            break;
                        v70 -= 1;
                        v71 = 4;
                        v72 = *v74;
                        v73 = *v75;
                        v69 = v75 + 1;
                        v68 = v74 + 1;
                    } while (*v74 == *v75);
                    v76 = _ccall(4, v71, v72, v73, 0);
                    if (v76 & 1)
                    {
                        v11 = 2;
                        continue;
                    }
                    else
                    {
                        if (v11 == 4)
                            continue;
                        if (v16 == 123)
                        {
                            v12 = 1;
                            continue;
                        }
                        else if (v16 == 125)
                        {
                            v12 = 0;
                            continue;
                        }
                        else
                        {
                            if (!sub_48d130(&v16, "keyword", 7) || !sub_48d130(&v16, "keyword2", 8))
                            {
                                index = 0;
                                do
                                {
                                    *(char *)&(&v23)[16 * index] = 0;
                                    index += 1;
                                } while (index <= 5);
                                v10 = !sub_48d130(&v16, "keyword2", 8);
                                if (v8 && *v8)
                                {
                                    sub_48d360(&v23, v8, 63);
                                    v24 = 0;
                                }
                                if (v7 && *v7)
                                {
                                    sub_48d360(&v25, v7, 63);
                                    v26 = 0;
                                }
                                if (v6 && *v6)
                                {
                                    sub_48d360(&v27, v6, 63);
                                    v28 = 0;
                                }
                                if (v5 && *v5)
                                {
                                    sub_48d360(&v29, v5, 63);
                                    v30 = 0;
                                }
                                if (v4 && *v4)
                                {
                                    sub_48d360(&v31, v4, 63);
                                    v32 = 0;
                                }
                                if (!v3 || !*v3)
                                    continue;
                                sub_48d360(&v33, v3, 63);
                                v34 = 0;
                            }
                            else if (!sub_48d130(&v16, "keytoken", 8))
                            {
                                n = 0;
                                do
                                {
                                    (&v18)[n] = 0;
                                    n += 1;
                                } while (n <= 5);
                                v10 = 2;
                                if (v8 && *v8)
                                    v18 = *v8;
                                if (v7 && *v7)
                                    (&v18)[1] = *v7;
                                if (v6 && *v6)
                                    v19 = *v6;
                                if (v5 && *v5)
                                    v20 = *v5;
                                if (v4 && *v4)
                                    v21 = *v4;
                                if (v3 && *v3)
                                {
                                    v22 = *v3;
                                    goto LABEL_5452bf;
                                }
                            }
                            else
                            {
                                if (!v12)
                                    continue;
                                v78 = &v14;
                                sub_48d360(&v14, &v16, 79);
                                v15 = 0;
                                v79 = 0xffffffff;
                                do
                                {
                                    v80 = v78;
                                } while (v79 && (v79 -= 1, v78 = v80 + 1, *v80));
                                v81 = ~v79 - 2;
                                if ((&v14)[v81] == 10)
                                    (&v14)[v81] = 0;
                                if (v10 == 3)
                                    v10 = 0;
                                if (!v11)
                                {
                                    sub_488b40(a0->field_348, v1);
                                }
                                else if (v11 == 1)
                                {
                                    if ((unsigned int)v10 <= 1)
                                    {
                                        if (!(char)v23)
                                            v23 = 7105601;
                                        sub_48b310(a0, v1, &v23, v10);
                                        v82 = 1;
                                        do
                                        {
                                            v83 = v82 * 64;
                                            if (*(v83 + (char *)&v23))
                                                sub_48b310(a0, v1, v83 + (char *)&v23, v10);
                                        } while ((v82 += 1, v82 <= 5));
                                    }
                                    else
                                    {
                                        if (!*&v18)
                                            v18 = 32;
                                        sub_48b310(a0, v1, &v18, v10);
                                        v84 = 1;
                                        do
                                        {
                                            if ((&v18)[v84])
                                                sub_48b310(a0, v1, &(&v18)[v84], v10);
                                        } while ((v84 += 1, v84 <= 5));
                                    }
                                }
                                else
                                {
                                    if (v11 == 3)
                                    {
                                        if (!(char)v23)
                                            v23 = 7105601;
                                        sub_4894d0(a0, v1, "All", v10);
                                    }
                                    else
                                    {
                                        if (v11 != 2)
                                            continue;
                                        if (!(char)v23)
                                            v23 = 7105601;
                                        sub_489600(a0, v1, "All", v10);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
LABEL_5452bf:
    } while (l);
    return g_616904("done\n");
}

