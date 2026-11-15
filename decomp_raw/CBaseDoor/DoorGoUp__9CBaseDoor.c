// DoorGoUp__9CBaseDoor @0xac530 size=732
typedef struct st_4ac530_6 {
    struct st_4ac530_4 *field_0;
    char padding_4[164];
    float field_a8;
} st_4ac530_6;

typedef struct st_4ac530_5 {
    struct st_4ac530_4 *field_0;
    char padding_4[188];
    float field_c0;
} st_4ac530_5;

typedef struct st_4ac530_2 {
    struct st_4ac530_3 *field_0;
    char padding_4[216];
    unsigned int field_dc;
    unsigned int field_e0;
} st_4ac530_2;

typedef struct st_4ac530_3 {
    unsigned int field_0;
} st_4ac530_3;

typedef struct st_4ac530_4 {
    char padding_0[504];
    float field_1f8;
} st_4ac530_4;

typedef struct st_4ac530_0 {
    char padding_0[416];
    int field_1a0;
    char padding_1a4[72];
    unsigned int field_1ec;
    char padding_1f0[24];
    int field_208;
} st_4ac530_0;

typedef struct st_4ac530_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
    char padding_34[100];
    unsigned int field_98;
} st_4ac530_1;

extern char DoorHitTop__9CBaseDoor;
extern st_4ac530_1 *gpGlobals;

int DoorGoUp__9CBaseDoor(float a0)
{
    st_4ac530_0 **v20;  // eax
    st_4ac530_0 *v21;  // edx
    unsigned int *v30;  // edx
    double v31;  // mm5
    double v32;  // mm5
    double v33;  // mm5
    double v34;  // mm5
    unsigned int v35;  // edx
    double v36;  // mm6
    unsigned int index;  // eax
    st_4ac530_5 *v38;  // edx
    unsigned int *v39;  // eax
    st_4ac530_6 *v40;  // ecx
    st_4ac530_2 *v23;  // ecx
    unsigned int v24;  // esi
    unsigned int v25;  // edx
    unsigned int *v26;  // esi
    unsigned int idx;  // eax
    unsigned int *v28;  // ecx
    unsigned int *v29;  // edi
    float v0;  // [bp-0xac]
    unsigned int *v1;  // [bp-0xa8]
    float v2;  // [bp-0xa4]
    float v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0xa0]
    float v5;  // [bp-0x9c]
    unsigned int v6;  // [bp-0x9c]
    float v7;  // [bp-0x84]
    float v8;  // [bp-0x80]
    float v9;  // [bp-0x7c]
    float v10;  // [bp-0x64]
    float v11;  // [bp-0x60]
    float v12;  // [bp-0x5c]
    unsigned int v13;  // [bp-0x44]
    unsigned int v14;  // [bp-0x40]
    unsigned int v15;  // [bp-0x3c]
    float v16;  // [bp-0x24]
    float v17;  // [bp-0x20]
    float v18;  // [bp-0x1c]

    v20 = (st_4ac530_0 **)a0;
    v21 = *v20;
    if (v21->field_1a0 >= 0)
        v20 = EMIT_SOUND_DYN(v21->field_208, 6, v21->field_1ec + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(unsigned int *)&a0 + 128) = 2;
    v23 = (st_4ac530_2 *)a0;
    v23->field_dc = _INSERT(v20, 0, 0) | 0xffff0000;
    v23->field_e0 = &DoorHitTop__9CBaseDoor;
    if (strcmp@GLIBC_2.0(*(int *)v23->field_0 + gpGlobals->field_98, "func_door_rotating"))
    {
        v39 = *(unsigned int *)&a0 + 168;
        v40 = (st_4ac530_6 *)a0;
        v2 = v40->field_a8;
        *(float *)&v4 = *(float *)&v39[1];
        *(float *)&v6 = *(float *)&v39[2];
        return CBaseToggle::LinearMove(v40, &v2, v40->field_0->field_1f8);
    }
    v0 = 1.0;
    v24 = *(unsigned int *)&a0 + 212;
    if (EHANDLE::__opi(v24))
    {
        v1 = *(int *)EHANDLE::__rf(v24);
        v25 = *(int *)a0;
        if (!(*(char *)(v25 + 416) & 16) && *(float *)(v25 + 72) != 0.0f)
        {
            v26 = v1 + 2;
            idx = v25 + 8;
            v28 = v1;
            v16 = *(float *)&v28[2] - *(float *)(v25 + 8);
            v17 = *(float *)&v26[1] - *(float *)(idx + 4);
            v18 = *(float *)&v26[2] - *(float *)(idx + 8);
            v29 = v28 + 20;
            *(float *)&v13 = *(float *)&v28[20];
            *(float *)&v14 = *(float *)&v29[1];
            v13 = 0;
            v15 = 0;
            UTIL_MakeVectors(&v13);
            UTIL_MakeVectors(v29);
            v30 = &gpGlobals->field_28;
            v31 = 10.0 * gpGlobals->field_28;
            v2 = (float)v31;
            v32 = 10.0 * *(float *)&v30[1];
            v3 = (float)v32;
            v5 = (float)(10.0 * *(float *)&v30[2]);
            v33 = v31 + *(float *)&v1[2];
            v7 = (float)v33;
            v34 = v32 + *(float *)&v26[1];
            v8 = (float)v34;
            v9 = *(float *)&v26[2] + v5;
            v35 = *(int *)a0 + 8;
            v36 = v34 - *(float *)(v35 + 4);
            v10 = (float)(v33 - *(float *)(*(int *)a0 + 8));
            v11 = (float)v36;
            v12 = v9 - *(float *)(v35 + 8);
            if (0.0 > v36 * v16 - v17 * v10)
                v0 = -1.0f;
        }
    }
    index = *(unsigned int *)&a0 + 192;
    v38 = (st_4ac530_5 *)a0;
    v2 = v0 * v38->field_c0;
    v3 = v0 * *(float *)(index + 4);
    v5 = v0 * *(float *)(index + 8);
    return CBaseToggle::AngularMove(v38, &v2, v38->field_0->field_1f8);
}

