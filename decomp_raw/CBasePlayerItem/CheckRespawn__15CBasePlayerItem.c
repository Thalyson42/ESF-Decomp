// CheckRespawn__15CBasePlayerItem @0x1381a0 size=78
typedef struct st_5381a0_3 {
    char padding_0[192];
    struct st_5381a0_1 *field_c0;
} st_5381a0_3;

typedef struct st_5381a0_1 {
    unsigned int field_0;
} st_5381a0_1;

typedef struct st_5381a0_4 {
    char padding_0[96];
    struct st_5381a0_3 *field_60;
} st_5381a0_4;

typedef struct st_5381a0_0 {
    char padding_0[124];
    struct st_5381a0_1 *field_7c;
} st_5381a0_0;

typedef struct st_5381a0_2 {
    char padding_0[68];
    struct st_5381a0_0 *field_44;
} st_5381a0_2;

extern st_5381a0_2 *g_pGameRules;

unsigned int CheckRespawn__15CBasePlayerItem(st_5381a0_4 *a0)
{
    unsigned int v0;  // eax

    v0 = g_pGameRules->field_44->field_7c(g_pGameRules, a0);
    if (v0 != 1)
        return v0;
    return a0->field_60->field_c0(a0);
}

