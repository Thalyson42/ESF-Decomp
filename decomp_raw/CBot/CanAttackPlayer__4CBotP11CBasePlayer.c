// CanAttackPlayer__4CBotP11CBasePlayer @0x153410 size=159
typedef struct st_553410_2 {
    char padding_0[140];
    struct st_553410_3 *field_8c;
} st_553410_2;

typedef struct st_553410_4 {
    char padding_0[96];
    struct st_553410_2 *field_60;
    char padding_64[748];
    unsigned int field_350;
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[356];
    unsigned int field_4c4;
    char padding_4c8[680];
    unsigned int field_770;
} st_553410_4;

typedef struct st_553410_1 {
    char padding_0[2564];
    struct st_553410_0 *field_a04;
} st_553410_1;

typedef struct st_553410_3 {
    unsigned int field_0;
} st_553410_3;

typedef struct st_553410_0 {
    char padding_0[56];
    char field_38;
} st_553410_0;

typedef struct st_553410_5 {
    char padding_0[64];
    struct st_553410_3 *field_40;
} st_553410_5;

typedef struct st_553410_6 {
    char padding_0[68];
    struct st_553410_5 *field_44;
} st_553410_6;

extern st_553410_6 *g_pGameRules;

char CanAttackPlayer__4CBotP11CBasePlayer(st_553410_1 *a0, st_553410_4 *a1)
{
    if ((a0->field_a04->field_38 || !a1->field_770) && !a1->field_354 && !a1->field_358 && !a1->field_35c && !a1->field_350 && a1->field_60->field_8c(a1) && !a1->field_4c4 && g_pGameRules->field_44->field_40(g_pGameRules, a0, a1))
        return 1;
    return 0;
}

