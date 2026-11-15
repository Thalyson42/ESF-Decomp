// GetUpperBodyAnimation__11CBasePlayerRi @0xf4ca0 size=1858
typedef struct st_4f4ca0_1 {
    void* field_0;
    char padding_4[368];
    unsigned int field_174;
    unsigned int field_178;
    char padding_17c[420];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[12];
    unsigned int field_334;
    unsigned int field_338;
    char padding_33c[592];
    unsigned int field_58c;
    char padding_590[488];
    unsigned int field_778;
    unsigned int field_77c;
    char padding_780[4];
    unsigned int field_784;
} st_4f4ca0_1;

typedef struct st_4f4ca0_0 {
    float field_0;
} st_4f4ca0_0;

extern st_4f4ca0_0 *gpGlobals;

unsigned int GetUpperBodyAnimation__11CBasePlayerRi(st_4f4ca0_1 *a0, unsigned int *a1)
{
    double v11;  // mm7
    double v12;  // mm6
    unsigned int v21;  // ecx
    st_4f4ca0_1 *v22;  // eax
    void* node;  // edi
    void* k;  // esi
    unsigned int v25;  // ecx
    unsigned int v26;  // edx
    st_4f4ca0_1 *v27;  // edx
    st_4f4ca0_1 *v28;  // edx
    st_4f4ca0_1 *v29;  // edx
    unsigned int v30;  // eax
    st_4f4ca0_1 *v13;  // ecx
    unsigned int v31;  // eax
    st_4f4ca0_1 *v32;  // eax
    st_4f4ca0_1 *v33;  // edx
    st_4f4ca0_1 *v34;  // ecx
    st_4f4ca0_1 *v35;  // edx
    st_4f4ca0_1 *v36;  // edx
    unsigned int v37;  // eax
    st_4f4ca0_1 *v38;  // ecx
    unsigned int v39;  // eax
    st_4f4ca0_1 *v40;  // edx
    st_4f4ca0_1 *v14;  // eax
    int v41;  // eax
    st_4f4ca0_1 *v42;  // ecx
    st_4f4ca0_1 *v43;  // ecx
    void* iter;  // edi
    void* i;  // esi
    unsigned int v17;  // ecx
    st_4f4ca0_1 *v18;  // edx
    void* iter1;  // edi
    void* j;  // esi
    st_4f4ca0_1 *v0;  // [bp-0xcc]
    char *v1;  // [bp-0xc8]
    st_4f4ca0_1 *v2;  // [bp-0xbc]
    char *v3;  // [bp-0xb8], Other Possible Types: int, unsigned int
    double v4;  // [bp-0x94]
    double v5;  // [bp-0x8c]
    float v6;  // [bp-0x80]
    unsigned short v7;  // [bp-0x7c]
    unsigned short v8;  // [bp-0x7a]
    int v9;  // [bp-0x78]
    char v10;  // [bp-0x64]

    v11 = (float)a0->field_0[32] * (float)a0->field_0[32] + (float)a0->field_0[36] * (float)a0->field_0[36];
    v12 = sqrt(v11);
    if (isnan(v12))
        sqrt(*(unsigned int *)&v11);
    else
        v11 = v12;
    v6 = (float)v11;
    if (a0->field_778 == 5)
    {
        a0->field_178 = 28;
        strcpy(&v10, "ref_shoot_");
        goto LABEL_4f4e13;
    }
    if (a0->field_778 == 6)
    {
        a0->field_178 = 29;
        strcpy(&v10, "ref_shoot2_");
        strcat@GLIBC_2.0(&v10, &a0[1].padding_17c[168]);
        v1 = &v10;
        goto LABEL_4f534d;
    }
    v13 = a0;
    if (v13->field_338)
    {
        v13->field_178 = 80;
        strcpy(&v10, "ref2_charge_");
        strcat@GLIBC_2.0(&v10, &v13[1].padding_17c[168]);
        v1 = &v10;
        v0 = a0;
        goto LABEL_4f5361;
    }
    if (a0->field_334)
    {
        a0->field_178 = 80;
        strcpy(&v10, "ref_charge_");
LABEL_4f4e13:
        strcat@GLIBC_2.0(&v10, &a0[1].padding_17c[168]);
        v1 = &v10;
        goto LABEL_4f535d;
    }
    v14 = a0;
    if (v14->field_778 == 7)
    {
        v14->field_784 = 1;
        v14->field_178 = 88;
        iter = &v10;
        i = "ref_left_swataway";
        for (v17 = 4; v17; i += 4)
        {
            v17 -= 1;
            *(int *)iter = *(int *)i;
            iter += 4;
        }
        *(short *)iter = *(short *)i;
        goto LABEL_4f4ee2;
    }
    v18 = a0;
    if (v18->field_778 == 8)
    {
        v18->field_784 = 1;
        v18->field_178 = 89;
        iter1 = &v10;
        j = "ref_right_swataway";
        for (v21 = 4; v21; j += 4)
        {
            v21 -= 1;
            *(int *)iter1 = *(int *)j;
            iter1 += 4;
        }
        *(short *)iter1 = *(short *)j;
        *(char *)&iter1[2] = (char)j[2];
        v3 = &v10;
        v2 = v18;
        goto LABEL_4f4eed;
    }
    v22 = a0;
    if (v22->field_778 == 9)
    {
        v22->field_784 = 1;
        v22->field_178 = 90;
        node = &v10;
        k = "ref_forward_swataway";
        for (v25 = 5; v25; k += 4)
        {
            v25 -= 1;
            *(int *)node = *(int *)k;
            node += 4;
        }
        *(char *)node = *(char *)k;
LABEL_4f4ee2:
        v3 = &v10;
        v2 = a0;
LABEL_4f4eed:
        v26 = CBaseAnimating::LookupSequence(v2, v3);
    }
    else
    {
        a0->field_178 = 3;
        strcpy(&v10, "ref_aim_");
        strcat@GLIBC_2.0(&v10, &a0[1].padding_17c[168]);
        v0 = a0;
        v26 = CBaseAnimating::LookupSequence(v0, &v10);
        if (v26 == 0xffffffff)
            v26 = 0;
        if (!v26)
        {
            if (!a0->field_320)
            {
                v28 = a0;
                if ((int)v28->field_0[448] > 1)
                {
                    v5 = v6;
                    v9 = CBasePlayer::GetMaxSpeed(v28);
                    if ((double)v9 / 1.6 >= v5)
                    {
                        v32 = a0;
                        v32->field_178 = 50;
                        v3 = 50;
                        goto LABEL_4f511c;
                    }
                    v29 = a0;
                    v29->field_178 = 6;
                    if ((char)v29->field_0[384] & 16)
                    {
                        v30 = "swim_backwards";
                        goto LABEL_4f50c8;
                    }
                    else
                    {
                        v31 = CBaseAnimating::LookupActivity(a0, 6);
                        goto LABEL_4f5366;
                    }
                }
                v29 = a0;
                if (!((char)v29->field_0[421] & 2))
                {
                    if (0.0 > (float)v29->field_0[40])
                    {
                        v29->field_178 = 9;
                        v30 = "fly_fall";
LABEL_4f50c8:
                        v3 = v30;
                        v2 = v29;
                        goto LABEL_4f5361;
                    }
                    else
                    {
                        v33 = a0;
                        if (v33->field_778 != 1)
                        {
                            v34 = a0;
                            if (v34->field_778 == 3)
                            {
                                v34->field_178 = 0x55;
                                v3 = "back_flip";
                                goto LABEL_4f5360;
                            }
                            v32 = a0;
                            if (v32->field_778 == 2)
                            {
                                v32->field_178 = 8;
                                v3 = 8;
                            }
                            else
                            {
                                v33 = a0;
                                goto LABEL_4f512a;
                            }
LABEL_4f511c:
                            v31 = CBaseAnimating::LookupActivity(v32);
                            goto LABEL_4f5366;
                        }
                        else
                        {
LABEL_4f512a:
                            v33->field_178 = 7;
                            v31 = CBaseAnimating::LookupActivity(v33, 7);
                            goto LABEL_4f5366;
                        }
                    }
                }
                else
                {
                    v4 = v6;
                    v9 = CBasePlayer::GetMaxSpeed(a0);
                    if ((double)v9 / 1.3 < v4 || a0->field_324 && 0.0 < v6)
                    {
                        v40 = a0;
                        if ((char)v40->field_0[384] & 16)
                        {
                            v26 = CBaseAnimating::LookupSequence(v40, "run_backward");
                            a0->field_178 = 96;
                        }
                        else
                        {
                            if (a0->field_324 && (int)a0->field_0[384] & 1544)
                            {
                                v41 = "turbo_run";
                                goto LABEL_4f5221;
                            }
                            else
                            {
                                if (CBasePlayer::CanPlayForwardWalk(a0))
                                {
                                    v3 = "run";
                                    v2 = a0;
                                }
                                else
                                {
                                    v41 = "run_backward";
LABEL_4f5221:
                                    v3 = v41;
                                    v2 = a0;
                                }
                            }
                            v26 = CBaseAnimating::LookupSequence(v2, v3);
                            a0->field_178 = 95;
                        }
                    }
                    else
                    {
                        if (0.0 < v6)
                        {
                            v35 = a0;
                            if ((char)v35->field_0[384] & 16)
                            {
                                v26 = CBaseAnimating::LookupSequence(v35, "walk_backward");
                                a0->field_178 = 3;
                            }
                            else
                            {
                                if (CBasePlayer::CanPlayForwardWalk(a0))
                                {
                                    v3 = "walk2handed";
                                    v2 = a0;
                                }
                                else
                                {
                                    v3 = "walk_backward";
                                    v2 = a0;
                                }
                                v26 = CBaseAnimating::LookupSequence(v2, v3);
                                a0->field_178 = 3;
                            }
                        }
                        else
                        {
                            v36 = a0;
                            v37 = CBaseAnimating::LookupSequence(v36, "idle");
                            if ((int)v36->field_0[296] != v37)
                            {
                                v38 = a0;
                                v39 = CBaseAnimating::LookupSequence(v38, "deep_idle");
                                if ((int)v38->field_0[296] != v39)
                                    *(float *)&a0->field_58c = *(float *)gpGlobals;
                            }
                            if (*(float *)gpGlobals - 5.0 > *(float *)&a0->field_58c)
                            {
                                v3 = "deep_idle";
LABEL_4f534d:
                                v0 = a0;
                            }
                            else
                            {
                                v3 = "idle";
LABEL_4f535d:
                                v34 = a0;
LABEL_4f5360:
                                v0 = v34;
                            }
LABEL_4f5361:
                            v31 = CBaseAnimating::LookupSequence(v0);
LABEL_4f5366:
                            v26 = v31;
                        }
                    }
                }
            }
            else if ((char)a0->field_0[384] & 8)
            {
                v26 = CBaseAnimating::LookupSequence(a0, "fly_forward");
                a0->field_178 = 93;
            }
            else
            {
                v27 = a0;
                if ((char)v27->field_0[384] & 16)
                {
                    v26 = CBaseAnimating::LookupSequence(v27, "fly_backward");
                    a0->field_178 = 94;
                }
                else
                {
                    v26 = CBaseAnimating::LookupSequence(a0, "fly_idle");
                    a0->field_178 = 5;
                }
            }
        }
    }
    *a1 = 0;
    v42 = a0;
    if (v42->field_174 == v42->field_178 && v42->field_77c != 1)
    {
        v8 = __fnstcw();
        v7 = v8 | 0xc00;
        v9 = (int)(float)v42->field_0[304];
        *a1 = v9;
    }
    v43 = a0;
    v43->field_174 = v43->field_178;
    v43->field_77c = 1;
    if (v26 == 0xffffffff)
        v26 = 0;
    return v26;
}

