// Use__10CGunTargetP11CBaseEntityT18USE_TYPEf @0xee3a0 size=177
typedef struct st_4ee3a0_0 {
    char padding_0[172];
    struct st_4ee3a0_1 *field_ac;
    char padding_b0[132];
    struct st_4ee3a0_1 *field_134;
} st_4ee3a0_0;

typedef struct st_4ee3a0_4 {
    char padding_0[408];
    unsigned int field_198;
} st_4ee3a0_4;

typedef struct st_4ee3a0_1 {
    unsigned int field_0;
} st_4ee3a0_1;

typedef struct st_4ee3a0_3 {
    char padding_0[352];
    unsigned int field_160;
    char padding_164[76];
    unsigned int field_1b0;
} st_4ee3a0_3;

typedef struct st_4ee3a0_2 {
    struct st_4ee3a0_3 *field_0;
    char padding_4[92];
    struct st_4ee3a0_0 *field_60;
    char padding_64[172];
    char field_110;
    char padding_111[407];
    int field_2a8;
} st_4ee3a0_2;

unsigned int Use__10CGunTargetP11CBaseEntityT18USE_TYPEf(st_4ee3a0_2 *a0, unsigned int a1, unsigned int a2, int a3)
{
    unsigned int v0;  // eax
    st_4ee3a0_4 *v2;  // esi
    unsigned int v3;  // eax

    v0 = CBaseEntity::ShouldToggle(a0, a3, a0->field_2a8);
    if (!v0)
    {
        return v0;
    }
    else if (a0->field_2a8)
    {
        return a0->field_60->field_134(a0);
    }
    else
    {
        *(float *)&a0->field_0->padding_164[8] = 2.0f;
        v2 = &a0->field_110;
        EHANDLE::__as(v2, a0->field_60->field_ac(a0));
        v3 = EHANDLE::__opi(v2);
        if (!v3)
            return v3;
        *(float *)&a0->field_0->field_160 = *(float *)&a0->field_0->field_1b0;
        return CGunTarget::Next(a0);
    }
}

