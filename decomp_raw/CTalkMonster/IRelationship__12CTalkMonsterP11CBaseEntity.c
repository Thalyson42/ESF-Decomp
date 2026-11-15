// IRelationship__12CTalkMonsterP11CBaseEntity @0x1270e0 size=85
typedef struct st_5270e0_0 {
    char padding_0[160];
    struct st_5270e0_1 *field_a0;
} st_5270e0_0;

typedef struct st_5270e0_1 {
    unsigned int field_0;
} st_5270e0_1;

typedef struct st_5270e0_3 {
    char padding_0[584];
    char field_248;
} st_5270e0_3;

typedef struct st_5270e0_2 {
    char padding_0[96];
    struct st_5270e0_0 *field_60;
} st_5270e0_2;

unsigned int IRelationship__12CTalkMonsterP11CBaseEntity(st_5270e0_3 *a0, st_5270e0_2 *a1)
{
    if (a1->field_60->field_a0(a1) && a0->field_248 & 1)
        return 2;
    return CBaseMonster::IRelationship(a0, a1);
}

