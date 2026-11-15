// SENTENCEG_Init__Fv @0x11d210 size=1060
typedef struct st_51d210_0 {
    unsigned int field_0;
} st_51d210_0;

extern unsigned int fSentencesInit;
extern int gcallsentences;
extern st_51d210_0 *g_engfuncs.pfnAlertMessage;
extern st_51d210_0 *g_engfuncs.pfnLoadFileForMe;
extern st_51d210_0 *g_engfuncs.pfnFreeFile;
extern int gszallsentencenames;
extern unsigned int rgsentenceg;
extern unsigned int rgsentenceg+16[4];

unsigned int * SENTENCEG_Init__Fv(void)
{
    char *v13;  // ecx
    char *v14;  // esi
    unsigned int v23;  // edx
    unsigned int *v24;  // edx
    unsigned int *v25;  // esi
    unsigned int v15;  // edx
    char *v16;  // edx
    unsigned int v17;  // ecx
    char *v18;  // edi
    char *v19;  // edi
    char *v20;  // esi
    unsigned int v21;  // eax
    unsigned int v22;  // esi
    int v0;  // [bp-0x28c]
    int v1;  // [bp-0x264]
    char *v2;  // [bp-0x260]
    unsigned int v3;  // [bp-0x25c]
    unsigned int *v4;  // [bp-0x258]
    int idx;  // [bp-0x254]
    char *iter;  // [bp-0x250], Other Possible Types: int
    unsigned int v7;  // [bp-0x24c]
    char v8;  // [bp-0x248], Other Possible Types: int
    char v9;  // [bp-0x244]
    char v10;  // [bp-0x206]

    if (fSentencesInit)
        return &fSentencesInit;
    memset@GLIBC_2.0(&gszallsentencenames, 0, 0x6000);
    gcallsentences = 0;
    memset@GLIBC_2.0(&rgsentenceg, 0, 10400);
    memset@GLIBC_2.0(&v10 + 2, 0, 0x200);
    memset@GLIBC_2.0(&v9, 0, 64);
    idx = -0x1;
    v7 = 0;
    v4 = g_engfuncs.pfnLoadFileForMe("sound/sentences.txt", &v8);
    if (!v4)
        return v4;
    v3 = &v10 + 2;
    while (memfgets__FPUciRiPci(v4, v8, &v7, v3, 0x1ff))
    {
        iter = NULL;
        if (*&(&v10)[2] == 32)
        {
            do
            {
                iter += 1;
            } while (*(char *)(iter + &v10 + 2) == 32);
        }
        v13 = iter;
        if (!*(char *)(v13 + &v10 + 2) || *(char *)(v13 + &v10 + 2) == 47 || !isalpha@GLIBC_2.0(*(char *)(v13 + &v10 + 2)) || !(v14 = iter, *(char *)(v14 + &v10 + 2)))
            continue;
        if (*(char *)(v14 + &v10 + 2) != 32)
        {
            do
            {
                v14 += 1;
            } while (*(char *)(v14 + &v10 + 2) != 32);
        }
        if (!v14[v3])
            continue;
        if (gcallsentences > 0x600)
        {
            v23 = "Too many sentences in sentences.txt!\n";
            goto LABEL_51d4d1;
        }
        else
        {
            v15 = v3;
            v14[v15] = 0;
            v16 = &iter[v15];
            v2 = v16;
            v17 = 0xffffffff;
            v18 = v16;
            do
            {
                v19 = v18;
            } while (v17 && (v17 -= 1, v18 = v19 + 1, *v19));
            if (~v17 - 1 > 15)
                g_engfuncs.pfnAlertMessage(3, "Sentence %s longer than %d letters\n", v16, 15);
            v0 = &(&gszallsentencenames)[4 * gcallsentences];
            gcallsentences = gcallsentences + 1;
            strcpy@GLIBC_2.0(v0, v2);
            v20 = v14 - 1;
            if (v20 <= iter || !isdigit@GLIBC_2.0(v20[v3]))
                continue;
            while (1)
            {
                if (v20 <= iter)
                    continue;
                if (!isdigit@GLIBC_2.0(*(char *)(v20 + &v10 + 2)))
                    break;
                v20 -= 1;
            }
            if (v20 <= iter)
                continue;
            v21 = v3;
            v20[1 + v21] = 0;
            if (strcmp@GLIBC_2.0(&v9, &iter[v21]))
            {
                idx += 1;
                if (idx > 199)
                {
                    v23 = "Too many sentence groups in sentences.txt!\n";
                }
                else
                {
                    v1 = &iter[v3];
                    v22 = idx * 52;
                    strcpy@GLIBC_2.0((char *)&rgsentenceg + v22, v1);
                    *(unsigned int *)(v22 + (char *)&rgsentenceg+16[0]) = 1;
                    strcpy@GLIBC_2.0(&v9, v1);
                    continue;
                }
LABEL_51d4d1:
                g_engfuncs.pfnAlertMessage(4, v23);
                break;
            }
            else if (idx >= 0)
            {
                rgsentenceg+16[13 * idx] = rgsentenceg+16[13 * idx] + 1;
            }
        }
    }
    g_engfuncs.pfnFreeFile(v4);
    fSentencesInit = 1;
    iter = 0;
    v24 = &rgsentenceg;
    if (!rgsentenceg+16)
        return &rgsentenceg;
    while (1)
    {
        v25 = v24;
        USENTENCEG_InitLRU(&v25[13 * iter + 5], rgsentenceg+16[13 * iter]);
        iter += 1;
        v24 = v25;
        if (!rgsentenceg+16[13 * iter])
        {
            return iter * 13;
        }
        else if (iter > 199)
        {
            return iter * 13;
        }
    }
}

