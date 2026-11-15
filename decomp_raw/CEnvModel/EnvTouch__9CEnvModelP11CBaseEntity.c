// EnvTouch__9CEnvModelP11CBaseEntity @0xb8e70 size=180
typedef struct st_4b8e70_0 {
    char padding_0[160];
    struct st_4b8e70_1 *field_a0;
} st_4b8e70_0;

typedef struct st_4b8e70_4 {
    struct st_4b8e70_3 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4b8e70_4;

typedef struct st_4b8e70_3 {
    char padding_0[260];
    float field_104;
    char padding_108[32];
    int field_128;
    unsigned int field_12c;
    unsigned int field_130;
} st_4b8e70_3;

typedef struct st_4b8e70_1 {
    unsigned int field_0;
} st_4b8e70_1;

typedef struct st_4b8e70_2 {
    char padding_0[96];
    struct st_4b8e70_0 *field_60;
} st_4b8e70_2;

typedef struct st_4b8e70_5 {
    float field_0;
} st_4b8e70_5;

extern char AnimateThink__9CEnvModel;
extern st_4b8e70_5 *gpGlobals;

float EnvTouch__9CEnvModelP11CBaseEntity(st_4b8e70_4 *a0, st_4b8e70_2 *a1)
{
    unsigned int v0;  // edx
    double v1;  // mm6
    unsigned int v2;  // eax
    unsigned long long v3;  // mm7
    unsigned long long v5;  // mm7

    if (!a1->field_60->field_a0(a1))
        return v5;
    v0 = CBaseAnimating::LookupSequence(a0, "touch");
    if (v0 == 0xffffffff)
        return v3;
    a0->field_0->field_12c = 0;
    a0->field_0->field_130 = 0;
    a0->field_0->field_128 = v0;
    CBaseAnimating::ResetSequenceInfo(a0);
    CBaseAnimating::GetAnimTime(a0, a0->field_0->field_128);
    a0->field_0->field_104 = (float)(v1 + *(float *)gpGlobals);
    v2 = _INSERT(gpGlobals, 0, 0);
    a0->field_c = v2 | 0xffff0000;
    a0->field_10 = &AnimateThink__9CEnvModel;
    return v3;
}

