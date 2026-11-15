// Spawn__17CFrictionModifier @0x12a7e0 size=122
typedef struct st_52a7e0_0 {
    struct st_52a7e0_1 *field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
} st_52a7e0_0;

typedef struct st_52a7e0_1 {
    char padding_0[184];
    unsigned int field_b8;
    char padding_bc[76];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[248];
    unsigned int field_208;
} st_52a7e0_1;

typedef struct st_52a7e0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_52a7e0_2;

typedef struct st_52a7e0_3 {
    unsigned int field_0;
} st_52a7e0_3;

extern char ChangeFriction__17CFrictionModifierP11CBaseEntity;
extern st_52a7e0_3 *g_6167c8;
extern st_52a7e0_2 *gpGlobals;

unsigned int Spawn__17CFrictionModifier(st_52a7e0_0 *a0)
{
    unsigned int *v0;  // eax
    unsigned int v1;  // eax

    a0->field_0->field_10c = 1;
    g_6167c8(a0->field_0->field_208, a0->field_0->field_b8 + gpGlobals->field_98);
    v0 = a0->field_0;
    v0[66] = 0;
    v1 = _INSERT(v0, 0, 0);
    a0->field_14 = v1 | 0xffff0000;
    a0->field_18 = &ChangeFriction__17CFrictionModifierP11CBaseEntity;
    return v1 | 0xffff0000;
}

