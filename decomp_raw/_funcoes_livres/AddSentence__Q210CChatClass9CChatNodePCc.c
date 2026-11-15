// AddSentence__Q210CChatClass9CChatNodePCc @0x143fb0 size=1358
typedef struct st_543fb0_2 {
    struct st_543fb0_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_543fb0_2;

typedef struct st_543fb0_3 {
    struct st_543fb0_1 *field_0;
    struct st_543fb0_1 *field_4;
} st_543fb0_3;

typedef struct st_543fb0_1 {
    unsigned int field_0;
    struct st_543fb0_0 *field_4;
    unsigned int field_8;
} st_543fb0_1;

typedef struct st_543fb0_0 {
    unsigned int field_0;
    unsigned int field_4;
    struct st_543fb0_1 *field_8;
} st_543fb0_0;

st_543fb0_2 * AddSentence__Q210CChatClass9CChatNodePCc(st_543fb0_2 *a0, char *a1)
{
    unsigned int v15;  // ecx
    char *v16;  // edi
    char *v25;  // edi
    unsigned int v26;  // ecx
    char *v27;  // edi
    char *v28;  // edi
    unsigned short v29;  // ax
    char v30;  // dl
    char v31;  // dl
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    char *v17;  // edi
    st_543fb0_1 **v35;  // edi
    st_543fb0_1 *v36;  // esi
    st_543fb0_0 *v37;  // esi
    st_543fb0_0 *v38;  // eax
    unsigned short v18;  // ax
    char *v19;  // eax
    char *v20;  // esi
    char *v21;  // eax
    char *v22;  // edx
    char *v23;  // edi
    unsigned int v24;  // ecx
    int v0;  // [bp-0xd4]
    char v1;  // [bp-0x89]
    st_543fb0_1 *v2;  // [bp-0x88]
    char v3;  // [bp-0x81]
    unsigned int v4;  // [bp-0x80]
    char v5;  // [bp-0x79]
    int v6;  // [bp-0x78]
    char *v7;  // [bp-0x74]
    unsigned int v8;  // [bp-0x70]
    int v9;  // [bp-0x6c]
    char v10;  // [bp-0x68]
    char v11;  // [bp-0x67]
    unsigned short iter;  // [bp-0x66]
    char v13;  // [bp-0x64]
    char v14;  // [bp-0x63]

    iter = 0;
    v11 = 0;
    v10 = 0;
    v9 = 50;
    *((char *)&v8 + 3) = 1;
    v15 = 0xffffffff;
    v16 = a1;
    do
    {
        v17 = v16;
    } while (v15 && (v15 -= 1, v16 = v17 + 1, *v17));
    v18 = ~v15 - 1;
    *(unsigned short *)&v8 = v18;
    if (iter < v18 && *a1)
    {
        do
        {
            v19 = iter;
            if (*(char *)(v19 + a1) != 32 && *(char *)(v19 + a1) != 9)
            {
                if (a1[iter] == 33)
                {
                    *((char *)&v8 + 3) = 0;
                }
                else
                {
                    if (strncasecmp@GLIBC_2.0(&a1[iter], "UV:", 3))
                        break;
                    iter += 3;
                    v20 = iter;
                    if (v20 < (short)v8 && v20 <= 0x4f)
                    {
                        v21 = a1;
                        if (*(char *)(v20 + v21) && (*(char *)(v20 + v21) == 32 || *(char *)(v20 + v21) == 9))
                        {
                            while (1)
                            {
                                v20 += 1;
                                if (v20 >= (short)v8 || v20 > 0x4f || !(v22 = a1, *(char *)(v20 + v22)))
                                    break;
                                if (*(char *)(v20 + v22) == 32)
                                    continue;
                                if (*(char *)(v20 + v22) != 9)
                                    break;
                            }
                        }
                    }
                    if (a1 + v20 && *(char *)(a1 + v20))
                    {
                        v13 = 0;
                        memset@GLIBC_2.0(&v14, 0, 79);
                        v7 = &v13;
                        strcpy@GLIBC_2.0(&v13, a1);
                        v23 = strtok@GLIBC_2.0(v7 + v20, " ");
                        if (v23 && *v23)
                        {
                            v9 = __strtol_internal@GLIBC_2.0(v23, 0, 10, 0);
                            v24 = 0xffffffff;
                            do
                            {
                                v25 = v23;
                            } while (v24 && (v24 -= 1, v23 = v25 + 1, *v25));
                            iter = (unsigned short)&v20[~v24];
                            goto LABEL_544227;
                        }
                    }
                }
            }
            iter += 1;
LABEL_544227:
        } while (iter < (unsigned short)v8 && (short)iter <= 79 && a1[iter]);
    }
    v26 = 0xffffffff;
    v27 = a1;
    do
    {
        v28 = v27;
    } while (v26 && (v26 -= 1, v27 = v28 + 1, *v28));
    v29 = ~v26 - 1;
    *(unsigned short *)&v8 = v29;
    v30 = 0;
    if ((short)(v29 - 1) > 0)
    {
        do
        {
            v31 = v30;
            v32 = v31;
            if (a1[v32] == 37)
            {
                if (a1[1 + v32] == 114)
                {
                    v11 += 1;
                }
                else if (a1[1 + v31] == 110)
                {
                    v10 += 1;
                }
            }
        } while ((v30 = v31 + 1, v31 + 1 < (unsigned short)v8 - 1));
    }
    if (v9 > 100)
    {
        v9 = 100;
    }
    else if (v9 < NULL)
    {
        v9 = 0;
    }
    v6 = __builtin_new(44);
    v5 = 1;
    v33 = (char)v9;
    *(unsigned short *)&v0 = _INSERT(v33, 0, *(char *)((void*)&v8 + 3));
    v34 = __Q210CChatClass13CChatSentencePCcbUcUcUc(v6, &a1[iter], v0, v33, v11, v10);
    v5 = 0;
    v35 = a0->field_0;
    v4 = v34;
    if (!*v35)
    {
        v36 = __builtin_new(12);
        v3 = 1;
        v36->field_4 = NULL;
        v36->field_8 = 0;
        memset@GLIBC_2.0(v36, 0, 4);
        v3 = 0;
        *v35 = v36;
        if (v3)
            __builtin_delete(v36);
        *v35->field_0 = v4;
        *v35->field_4 = NULL;
        *v35->field_8 = 0;
        v35[1] = *v35;
    }
    else
    {
        v2 = v35[1];
        v37 = __builtin_new(12);
        v1 = 1;
        v37->field_4 = 0;
        v37->field_8 = NULL;
        memset@GLIBC_2.0(v37, 0, 4);
        v1 = 0;
        v2->field_4 = v37;
        if (v1)
            __builtin_delete(v37);
        v35[1]->field_4->field_8 = v35[1];
        v38 = v35[1]->field_4;
        v35[1] = v38;
        v38->field_0 = v4;
        v35[1]->field_4 = NULL;
    }
    if (v5)
        __builtin_delete(v6);
    a0->field_10 = a0->field_10 + 1;
    a0->field_c = a0->field_c + v9;
    return a0;
}

