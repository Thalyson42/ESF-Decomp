// Spawn__6CLaser @0xb2820 size=502
typedef struct st_4b2820_2 {
    char padding_0[12];
    struct st_4b2820_3 *field_c;
} st_4b2820_2;

typedef struct st_4b2820_0 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
} st_4b2820_0;

typedef struct st_4b2820_6 {
    struct st_4b2820_5 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4b2820_6;

typedef struct st_4b2820_1 {
    char padding_0[268];
    unsigned int field_10c;
} st_4b2820_1;

typedef struct st_4b2820_8 {
    char padding_0[328];
    unsigned int field_148;
} st_4b2820_8;

typedef struct st_4b2820_3 {
    unsigned int field_0;
} st_4b2820_3;

typedef struct st_4b2820_9 {
    char padding_0[415];
    char field_19f;
} st_4b2820_9;

typedef struct st_4b2820_5 {
    char padding_0[423];
    char field_1a7;
} st_4b2820_5;

typedef struct st_4b2820_4 {
    struct st_4b2820_1 *field_0;
    char padding_4[92];
    struct st_4b2820_2 *field_60;
} st_4b2820_4;

typedef struct st_4b2820_7 {
    char padding_0[152];
    unsigned int field_98;
} st_4b2820_7;

extern char StrikeThink__6CLaser;
extern char SUB_Remove__11CBaseEntity;
extern st_4b2820_7 *gpGlobals;

unsigned int Spawn__6CLaser(float idx)
{
    unsigned int v9;  // eax
    st_4b2820_0 *v10;  // ecx
    st_4b2820_4 *v11;  // edi
    st_4b2820_6 *v13;  // ecx
    st_4b2820_9 *v14;  // eax
    unsigned int *v15;  // edi
    unsigned int *v16;  // eax
    st_4b2820_8 **v17;  // edx
    int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    int v2;  // [bp-0x30]
    int v3;  // [bp-0x2c]
    int v4;  // [bp-0xc]
    int v5;  // [bp-0xc]
    unsigned short v6;  // [bp-0x8]
    unsigned short v7;  // [bp-0x6]

    if (!*(int *)(*(int *)idx + 184))
    {
        v9 = _INSERT(*(int *)idx, 0, 0);
        v10 = (st_4b2820_0 *)idx;
        v10->field_c = v9 | 0xffff0000;
        v10->field_10 = &SUB_Remove__11CBaseEntity;
        return v9 | 0xffff0000;
    }
    v11 = (st_4b2820_4 *)idx;
    v11->field_0->field_10c = 0;
    v13 = (st_4b2820_6 *)idx;
    v13->field_c = _INSERT(v11->field_60->field_c(v11), 0, 0) | 0xffff0000;
    v13->field_10 = &StrikeThink__6CLaser;
    v13->field_0->field_1a7 = v13->field_0->field_1a7 | 32;
    v14 = &v13->field_0->padding_0[8];
    CBeam::PointsInit(v13, v14, v14);
    v15 = (unsigned int *)idx;
    if (!v15[25] && v15[26])
        v15[25] = CSprite::SpriteCreate(v15[26] + gpGlobals->field_98, *v15 + 8, 1);
    else
        *(st_4b2820_8 ***)(*(unsigned int *)&idx + 100) = NULL;
    if (*(int *)(*(unsigned int *)&idx + 100))
    {
        v16 = *(int *)idx;
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v4 = (int)*(float *)&v16[84];
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v5 = (int)*(float *)&v16[0x55];
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v0 = (int)*(float *)&v16[86];
        v7 = __fnstcw();
        v6 = v7 | 0xc00;
        v2 = (int)*(float *)&v16[83];
        v17 = *(int *)(*(unsigned int *)&idx + 100);
        v1 = v16[87];
        *v17->field_148 = 3;
        v3 = v4;
        *(float *)&(*v17)[1].padding_0[4] = (float)v3;
        v3 = v5;
        *(float *)&(*v17)[1].padding_0[8] = (float)v3;
        *(float *)&(*v17)[1].padding_0[12] = (float)v0;
        *(float *)&(*v17)[1].padding_0[0] = (float)v2;
        *(unsigned int *)&(*v17)[1].padding_0[16] = v1;
    }
    if (!*(int *)(*(int *)idx + 460) || *(char *)(*(int *)idx + 416) & 1)
        return CLaser::TurnOn(idx);
    return CLaser::TurnOff(idx);
    return CLaser::TurnOn(idx);
}

