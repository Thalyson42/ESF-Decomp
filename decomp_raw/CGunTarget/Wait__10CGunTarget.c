// Wait__10CGunTarget @0xee1b0 size=256
typedef struct st_4ee1b0_2 {
    unsigned int field_0;
} st_4ee1b0_2;

typedef struct st_4ee1b0_0 {
    char padding_0[416];
    char field_1a0;
    char padding_1a1[39];
    unsigned int field_1c8;
    char padding_1cc[8];
    unsigned int field_1d4;
} st_4ee1b0_0;

typedef struct st_4ee1b0_3 {
    struct st_4ee1b0_0 *field_0;
    char padding_4[92];
    struct st_4ee1b0_1 *field_60;
} st_4ee1b0_3;

typedef struct st_4ee1b0_1 {
    char padding_0[104];
    struct st_4ee1b0_2 *field_68;
} st_4ee1b0_1;

typedef struct st_4ee1b0_4 {
    char padding_0[152];
    unsigned int field_98;
} st_4ee1b0_4;

extern char Next__10CGunTarget;
extern st_4ee1b0_4 *gpGlobals;

float Wait__10CGunTarget(float idx)
{
    st_4ee1b0_3 *v1;  // esi
    float v2;  // mm7
    double v3;  // mm7
    unsigned int v4;  // eax
    float v6;  // 128
    float v7;  // 128

    v1 = EHANDLE::__opP11CBaseEntity(*(unsigned int *)&idx + 272);
    if (!v1)
    {
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 308))(idx);
        return v2;
    }
    if (v1->field_0->field_1d4)
    {
        FireTargets(v1->field_0->field_1d4 + gpGlobals->field_98, idx, idx, 3, 0);
        if (v1->field_0->field_1a0 & 4)
            v1->field_0->field_1d4 = 0;
    }
    v1->field_60->field_68(v1);
    *(float *)(*(unsigned int *)&idx + 140) = (float)v3;
    v4 = v1->field_0->field_1c8;
    *(unsigned int *)(*(int *)idx + 456) = v4;
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v4, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &Next__10CGunTarget;
    v6 = *(float *)(*(unsigned int *)&idx + 140);
    if (v6 == 0.0f)
    {
        CGunTarget::Next(idx);
        return v6;
    }
    v7 = v6 + *(float *)(*(int *)idx + 0x100);
    *(float *)(*(int *)idx + 260) = v7;
    return v7;
}

