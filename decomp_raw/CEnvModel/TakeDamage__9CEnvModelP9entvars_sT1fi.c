// TakeDamage__9CEnvModelP9entvars_sT1fi @0xb8f30 size=172
typedef struct st_4b8f30_1 {
    struct st_4b8f30_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4b8f30_1;

typedef struct st_4b8f30_0 {
    char padding_0[260];
    float field_104;
    char padding_108[32];
    unsigned int field_128;
    unsigned int field_12c;
    unsigned int field_130;
} st_4b8f30_0;

typedef struct st_4b8f30_2 {
    float field_0;
} st_4b8f30_2;

extern char AnimateThink__9CEnvModel;
extern st_4b8f30_2 *gpGlobals;

int TakeDamage__9CEnvModelP9entvars_sT1fi(st_4b8f30_1 *a0, int a1, int a2, float a3, int a4)
{
    unsigned int v0;  // edx

    v0 = CBaseAnimating::LookupSequence(a0, "explosion");
    if (v0 != 0xffffffff)
    {
        a0->field_0->field_12c = 0;
        a0->field_0->field_130 = 0;
        a0->field_0->field_128 = v0;
        a0->field_c = _INSERT(CBaseAnimating::ResetSequenceInfo(a0), 0, 0) | 0xffff0000;
        a0->field_10 = &AnimateThink__9CEnvModel;
        a0->field_0->field_104 = (float)(1.0 + *(float *)gpGlobals);
    }
    return CBaseMonster::TakeDamage(a0, a1, a2, a3, a4);
}

