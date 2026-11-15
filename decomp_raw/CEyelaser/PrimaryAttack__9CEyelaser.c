// PrimaryAttack__9CEyelaser @0xbcdf0 size=964
typedef struct st_4bcdf0_0 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[12];
    float field_40;
    float field_44;
    float field_48;
} st_4bcdf0_0;

extern st_4bcdf0_0 *gpGlobals;

double PrimaryAttack__9CEyelaser(float idx)
{
    double v32;  // mm7
    double v33;  // mm7
    double v42;  // mm7
    float *v34;  // eax
    float *v35;  // eax
    unsigned int *v36;  // edx
    double v37;  // mm4
    double v38;  // mm4
    unsigned int *v39;  // edx
    unsigned int *v40;  // edx
    double v41;  // mm7
    char *v0;  // [bp-0x11c]
    char *v1;  // [bp-0x118]
    float v2;  // [bp-0x104]
    float v3;  // [bp-0x100]
    float v4;  // [bp-0xfc]
    float v5;  // [bp-0xf8]
    float v6;  // [bp-0xf4]
    float v7;  // [bp-0xf0]
    float v8;  // [bp-0xec]
    float v9;  // [bp-0xe8]
    float v10;  // [bp-0xe4]
    float v11;  // [bp-0xe0]
    float v12;  // [bp-0xdc]
    float v13;  // [bp-0xd8]
    char v14;  // [bp-0xc4]
    float v15;  // [bp-0xb0]
    float v16;  // [bp-0xac]
    float v17;  // [bp-0xa8]
    float v19;  // [bp-0x84]
    float v20;  // [bp-0x80]
    float v21;  // [bp-0x7c]
    float v22;  // [bp-0x64]
    float v23;  // [bp-0x60]
    float v24;  // [bp-0x5c]
    float v25;  // [bp-0x44]
    float v26;  // [bp-0x40]
    float v27;  // [bp-0x3c]
    float v28;  // [bp-0x24]
    float v29;  // [bp-0x20]
    float v30;  // [bp-0x1c]

    if (CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 50))
    {
        if (!*(int *)(*(unsigned int *)&idx + 0xcc))
        {
            CEyelaser::SetBeam(idx, *(int *)(*(unsigned int *)&idx + 196));
            CEyelaser::SetBeam(idx, *(int *)(*(unsigned int *)&idx + 200));
            *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 1;
        }
        if (!*(char *)(*(unsigned int *)&idx + 212))
        {
            *(char *)(*(unsigned int *)&idx + 212) = 1;
            EMIT_SOUND_DYN(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 1, "weapons/eyebeam_fire.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        v34 = CBeam::GetEndPos(*(int *)(*(unsigned int *)&idx + 196));
        v28 = *v34;
        v29 = v34[1];
        v30 = v34[2];
        v35 = CBeam::GetEndPos(*(int *)(*(unsigned int *)&idx + 200));
        v25 = *v35;
        v26 = v35[1];
        v27 = v35[2];
        UTIL_MakeVectors(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 116);
        v36 = &gpGlobals->field_28;
        v22 = gpGlobals->field_28;
        v23 = *(float *)&v36[1];
        v24 = *(float *)&v36[2];
        v1 = &v19;
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 96) + 480))(v1, *(int *)(*(unsigned int *)&idx + 128));
        v37 = 8192.0 * v22;
        v2 = (float)v37;
        v38 = 8192.0 * v23;
        v3 = (float)v38;
        v4 = (float)(8192.0 * v24);
        v10 = (float)(v37 + v19);
        v11 = (float)(v38 + v20);
        v12 = v21 + v4;
        UTIL_TraceLine(v1, &v10, 0, *(int *)(*(int *)idx + 520), &v14);
        v39 = &gpGlobals->field_40;
        v5 = gpGlobals->field_40 + gpGlobals->field_40;
        v6 = *(float *)&v39[1] + *(float *)&v39[1];
        v7 = *(float *)&v39[2] + *(float *)&v39[2];
        v2 = v15 - v5;
        v3 = v16 - v6;
        v4 = v17 - v7;
        v40 = &gpGlobals->field_40;
        v8 = gpGlobals->field_40 + gpGlobals->field_40;
        v9 = *(float *)&v40[1] + *(float *)&v40[1];
        v10 = *(float *)&v40[2] + *(float *)&v40[2];
        v5 = v15 + v8;
        v6 = v16 + v9;
        v7 = v17 + v10;
        v8 = v28;
        v9 = v29;
        v10 = v30;
        v11 = v2;
        v12 = v3;
        v13 = v4;
        v0 = &v11;
        CEyelaser::ShootLaser(idx, *(int *)(*(unsigned int *)&idx + 196), &v8, &v11);
        v8 = v25;
        v9 = v26;
        v10 = v27;
        v11 = v5;
        v12 = v6;
        v13 = v7;
        CEyelaser::ShootLaser(idx, *(int *)(*(unsigned int *)&idx + 200), &v8, v0);
        if (*(int *)(*(unsigned int *)&idx + 208) > 4)
        {
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(idx);
            return v42;
        }
        UTIL_WeaponTimeBase();
        *(float *)(*(unsigned int *)&idx + 156) = (float)(v41 + 0.2);
        *(unsigned int *)(*(unsigned int *)&idx + 208) = *(int *)(*(unsigned int *)&idx + 208) + 1;
        return v41 + 0.2;
    }
    else if (*(int *)(*(unsigned int *)&idx + 0xcc))
    {
        CEyelaser::SetRedEye(idx, *(int *)(*(unsigned int *)&idx + 196));
        CEyelaser::SetRedEye(idx, *(int *)(*(unsigned int *)&idx + 200));
        *(unsigned int *)(*(unsigned int *)&idx + 0xcc) = 0;
        return v32;
    }
    else
    {
        return v33;
    }
}

