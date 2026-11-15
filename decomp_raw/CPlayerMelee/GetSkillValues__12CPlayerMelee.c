// GetSkillValues__12CPlayerMelee @0xffa30 size=49
typedef struct st_4ffa30_1 {
    unsigned int field_0;
} st_4ffa30_1;

typedef struct st_4ffa30_0 {
    char padding_0[264];
    struct st_4ffa30_1 *field_108;
} st_4ffa30_0;

typedef struct st_4ffa30_2 {
    char padding_0[68];
    struct st_4ffa30_0 *field_44;
} st_4ffa30_2;

extern st_4ffa30_2 *g_pGameRules;

int GetSkillValues__12CPlayerMelee(void)
{
    return g_pGameRules->field_44->field_108(g_pGameRules);
}

