// PlayFullBodyAnimation__11CBasePlayer @0xf45e0 size=1715
typedef struct st_4f45e0_0 {
    char padding_0[644];
    int field_284;
    int field_288;
    char padding_28c[4];
    unsigned int field_290;
    unsigned int field_294;
    char padding_298[4];
    unsigned int field_29c;
    unsigned int field_2a0;
} st_4f45e0_0;

typedef struct st_4f45e0_1 {
    float field_0;
} st_4f45e0_1;

extern st_4f45e0_1 *gpGlobals;

unsigned int PlayFullBodyAnimation__11CBasePlayer(float idx)
{
    char *v7;  // eax
    unsigned int *v8;  // esi
    int v17;  // esi
    unsigned int *v18;  // eax
    st_4f45e0_0 *v9;  // esi
    unsigned int v10;  // edx
    int v11;  // eax
    unsigned int *v12;  // eax
    float v13;  // 128
    unsigned int v14;  // eax
    int v15;  // eax
    int v16;  // eax
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    int v2;  // [bp-0x5c]
    unsigned short v3;  // [bp-0x58]
    unsigned short v4;  // [bp-0x56]
    char v5[64];  // [bp-0x44]

    *(unsigned int *)(*(unsigned int *)&idx + 376) = 0;
    v1 = 0;
    v0 = 0;
    if (*(int *)(*(unsigned int *)&idx + 1912) == 10)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 376) = 91;
        v7 = "wrap";
        goto LABEL_4f4aba;
    }
    if (*(int *)(*(unsigned int *)&idx + 1912))
        return 0;
    v8 = *(unsigned int *)&idx + 896;
    if (sub_48ae90(v8))
    {
        v9 = sub_487fb0(v8);
        v10 = sub_48afe0(idx, &v9->padding_0[32 * v9->field_288]);
        if (v10 == 0xffffffff)
            v10 = 0;
        if (!v9->field_29c)
        {
            *(float *)(*(int *)idx + 304) = 0.0010000000474974513f;
            *(unsigned int *)(*(unsigned int *)&idx + 120) = 0;
            v9->field_2a0 = *(int *)(*(int *)idx + 420) & 0x200;
            v9->field_29c = 1;
        }
        *(int *)(*(unsigned int *)&idx + 376) = *(int *)&v9->padding_0[0x200 + 4 * v9->field_288];
        v0 = v10;
        v1 = 1;
        if (v10 == *(int *)(*(int *)idx + 296) && *(int *)(*(unsigned int *)&idx + 120) || *(float *)(*(int *)idx + 304) == 255.0f)
        {
            if (v9->field_294)
            {
                sub_48b0c0(*(unsigned int *)&idx + 896);
                goto LABEL_4f4b9a;
            }
            v11 = v9->field_288 + 1;
            if (v11 < v9->field_284)
            {
                v9->field_288 = v11;
            }
            else if (!v9->field_290 && (v12 = *(unsigned int *)&idx + 896, !v12[81]))
            {
                sub_48b460(v12, v9);
LABEL_4f4b9a:
            }
        }
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 1904) && !*(int *)(*(unsigned int *)&idx + 828))
        {
            v1 = 1;
            v13 = *(float *)(*(unsigned int *)&idx + 1908) - *(float *)gpGlobals;
            v14 = *(int *)(*(unsigned int *)&idx + 1408);
            if (v14 == 2)
            {
                if (1.0 < v13)
                    goto LABEL_4f47d5;
                goto LABEL_4f47fb;
            }
            else if ((int)v14 <= 2)
            {
                if (v14 != 1)
                    goto LABEL_4f47d5;
LABEL_4f47fb:
                strcpy(v5, "change_finish");
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 124;
                goto LABEL_4f4ab4;
            }
            else if (v14 != 3)
            {
LABEL_4f47d5:
                strcpy(v5, "change_normal");
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 125;
                goto LABEL_4f4ab4;
            }
            else
            {
                if (1.0 >= v13)
                    goto LABEL_4f47fb;
                strcpy(v5, "change_long");
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 126;
                goto LABEL_4f4ab4;
            }
        }
        if (*(int *)(*(unsigned int *)&idx + 892))
        {
            if (*(int *)(*(unsigned int *)&idx + 1288))
            {
                sub_488620(*(unsigned int *)&idx + 1284, v5, *(unsigned int *)&idx + 376);
            }
            else
            {
                if (!*(int *)(*(unsigned int *)&idx + 936))
                    goto LABEL_4f4aad;
                sub_48d480(*(unsigned int *)&idx + 896, v5, *(unsigned int *)&idx + 376);
            }
            goto LABEL_4f4aad;
        }
        if (*(int *)(*(unsigned int *)&idx + 828))
        {
            if (*(int *)(*(int *)idx + 264) == 15)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 82;
                strcpy(v5, "ref_beam_push");
                goto LABEL_4f4aad;
            }
            else
            {
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 81;
                strcpy(v5, "ref_control_");
                sub_48c150(v5, *(unsigned int *)&idx + 2476);
                goto LABEL_4f4aad;
            }
        }
        if (*(int *)(*(unsigned int *)&idx + 824) && *(float *)(*(unsigned int *)&idx + 1876) == 0.0f)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 376) = 80;
            strcpy(v5, "ref_charge2_");
            goto LABEL_4f4a12;
        }
        if (*(int *)(*(unsigned int *)&idx + 820) && *(float *)(*(unsigned int *)&idx + 1876) == 0.0f)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 376) = 80;
            strcpy(v5, "ref_charge_");
LABEL_4f4a12:
            sub_48c150(v5, *(unsigned int *)&idx + 2476);
            v1 = 1;
            v0 = sub_48afe0(idx, v5);
        }
        else
        {
            if (*(int *)(*(unsigned int *)&idx + 812) && !*(int *)(*(unsigned int *)&idx + 1924))
            {
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 79;
                if (*(int *)(*(unsigned int *)&idx + 800))
                {
                    strcpy(v5, "fly_block");
                    v1 = 2;
                    goto LABEL_4f4ab4;
                }
                else
                {
                    strcpy(v5, "ref_block");
                }
LABEL_4f4aad:
                v1 = 1;
LABEL_4f4ab4:
                v7 = &v5[0];
LABEL_4f4aba:
                v0 = sub_48afe0(idx, v7);
                goto LABEL_4f4b9a;
            }
            if (*(int *)(*(unsigned int *)&idx + 864))
            {
                v0 = sub_48afe0(idx, "struggle");
                *(unsigned int *)(*(unsigned int *)&idx + 376) = 92;
                goto LABEL_4f4b9a;
            }
            if (*(int *)(*(unsigned int *)&idx + 816))
            {
                if (*(int *)(*(unsigned int *)&idx + 372) == 77 && *(int *)(*(unsigned int *)&idx + 120) || *(int *)(*(unsigned int *)&idx + 372) == 78)
                {
                    *(unsigned int *)(*(unsigned int *)&idx + 376) = 78;
                    if (*(int *)(*(unsigned int *)&idx + 800))
                    {
                        v15 = "fly_powerup_charge";
                        goto LABEL_4f4b6c;
                    }
                    else
                    {
                        v16 = "ref_powerup_charge";
                        goto LABEL_4f4b89;
                    }
                }
                else
                {
                    *(unsigned int *)(*(unsigned int *)&idx + 376) = 77;
                    if (*(int *)(*(unsigned int *)&idx + 800))
                    {
                        v15 = "fly_powerup";
LABEL_4f4b6c:
                        v0 = sub_48afe0(idx, v15);
                        v1 = 2;
                        goto LABEL_4f4b9a;
                    }
                    else
                    {
                        v16 = "ref_powerup";
LABEL_4f4b89:
                        v0 = sub_48afe0(idx, v16);
                        v1 = 1;
                        goto LABEL_4f4b9a;
                    }
                }
            }
        }
    }
    if (!*(int *)(*(unsigned int *)&idx + 376))
        return 0;
    if (*(int *)(*(unsigned int *)&idx + 1912))
        *(unsigned int *)(*(unsigned int *)&idx + 1912) = 0;
    v17 = 0;
    if (*(int *)(*(unsigned int *)&idx + 372) == *(int *)(*(unsigned int *)&idx + 376))
    {
        if (v1 && v1 == *(int *)(*(unsigned int *)&idx + 1916))
            goto LABEL_4f4c80;
        if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
        {
            v18 = *(int *)idx;
            v4 = __fnstcw();
            v3 = v4 | 0xc00;
            v2 = (int)*(float *)&v18[76];
            v17 = v2;
            *(char *)&v18[70] = (char)v18[70] | 32;
        }
    }
    *(int *)(*(unsigned int *)&idx + 372) = *(int *)(*(unsigned int *)&idx + 376);
    *(unsigned int *)(*(unsigned int *)&idx + 1916) = v1;
    if (v0 == 0xffffffff)
        v0 = 0;
    if (*(int *)(*(int *)idx + 296) != v0)
    {
        *(unsigned int *)(*(int *)idx + 300) = 0;
        *(unsigned int *)(*(int *)idx + 296) = v0;
        v2 = v17;
        *(float *)(*(int *)idx + 304) = (float)v2;
        sub_488850(idx);
    }
LABEL_4f4c80:
    return 1;
}

