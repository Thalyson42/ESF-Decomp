// IRelationship__12CBaseMonsterP11CBaseEntity @0xd7ad0 size=95
typedef struct st_4d7ad0_1 {
    unsigned int field_0;
} st_4d7ad0_1;

typedef struct st_4d7ad0_0 {
    char padding_0[40];
    struct st_4d7ad0_1 *field_28;
} st_4d7ad0_0;

typedef struct st_4d7ad0_2 {
    char padding_0[96];
    struct st_4d7ad0_0 *field_60;
} st_4d7ad0_2;

extern unsigned int iEnemy.1140;

int IRelationship__12CBaseMonsterP11CBaseEntity(st_4d7ad0_2 *a0, st_4d7ad0_2 *a1)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = &iEnemy.1140;
    v1 = a1->field_60->field_28(a1);
    return *(int *)(a0->field_60->field_28(a0) * 56 + v1 * 4 + v0);
}

