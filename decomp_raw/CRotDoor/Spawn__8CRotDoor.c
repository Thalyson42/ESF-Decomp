// Spawn__8CRotDoor @0xacfb0 size=638
typedef struct st_4acfb0_3 {
    char padding_0[196];
    unsigned int field_c4;
} st_4acfb0_3;

typedef struct st_4acfb0_2 {
    char padding_0[68];
    char field_44;
    char padding_45[11];
    char field_50;
    char padding_51[183];
    unsigned int field_108;
    unsigned int field_10c;
} st_4acfb0_2;

typedef struct st_4acfb0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4acfb0_0;

typedef struct st_4acfb0_1 {
    unsigned int field_0;
} st_4acfb0_1;

extern char DoorTouch__9CBaseDoorP11CBaseEntity;
extern st_4acfb0_1 *g_6167c8;
extern st_4acfb0_0 *gpGlobals;

int Spawn__8CRotDoor(float idx)
{
    st_4acfb0_2 *v7;  // edx
    st_4acfb0_3 *v8;  // eax
    st_4acfb0_2 *v17;  // eax
    unsigned int v18;  // eax
    st_4acfb0_2 *v9;  // edx
    unsigned int v10;  // 128
    st_4acfb0_3 *v11;  // eax
    unsigned int *v12;  // eax
    st_4acfb0_2 *v13;  // edx
    unsigned int *v14;  // eax
    st_4acfb0_2 *v15;  // edx
    st_4acfb0_3 *v16;  // eax
    unsigned int v0;  // [bp-0x24], Other Possible Types: float
    unsigned int v1;  // [bp-0x20], Other Possible Types: float
    unsigned int v2;  // [bp-0x1c], Other Possible Types: float
    float v3;  // [bp-0x18]
    float v4;  // [bp-0x14]
    float v5;  // [bp-0x10]

    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    sub_48b820(*(int *)idx);
    v7 = *(int *)idx;
    if (v7[1].padding_51[63] & 2)
    {
        v8 = &v7->field_44;
        v0 = (float)(-1.0 * *(float *)&v7->field_44);
        v1 = (float)(-1.0 * *(float *)&v8->padding_0[4]);
        v2 = (float)(-1.0 * *(float *)&v8->padding_0[8]);
        *(float *)&v7->field_44 = v0;
        *(float *)&v7->padding_45[3] = v1;
        *(float *)&v7->padding_45[7] = v2;
    }
    v9 = *(int *)idx;
    *(int *)(*(unsigned int *)&idx + 180) = *(int *)&v9->field_50;
    *(int *)(*(unsigned int *)&idx + 184) = *(int *)&v9->padding_51[3];
    *(int *)(*(unsigned int *)&idx + 188) = *(int *)&v9->padding_51[7];
    v10 = *(unsigned int *)&*(float *)(*(unsigned int *)&idx + 0x88);
    v11 = &v9->field_44;
    v3 = __int_as_float(v10) * *(float *)&v9->field_44;
    v4 = __int_as_float(v10) * *(float *)&v11->padding_0[4];
    v5 = __int_as_float(v10) * *(float *)&v11->padding_0[8];
    v12 = &v9->field_50;
    v0 = v3 + *(float *)&v9->field_50;
    v1 = v4 + *(float *)&v12[1];
    v2 = *(float *)&v12[2] + v5;
    *(float *)(*(unsigned int *)&idx + 192) = v0;
    *(float *)(*(unsigned int *)&idx + 196) = v1;
    *(float *)(*(unsigned int *)&idx + 200) = v2;
    if (v9[1].padding_51[63] & 8)
        v9->field_10c = 0;
    else
        *(unsigned int *)(*(int *)idx + 268) = 4;
    *(unsigned int *)(*(int *)idx + 264) = 7;
    sub_48db50(*(int *)idx, *(int *)idx + 8);
    g_6167c8(*(int *)(*(int *)idx + 520), *(int *)(*(int *)idx + 184) + gpGlobals->field_98);
    if (*(float *)(*(int *)idx + 504) == 0.0f)
        *(float *)(*(int *)idx + 504) = 100.0f;
    v13 = *(int *)idx;
    if (v13[1].padding_51[63] & 1)
    {
        *(int *)&v13->field_50 = *(int *)(*(unsigned int *)&idx + 192);
        *(int *)&v13->padding_51[3] = *(int *)(*(unsigned int *)&idx + 196);
        *(int *)&v13->padding_51[7] = *(int *)(*(unsigned int *)&idx + 200);
        v14 = *(unsigned int *)&idx + 180;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 180);
        *(float *)&v1 = *(float *)&v14[1];
        *(float *)&v2 = *(float *)&v14[2];
        *(int *)(*(unsigned int *)&idx + 192) = *(int *)(*(unsigned int *)&idx + 180);
        *(int *)(*(unsigned int *)&idx + 196) = *(int *)(*(unsigned int *)&idx + 184);
        *(int *)(*(unsigned int *)&idx + 200) = *(int *)(*(unsigned int *)&idx + 188);
        *(unsigned int *)(*(unsigned int *)&idx + 180) = v0;
        *(unsigned int *)(*(unsigned int *)&idx + 184) = v1;
        *(unsigned int *)(*(unsigned int *)&idx + 188) = v2;
        v15 = *(int *)idx;
        v16 = &v15->field_44;
        v3 = (float)(-1.0 * *(float *)&v15->field_44);
        v4 = (float)(-1.0 * *(float *)&v16->padding_0[4]);
        v5 = (float)(-1.0 * *(float *)&v16->padding_0[8]);
        *(float *)&v15->field_44 = v3;
        *(float *)&v15->padding_45[3] = v4;
        *(float *)&v15->padding_45[7] = v5;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 1;
    v17 = *(int *)idx;
    if (!(v17[1].padding_51[64] & 1))
    {
        v18 = _INSERT(v17, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 20) = v18 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &DoorTouch__9CBaseDoorP11CBaseEntity;
        return v18 | 0xffff0000;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    return v17;
}

