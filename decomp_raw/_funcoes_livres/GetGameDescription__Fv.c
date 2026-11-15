// GetGameDescription__Fv @0xa1af0 size=65
typedef struct st_4a1af0_1 {
    unsigned int field_0;
} st_4a1af0_1;

typedef struct st_4a1af0_0 {
    char padding_0[40];
    struct st_4a1af0_1 *field_28;
} st_4a1af0_0;

typedef struct st_4a1af0_2 {
    char padding_0[68];
    struct st_4a1af0_0 *field_44;
} st_4a1af0_2;

extern st_4a1af0_2 *g_pGameRules;

unsigned int GetGameDescription__Fv(void)
{
    return (!g_pGameRules ? "Half-Life" : g_pGameRules->field_44->field_28(g_pGameRules));
}

