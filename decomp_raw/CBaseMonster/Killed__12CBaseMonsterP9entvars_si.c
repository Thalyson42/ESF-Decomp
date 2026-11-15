// Killed__12CBaseMonsterP9entvars_si @0xa4e40 size=331
typedef struct st_4a4e40_3 {
    char padding_0[124];
    struct st_4a4e40_2 *field_7c;
} st_4a4e40_3;

typedef struct st_4a4e40_5 {
    char padding_0[268];
    struct st_4a4e40_1 *field_10c;
} st_4a4e40_5;

typedef struct st_4a4e40_1 {
    unsigned int field_0;
} st_4a4e40_1;

typedef struct st_4a4e40_0 {
    char padding_0[44];
    struct st_4a4e40_1 *field_2c;
} st_4a4e40_0;

typedef struct st_4a4e40_4 {
    char padding_0[352];
    unsigned int field_160;
    char padding_164[52];
    struct st_4a4e40_3 *field_198;
    char padding_19c[8];
    char field_1a4;
    char padding_1a5[99];
    int field_208;
} st_4a4e40_4;

typedef struct st_4a4e40_6 {
    struct st_4a4e40_4 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[68];
    struct st_4a4e40_5 *field_60;
    char padding_64[161];
    char field_105;
    char padding_106[126];
    unsigned int field_184;
    char padding_188[192];
    char field_248;
} st_4a4e40_6;

typedef struct st_4a4e40_2 {
    char padding_0[96];
    struct st_4a4e40_0 *field_60;
} st_4a4e40_2;

extern st_4a4e40_1 *g_engfuncs.pfnPEntityOfEntOffset;

char Killed__12CBaseMonsterP9entvars_si(st_4a4e40_6 *a0, unsigned int a1, int a2)
{
    char v0;  // al
    st_4a4e40_3 *v1;  // eax
    st_4a4e40_2 *v2;  // ecx
    char v3;  // al

    if (!(a0->field_248 & 128))
    {
        a0->field_248 = a0->field_248 | 128;
        EMIT_SOUND_DYN(a0->field_0->field_208, 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        a0->field_184 = 8;
        a0->field_105 = a0->field_105 | 1;
        v1 = a0->field_0->field_198;
        if (a0->field_0->field_198 || (v1 = g_engfuncs.pfnPEntityOfEntOffset(0), v1))
            v2 = v1->field_7c;
        else
            v2 = NULL;
        if (v2)
            v2->field_60->field_2c(v2, a0->field_0);
        if (!CBaseMonster::ShouldGibMonster(a0, a2))
        {
            if (a0->field_0->field_1a4 & 32)
            {
                a0->field_14 = 0;
                a0->field_18 = 0;
                a0->field_60->field_10c(a0);
            }
            if (-99.0f > *(float *)&a0->field_0->field_160)
                a0->field_0->field_160 = 0;
            a0->field_184 = 8;
            return v3;
        }
    }
    else if (!CBaseMonster::ShouldGibMonster(a0, a2))
    {
        return v0;
    }
    v3 = CBaseMonster::CallGibMonster(a0);
    return v3;
}

