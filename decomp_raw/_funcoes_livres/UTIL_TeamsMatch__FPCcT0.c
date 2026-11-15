// UTIL_TeamsMatch__FPCcT0 @0x133e90 size=97
typedef struct st_533e90_1 {
    unsigned int field_0;
} st_533e90_1;

typedef struct st_533e90_0 {
    char padding_0[32];
    struct st_533e90_1 *field_20;
} st_533e90_0;

typedef struct st_533e90_2 {
    char padding_0[68];
    struct st_533e90_0 *field_44;
} st_533e90_2;

extern st_533e90_2 *g_pGameRules;

unsigned int UTIL_TeamsMatch__FPCcT0(char *a0, char *a1)
{
    if (g_pGameRules->field_44->field_20(g_pGameRules) && (!*a0 || !*a1 || sub_48cac0(a0, a1)))
        return 0;
    return 1;
}

