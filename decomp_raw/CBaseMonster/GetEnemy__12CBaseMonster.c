// GetEnemy__12CBaseMonster @0xda3f0 size=468
typedef struct st_4da3f0_6 {
    char padding_0[124];
    struct st_4da3f0_5 *field_7c;
} st_4da3f0_6;

typedef struct st_4da3f0_9 {
    char padding_0[132];
    struct st_4da3f0_2 *field_84;
} st_4da3f0_9;

typedef struct st_4da3f0_0 {
    char padding_0[256];
    struct st_4da3f0_1 *field_100;
    char padding_104[16];
    struct st_4da3f0_1 *field_114;
} st_4da3f0_0;

typedef struct st_4da3f0_7 {
    char padding_0[408];
    struct st_4da3f0_6 *field_198;
} st_4da3f0_7;

typedef struct st_4da3f0_1 {
    unsigned int field_0;
} st_4da3f0_1;

typedef struct st_4da3f0_8 {
    char padding_0[420];
    char field_1a4;
} st_4da3f0_8;

typedef struct st_4da3f0_3 {
    char padding_0[96];
    struct st_4da3f0_0 *field_60;
    char padding_64[160];
    char field_104[4];
    char field_106;
    char padding_107[1];
    char field_108;
    char padding_109[131];
    struct st_4da3f0_2 *field_18c;
    char padding_190[192];
    unsigned int field_250;
    unsigned int field_254;
    unsigned int field_258;
} st_4da3f0_3;

typedef struct st_4da3f0_4 {
    char padding_0[76];
    struct st_4da3f0_1 *field_4c;
} st_4da3f0_4;

typedef struct st_4da3f0_5 {
    char padding_0[96];
    struct st_4da3f0_4 *field_60;
} st_4da3f0_5;

typedef struct st_4da3f0_2 {
    char padding_0[10];
    char field_a;
} st_4da3f0_2;

extern st_4da3f0_1 *g_engfuncs.pfnPEntityOfEntOffset;

unsigned int GetEnemy__12CBaseMonster(st_4da3f0_3 *a0)
{
    st_4da3f0_9 *v2;  // esi
    unsigned int *v4;  // edx
    st_4da3f0_6 *v5;  // eax
    st_4da3f0_5 *v6;  // edx
    st_4da3f0_8 **v8;  // esi
    unsigned int *v0;  // [bp-0x24]
    st_4da3f0_7 **v1;  // [bp-0x8]

    if (a0->field_104 & 4194314)
    {
        v1 = a0->field_60->field_114(a0);
        v2 = &a0->field_106;
        if (v1 != EHANDLE::__opP11CBaseEntity(v2) && v1 && *(int *)&a0->padding_109[129])
        {
            if (*(char *)(*(int *)&a0->padding_109[129] + 10) & 1)
            {
                v0 = &a0->padding_190[188];
                CBaseMonster::PushEnemy(a0, EHANDLE::__opP11CBaseEntity(v2));
                a0->field_104[2] = a0->field_104[2] | 1;
                EHANDLE::__as(v2, v1);
                v4 = *(int *)EHANDLE::__rf(v2);
                *(unsigned int *)&a0->padding_190[188] = v4[2];
                a0->field_250 = v4[3];
                a0->field_254 = v4[4];
            }
            if (*v1->field_198)
            {
                v5 = *v1->field_198;
                if (*v1->field_198 || (v5 = g_engfuncs.pfnPEntityOfEntOffset(0), v5))
                    v6 = v5->field_7c;
                else
                    v6 = NULL;
                v8 = (!v6 ? NULL : v6->field_60->field_4c(v6));
                if (v8 && *v8->field_1a4 & 32 && a0->field_60->field_100(a0, v8))
                    CBaseMonster::PushEnemy(a0, v8, &a0->padding_190[188]);
            }
        }
    }
    if (!EHANDLE::__opi(&a0->field_106) && CBaseMonster::PopEnemy(a0) && *(int *)&a0->padding_109[129] && *(char *)(*(int *)&a0->padding_109[129] + 10) & 1)
        a0->field_104[2] = a0->field_104[2] | 1;
    return (!EHANDLE::__opi(&a0->field_106) ? 0 : 1);
}

