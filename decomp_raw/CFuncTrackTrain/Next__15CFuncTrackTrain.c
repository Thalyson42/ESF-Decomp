// Next__15CFuncTrackTrain @0xeb660 size=1588
typedef struct st_4eb660_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    char field_20;
    char padding_21[47];
    unsigned int field_50;
    char padding_54[4];
    unsigned int field_58;
    char padding_5c[412];
    unsigned int field_1f8;
} st_4eb660_3;

typedef struct st_4eb660_2 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[51];
    unsigned int field_1d4;
    char padding_1d8[32];
    float field_1f8;
} st_4eb660_2;

typedef struct st_4eb660_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4eb660_0;

typedef struct st_4eb660_1 {
    unsigned int field_0;
} st_4eb660_1;

extern char Next__10CFuncTrain;
extern char DeadEnd__15CFuncTrackTrain;
extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4eb660_1 *g_engfuncs.pfnAlertMessage;
extern st_4eb660_0 *gpGlobals;

double Next__15CFuncTrackTrain(float idx)
{
    unsigned int v31;  // eax
    st_4eb660_3 *v32;  // eax
    double v41;  // mm7
    st_4eb660_3 *v42;  // edx
    double v43;  // mm0
    st_4eb660_3 *v44;  // edx
    st_4eb660_3 *v45;  // eax
    double v46;  // mm0
    st_4eb660_2 **v48;  // esi
    double v49;  // mm0
    unsigned int *v33;  // edx
    unsigned int v51;  // eax
    st_4eb660_3 *v52;  // edx
    unsigned int *v53;  // eax
    st_4eb660_3 *v54;  // ecx
    unsigned int *v55;  // edx
    double v56;  // mm0
    double v57;  // mm0
    double v58;  // mm7
    double v59;  // mm0
    st_4eb660_3 *v60;  // eax
    st_4eb660_3 *v34;  // edx
    st_4eb660_3 *v61;  // edx
    double v62;  // mm0
    unsigned int *v63;  // eax
    unsigned int *v35;  // eax
    unsigned int *v36;  // edx
    unsigned int *v37;  // edx
    st_4eb660_3 *v38;  // edx
    double v39;  // mm0
    double v40;  // mm0
    float v0;  // [bp-0xb8]
    float v1;  // [bp-0xb4]
    unsigned int v2;  // [bp-0xac]
    char *v3;  // [bp-0xa8], Other Possible Types: unsigned int
    float v4;  // [bp-0xa4], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0x80]
    st_4eb660_2 **v7;  // [bp-0x7c]
    float v8;  // [bp-0x78]
    float v9;  // [bp-0x74]
    unsigned int v10;  // [bp-0x74]
    float v11;  // [bp-0x70]
    unsigned int v12;  // [bp-0x70]
    float v13;  // [bp-0x6c]
    unsigned int v14;  // [bp-0x6c]
    float v15;  // [bp-0x68]
    float v16;  // [bp-0x64]
    float v17;  // [bp-0x60]
    char v18;  // [bp-0x5c], Other Possible Types: unsigned int
    float v19;  // [bp-0x58]
    float v20;  // [bp-0x54], Other Possible Types: unsigned int
    float v21;  // [bp-0x50]
    float v22;  // [bp-0x4c]
    float v23;  // [bp-0x48]
    float v24;  // [bp-0x44]
    float v25;  // [bp-0x28]
    unsigned int v26;  // [bp-0x24]
    unsigned int v27;  // [bp-0x20]
    float v28;  // [bp-0x1c]
    unsigned int v29;  // [bp-0x1c]

    v8 = 0.5f;
    if (*(float *)(*(int *)idx + 504) == 0.0)
    {
        v4 = *(int *)(*(int *)idx + 460) + gpGlobals->field_98;
        v31 = "TRAIN(%s): Speed is 0\n";
    }
    else if (!*(int *)(*(unsigned int *)&idx + 100))
    {
        v4 = *(int *)(*(int *)idx + 460) + gpGlobals->field_98;
        v31 = "TRAIN(%s): Lost path\n";
    }
    else
    {
        CFuncTrackTrain::UpdateSound(idx);
        v32 = *(int *)idx;
        v33 = &v32->field_8;
        *(float *)&v26 = *(float *)&v32->field_8;
        *(float *)&v27 = *(float *)&v33[1];
        *(float *)&v29 = *(float *)&v33[2];
        v28 = *(float *)&v33[2] - *(float *)(*(unsigned int *)&idx + 108);
        v25 = (float)(0.1 * *(float *)&v32->field_1f8);
        v7 = CPathTrack::LookAhead(*(int *)(*(unsigned int *)&idx + 100), &v26, v25, 1);
        v28 += *(float *)(*(unsigned int *)&idx + 108);
        v34 = *(int *)idx;
        v35 = &v34->field_8;
        v9 = *(float *)&v26 - *(float *)&v34->field_8;
        v11 = *(float *)&v27 - *(float *)&v35[1];
        v13 = v28 - *(float *)&v35[2];
        v20 = (float)(10.0 * v9);
        v21 = (float)(10.0 * v11);
        v22 = (float)(10.0 * v13);
        *(float *)&v34->field_20 = v20;
        *(float *)&v34->padding_21[3] = v21;
        *(float *)&v34->padding_21[7] = v22;
        v36 = *(int *)idx + 8;
        *(float *)&v10 = *(float *)(*(int *)idx + 8);
        *(float *)&v12 = *(float *)&v36[1];
        *(float *)&v14 = *(float *)&v36[2];
        v13 = *(float *)&v36[2] - *(float *)(*(unsigned int *)&idx + 108);
        if (0.0 < *(float *)(*(unsigned int *)&idx + 104))
        {
            v5 = 0;
            *(float *)&v4 = *(float *)(*(unsigned int *)&idx + 104);
            v3 = &v10;
        }
        else
        {
            v5 = 0;
            v4 = 100.0f;
            v3 = &v10;
        }
        CPathTrack::LookAhead(*(int *)(*(unsigned int *)&idx + 100));
        v13 += *(float *)(*(unsigned int *)&idx + 108);
        v37 = *(int *)idx + 8;
        v15 = *(float *)&v10 - *(float *)(*(int *)idx + 8);
        v16 = *(float *)&v12 - *(float *)&v37[1];
        v17 = v13 - *(float *)&v37[2];
        UTIL_VecToAngles(&v18, &v15);
        v19 = (float)(v19 + 180.0);
        FixupAngles__FR6Vector(&v18);
        FixupAngles__FR6Vector(*(int *)idx + 80);
        if (!v7)
        {
LABEL_4eb89c:
            v38 = *(int *)idx;
            v18 = v38->field_50;
            v19 = (float)v38->padding_54;
            v20 = v38->field_58;
        }
        else if (v15 == 0.0 && v16 == 0.0f)
        {
            goto LABEL_4eb89c;
        }
        if (!(*(char *)(*(int *)idx + 416) & 1))
        {
            UTIL_AngleDistance(v18, *(float *)(*(int *)idx + 80));
            v6 = v18;
        }
        else
        {
            v6 = 0;
        }
        UTIL_AngleDistance(v19, *(float *)(*(int *)idx + 84));
        *(float *)(*(int *)idx + 96) = (float)(v39 * 10.0);
        *(float *)(*(int *)idx + 92) = (float)(10.0 * *(float *)&v6);
        v40 = *(float *)(*(unsigned int *)&idx + 160);
        v41 = 0.0;
        if (v40 != 0.0)
        {
            v42 = *(int *)idx;
            v41 = -5.0;
            if (-5.0 > *(float *)&v42->padding_5c[4])
            {
                *(float *)&v2 = *(float *)&v42->field_58;
                v1 = (float)(v40 + v40);
                v41 = *(float *)&v42->field_58;
                v0 = (float)v41;
                v43 = -v40;
                goto LABEL_4eb9b0;
            }
            else
            {
                v44 = *(int *)idx;
                if (5.0f < *(float *)&v44->padding_5c[4])
                {
                    *(float *)&v2 = *(float *)&v44->field_58;
                    v43 = *(float *)(*(unsigned int *)&idx + 160);
                    v1 = (float)(v43 + v43);
                    v41 = *(float *)&v44->field_58;
                    v0 = (float)v41;
LABEL_4eb9b0:
                    UTIL_ApproachAngle((float)v43);
                    UTIL_AngleDistance((float)v43);
                    v45 = *(int *)idx;
                }
                else
                {
                    *(float *)&v2 = *(float *)(*(int *)idx + 88);
                    v46 = *(float *)(*(int *)idx + 88);
                    UTIL_ApproachAngle(0, (float)v46, (float)(4.0 * *(float *)(*(unsigned int *)&idx + 160)));
                    UTIL_AngleDistance((float)v46);
                    v45 = *(int *)idx;
                    v43 = v46 * 4.0;
                }
            }
            *(float *)&v45->padding_5c[8] = (float)v43;
        }
        if (v7)
        {
            if (v7 != *(int *)(*(unsigned int *)&idx + 100))
            {
                v48 = v7;
                if ((isnan(*(float *)(*(int *)idx + 504)) ? 0x44 : 0.0 == *(float *)(*(int *)idx + 504) ? 63 : 0.0 < *(float *)(*(int *)idx + 504) ? 0 : 0xff) >= 64)
                    v48 = *(int *)(*(unsigned int *)&idx + 100);
                *(st_4eb660_2 ***)(*(unsigned int *)&idx + 100) = v7;
                if (*v48->field_1d4)
                {
                    FireTargets(*v48->field_1d4 + gpGlobals->field_98, idx, idx, 3, 0);
                    if (*v48->field_1a0 & 2)
                        *v48->field_1d4 = 0;
                }
                if (*v48->field_1a0 & 8)
                    *(char *)(*(int *)idx + 416) = *(char *)(*(int *)idx + 416) | 2;
                if (*(char *)(*(int *)idx + 416) & 2)
                {
                    v49 = *v48->field_1f8;
                    v41 = 0.0;
                    if (v49 != 0.0)
                        *(float *)(*(int *)idx + 504) = (float)v49;
                }
            }
            v51 = _INSERT(g_engfuncs.pfnAlertMessage(2, "TrackTrain %s speed to %4.2f\n", *(int *)(*(int *)idx + 460) + gpGlobals->field_98, (unsigned int)(*(float *)(*(int *)idx + 504) >> 0)), 0, 0);
            *(unsigned int *)(*(unsigned int *)&idx + 12) = v51 | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &Next__10CFuncTrain;
            v3 = 1;
        }
        else
        {
            CFuncTrackTrain::StopSound(idx);
            v52 = *(int *)idx;
            v53 = &v52->field_8;
            v21 = *(float *)&v26 - *(float *)&v52->field_8;
            v22 = *(float *)&v27 - *(float *)&v53[1];
            v23 = v28 - *(float *)&v53[2];
            *(float *)&v52->field_20 = v21;
            *(float *)&v52->padding_21[3] = v22;
            *(float *)&v52->padding_21[7] = v23;
            v54 = *(int *)idx;
            *(unsigned int *)&v54->padding_5c[0] = g_vecZero;
            *(unsigned int *)&v54->padding_5c[4] = g_vecZero+4;
            *(unsigned int *)&v54->padding_5c[8] = g_vecZero+8;
            v55 = *(int *)idx + 32;
            v56 = *(float *)(*(int *)idx + 32);
            v57 = v56 * v56 + *(float *)&v55[1] * *(float *)&v55[1] + *(float *)&v55[2] * *(float *)&v55[2];
            v58 = sqrt(v57);
            if (isnan(v58))
                sqrt(*(unsigned int *)&v57);
            else
                v57 = v58;
            v24 = (float)v57;
            v59 = v24;
            v60 = *(int *)idx;
            *(float *)(*(unsigned int *)&idx + 164) = *(float *)&v60->field_1f8;
            v60->field_1f8 = 0;
            if (0.0 >= v59)
            {
                CFuncTrackTrain::DeadEnd(idx);
                return 0.0;
            }
            v8 = (float)(v59 / *(float *)(*(unsigned int *)&idx + 164));
            v61 = *(int *)idx;
            v62 = *(float *)(*(unsigned int *)&idx + 164) / v59;
            v63 = &v61->field_20;
            v21 = (float)(v62 * *(float *)&v61->field_20);
            v41 = v62 * *(float *)&v63[1];
            v22 = (float)v41;
            v23 = (float)(v62 * *(float *)&v63[2]);
            *(float *)&v61->field_20 = v21;
            *(float *)&v61->padding_21[3] = v22;
            *(float *)&v61->padding_21[7] = v23;
            *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v23, 0, 0) | 0xffff0000;
            *(char **)(*(unsigned int *)&idx + 16) = &DeadEnd__15CFuncTrackTrain;
            v3 = 0;
        }
        CFuncTrackTrain::NextThink(idx, v8 + *(float *)(*(int *)idx + 0x100));
        return v41;
    }
    g_engfuncs.pfnAlertMessage(2, v31);
    CFuncTrackTrain::StopSound(idx);
    return *(float *)(*(int *)idx + 504);
}

