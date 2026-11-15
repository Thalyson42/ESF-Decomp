// CreateSuperbotSettings__11CBotManager @0x140120 size=1991
typedef struct st_540120_0 {
    unsigned int field_0;
} st_540120_0;

extern st_540120_0 *g_engfuncs.pfnServerPrint;
extern st_540120_0 *g_engfuncs.pfnRandomLong;
extern int server_cmd.2922;
extern unsigned short BotManager+4292;
extern unsigned short BotManager+4294;
extern unsigned int BotManager+4296;
extern unsigned int BotManager+4300;
extern unsigned short BotManager+4304;

int CreateSuperbotSettings__11CBotManager(void)
{
    unsigned int index;  // esi
    char *v11;  // esi
    unsigned int v20;  // cc_op
    unsigned int v21;  // cc_dep1
    unsigned int v22;  // cc_dep2
    char *v23;  // esi
    char *v24;  // edi
    unsigned int v25;  // 4101
    char *v26;  // esi
    char *v27;  // edi
    unsigned int v28;  // ecx
    unsigned int v29;  // cc_op
    unsigned int v12;  // eax
    unsigned int v30;  // cc_dep1
    unsigned int v31;  // cc_dep2
    char *v32;  // esi
    char *v33;  // edi
    unsigned int v34;  // 4101
    char *v35;  // esi
    char *v36;  // edi
    unsigned int v37;  // ecx
    unsigned int v38;  // cc_op
    unsigned int v39;  // cc_dep1
    unsigned int v13;  // esi
    unsigned int v40;  // cc_dep2
    char *v41;  // esi
    char *v42;  // edi
    unsigned int v43;  // 4101
    char *v44;  // esi
    char *v45;  // edi
    unsigned int v46;  // ecx
    unsigned int v47;  // cc_op
    unsigned int v48;  // cc_dep1
    unsigned int v49;  // cc_dep2
    unsigned int v14;  // esi
    char *v50;  // esi
    char *v51;  // edi
    unsigned int v52;  // 4101
    char *v53;  // esi
    char *v54;  // edi
    unsigned int v55;  // ecx
    unsigned int v56;  // cc_op
    unsigned int v57;  // cc_dep1
    unsigned int v58;  // cc_dep2
    char *v59;  // esi
    unsigned int v15;  // esi
    char *v60;  // edi
    unsigned int v61;  // 4101
    char *v62;  // esi
    char *v63;  // edi
    unsigned int v64;  // ecx
    unsigned int v65;  // cc_op
    unsigned int v66;  // cc_dep1
    unsigned int v67;  // cc_dep2
    char *v68;  // esi
    char *v69;  // edi
    unsigned int v16;  // esi
    unsigned int v70;  // 4101
    unsigned int v71;  // edx
    unsigned int *v72;  // eax
    char *v73;  // esi
    char *v74;  // edi
    unsigned int v75;  // ecx
    unsigned int v76;  // cc_op
    unsigned int v77;  // cc_dep1
    unsigned int v78;  // cc_dep2
    char *v79;  // esi
    char *v17;  // esi
    char *v80;  // edi
    unsigned int v81;  // 4101
    char *v82;  // esi
    char *v83;  // edi
    unsigned int v84;  // ecx
    unsigned int v85;  // cc_op
    unsigned int v86;  // cc_dep1
    unsigned int v87;  // cc_dep2
    char *v88;  // esi
    char *v89;  // edi
    char *v18;  // edi
    unsigned int v90;  // 4101
    unsigned int v19;  // ecx
    int v0;  // [bp-0x23c]
    char *v1;  // [bp-0x218]
    char *v2;  // [bp-0x214]
    unsigned int v3;  // [bp-0x210]
    int idx;  // [bp-0x20c]
    int j;  // [bp-0x208]
    char v6;  // [bp-0x204]
    char v7;  // [bp-0x104]
    char v8;  // [bp-0x103]

    v7 = 0;
    memset@GLIBC_2.0(&v8, 0, 0xff);
    memset@GLIBC_2.0(&BotManager+4292, 0, 48);
    BuildBotFileName(&v7, "sbot.cfg", 0);
    j = fopen@GLIBC_2.1(&v7, "r");
    idx = 0;
    do
    {
        index = idx * 16;
        *(unsigned short *)(index + (char *)&BotManager+4292) = g_engfuncs.pfnRandomLong(0xffffffff, 5);
        *(unsigned short *)(index + (char *)&BotManager+4294) = g_engfuncs.pfnRandomLong(0xffffffff, 5);
        *(unsigned int *)(index + (char *)&BotManager+4296) = g_engfuncs.pfnRandomLong(3500000, 10000000);
        *(unsigned int *)(index + (char *)&BotManager+4300) = g_engfuncs.pfnRandomLong(1, 0xff);
        *(unsigned short *)(index + (char *)&BotManager+4304) = g_engfuncs.pfnRandomLong(0, 100);
        idx += 1;
    } while (idx <= 2);
    g_engfuncs.pfnServerPrint("Reading sbot.cfg file... ");
    if (!j)
        return g_engfuncs.pfnServerPrint("file not found, random settings will be used\n");
    do
    {
        v11 = NULL;
        v6 = 0;
        v0 = j;
        while (1)
        {
            v12 = fgetc@GLIBC_2.0(v0);
            if (v12 != 32)
                break;
            v0 = j;
        }
        if (v12 == 0xffffffff)
            goto LABEL_540361;
        switch (v12)
        {
        case 10:
LABEL_540361:
            if (v12 != 13)
                goto LABEL_540378;
        case 13:
LABEL_540366:
            v12 = fgetc@GLIBC_2.0(j);
LABEL_540378:
            if (v12 == 0xffffffff)
            {
                fclose@GLIBC_2.1(j);
                j = 0;
            }
            *(char *)(v11 + &v6) = 0;
            strcpy@GLIBC_2.0(&server_cmd.2922, &v6);
            strcat@GLIBC_2.0(&server_cmd.2922, "\n");
            v13 = 0;
            v2 = NULL;
            switch (v6)
            {
            case 0:
LABEL_5403ef:
                if ((&v6)[v13] != 32)
                    goto LABEL_54049f;
            case 32:
LABEL_5403fd:
                (&v6)[v13] = 0;
                v14 = v13 + 1;
                v2 = &(&v6)[v14];
                if ((&v6)[v14] != 32)
                {
                    if ((&v6)[v14])
                    {
                        do
                        {
                            v14 += 1;
                            if ((&v6)[v14] == 32)
                                goto LABEL_540437;
                        } while ((&v6)[v14]);
                    }
                    if ((&v6)[v14] != 32)
                        goto LABEL_54049f;
                }
LABEL_540437:
                (&v6)[v14] = 0;
                v15 = v14 + 1;
                if ((&v6)[v15] != 32)
                {
                    if ((&v6)[v15])
                    {
                        do
                        {
                            v15 += 1;
                            if ((&v6)[v15] == 32)
                                goto LABEL_540467;
                        } while ((&v6)[v15]);
                    }
                    if ((&v6)[v15] != 32)
                        goto LABEL_54049f;
                }
LABEL_540467:
                (&v6)[v15] = 0;
                v16 = v15 + 1;
                if ((&v6)[v16] != 32)
                {
                    if ((&v6)[v16])
                    {
                        do
                        {
                            v16 += 1;
                            if ((&v6)[v16] == 32)
                                goto LABEL_540497;
                        } while ((&v6)[v16]);
                    }
                    if ((&v6)[v16] != 32)
                        goto LABEL_54049f;
                }
LABEL_540497:
                (&v6)[v16] = 0;
LABEL_54049f:
                if (*&v6 != 35 && *&v6)
                {
                    v17 = &v6;
                    v18 = "[SUPERBOT]";
                    v19 = 11;
                    v20 = 13;
                    v21 = 0;
                    v22 = 0;
                    do
                    {
                        v23 = v17;
                        v24 = v18;
                        if (!v19)
                            break;
                        v19 -= 1;
                        v20 = 4;
                        v21 = *v23;
                        v22 = *v24;
                        v18 = v24 + 1;
                        v17 = v23 + 1;
                    } while (*v23 == *v24);
                    v25 = _ccall(4, v20, v21, v22, 0);
                    if (v25 & 1)
                    {
                        idx = 0;
                    }
                    else
                    {
                        v26 = &v6;
                        v27 = "[MEGABOT]";
                        v28 = 10;
                        v29 = 13;
                        v30 = 0;
                        v31 = 0;
                        do
                        {
                            v32 = v26;
                            v33 = v27;
                            if (!v28)
                                break;
                            v28 -= 1;
                            v29 = 4;
                            v30 = *v32;
                            v31 = *v33;
                            v27 = v33 + 1;
                            v26 = v32 + 1;
                        } while (*v32 == *v33);
                        v34 = _ccall(4, v29, v30, v31, 0);
                        if (v34 & 1)
                        {
                            idx = 1;
                        }
                        else
                        {
                            v35 = &v6;
                            v36 = "[ULTIMATEBOT]";
                            v37 = 14;
                            v38 = 13;
                            v39 = 0;
                            v40 = 0;
                            do
                            {
                                v41 = v35;
                                v42 = v36;
                                if (!v37)
                                    break;
                                v37 -= 1;
                                v38 = 4;
                                v39 = *v41;
                                v40 = *v42;
                                v36 = v42 + 1;
                                v35 = v41 + 1;
                            } while (*v41 == *v42);
                            v43 = _ccall(4, v38, v39, v40, 0);
                            if (v43 & 1)
                                idx = 2;
                        }
                    }
                    if (!v2 || !*v2 || idx == -0x1)
                        break;
                    v3 = __strtol_internal@GLIBC_2.0(v2, 0, 10, 0);
                    v44 = &v6;
                    v45 = "ki_gain";
                    v46 = 8;
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
                        if (v3 + 1 <= 1001)
                        {
                            (&BotManager+4292)[8 * idx] = v3;
                            break;
                        }
                        else
                        {
                            (&BotManager+4292)[8 * idx] = g_engfuncs.pfnRandomLong(0xffffffff, 5);
                            goto LABEL_5408b2;
                        }
                    }
                    v53 = &v6;
                    v54 = "health_gain";
                    v55 = 12;
                    v56 = 13;
                    v57 = 0;
                    v58 = 0;
                    do
                    {
                        v59 = v53;
                        v60 = v54;
                        if (!v55)
                            break;
                        v55 -= 1;
                        v56 = 4;
                        v57 = *v59;
                        v58 = *v60;
                        v54 = v60 + 1;
                        v53 = v59 + 1;
                    } while (*v59 == *v60);
                    v61 = _ccall(4, v56, v57, v58, 0);
                    if (v61 & 1)
                    {
                        if (v3 + 1 <= 251)
                        {
                            (&BotManager+4294)[8 * idx] = v3;
                            break;
                        }
                        else
                        {
                            (&BotManager+4294)[8 * idx] = g_engfuncs.pfnRandomLong(0xffffffff, 5);
                            goto LABEL_5408b2;
                        }
                    }
                    v62 = &v6;
                    v63 = "powerlevel";
                    v64 = 11;
                    v65 = 13;
                    v66 = 0;
                    v67 = 0;
                    do
                    {
                        v68 = v62;
                        v69 = v63;
                        if (!v64)
                            break;
                        v64 -= 1;
                        v65 = 4;
                        v66 = *v68;
                        v67 = *v69;
                        v63 = v69 + 1;
                        v62 = v68 + 1;
                    } while (*v68 == *v69);
                    v70 = _ccall(4, v65, v66, v67, 0);
                    if (!(v70 & 1))
                    {
                        v73 = &v6;
                        v74 = "transparency_val";
                        v75 = 0x11;
                        v76 = 13;
                        v77 = 0;
                        v78 = 0;
                        do
                        {
                            v79 = v73;
                            v80 = v74;
                            if (!v75)
                                break;
                            v75 -= 1;
                            v76 = 4;
                            v77 = *v79;
                            v78 = *v80;
                            v74 = v80 + 1;
                            v73 = v79 + 1;
                        } while (*v79 == *v80);
                        v81 = _ccall(4, v76, v77, v78, 0);
                        if (v81 & 1)
                        {
                            if (v3 == 0xffffffff || v3 - 1 <= 254)
                            {
                                v71 = idx * 16;
                                v72 = &BotManager+4300;
                            }
                            else
                            {
                                (&BotManager+4300)[4 * idx] = g_engfuncs.pfnRandomLong(1, 0xff);
                                goto LABEL_5408b2;
                            }
                        }
                        else
                        {
                            v82 = &v6;
                            v83 = "sbotlaser_percent";
                            v84 = 18;
                            v85 = 13;
                            v86 = 0;
                            v87 = 0;
                            do
                            {
                                v88 = v82;
                                v89 = v83;
                                if (!v84)
                                    break;
                                v84 -= 1;
                                v85 = 4;
                                v86 = *v88;
                                v87 = *v89;
                                v83 = v89 + 1;
                                v82 = v88 + 1;
                            } while (*v88 == *v89);
                            v90 = _ccall(4, v85, v86, v87, 0);
                            if (!(v90 & 1))
                                break;
                            if (v3 <= 100)
                            {
                                (&BotManager+4304)[8 * idx] = v3;
                                break;
                            }
                            else
                            {
                                (&BotManager+4304)[8 * idx] = g_engfuncs.pfnRandomLong(0, 100);
                            }
LABEL_5408b2:
                            break;
                        }
                    }
                    else if (v3 - 650000 <= 99349999)
                    {
                        v71 = idx * 16;
                        v72 = &BotManager+4296;
                    }
                    else
                    {
                        (&BotManager+4296)[4 * idx] = g_engfuncs.pfnRandomLong(650000, 10000000);
                        goto LABEL_5408b2;
                    }
                    *(unsigned int *)(v71 + (char *)v72) = v3;
                    break;
                }
                break;
            default:
                do
                {
                    v13 += 1;
                    if ((&v6)[v13] == 32)
                        goto LABEL_5403fd;
                } while ((&v6)[v13]);
                goto LABEL_5403ef;
            }
        default:
            v1 = &v6;
            do
            {
                if (v12 == 9)
                    v12 = 32;
                *(char *)(v11 + v1) = v12;
                v12 = fgetc@GLIBC_2.0(j);
                if (*(char *)(v11 + v1) == 32 && v12 == 32)
                {
                    do
                    {
                        v12 = fgetc@GLIBC_2.0(j);
                    } while (*(char *)(v11 + &v6) == 32 && v12 == 32);
                }
                v11 += 1;
                if (v12 == 0xffffffff)
                    break;
                if (v12 == 13)
                    goto LABEL_540366;
            } while (v12 != 10);
            goto LABEL_540361;
        }
    } while (j);
    return g_engfuncs.pfnServerPrint("done\n");
}

