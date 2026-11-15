// ClientConnect__FP7edict_sPCcT1Pc @0x9f3e0 size=132
typedef struct st_49f3e0_1 {
    unsigned int field_0;
} st_49f3e0_1;

typedef struct st_49f3e0_0 {
    char padding_0[44];
    struct st_49f3e0_1 *field_2c;
} st_49f3e0_0;

typedef struct st_49f3e0_2 {
    char padding_0[68];
    struct st_49f3e0_0 *field_44;
} st_49f3e0_2;

extern st_49f3e0_2 *g_pGameRules;
extern int BotManager;

int ClientConnect__FP7edict_sPCcT1Pc(unsigned int a0, unsigned int a1, char *a2, unsigned int a3)
{
    char *v1;  // edi
    unsigned int v2;  // ecx
    unsigned int v11;  // 4109
    unsigned int v3;  // cc_op
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // eax
    char *v7;  // esi
    char *v8;  // esi
    char *v9;  // edi
    unsigned int v10;  // 4101
    int v0;  // [bp-0x8]

    v0 = &BotManager;
    CBotManager::PlayerConnect(&BotManager, a2);
    v1 = "loopback";
    v2 = 9;
    v3 = 15;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = a2;
    do
    {
        v8 = v7;
        v9 = v1;
        if (!v2)
            break;
        v2 -= 1;
        v3 = 4;
        v4 = *v8;
        v5 = *v9;
        v1 = v9 + 1;
        v7 = v8 + 1;
    } while (*v8 == *v9);
    v10 = _ccall(4, v3, v4, v5, 0);
    if (!(v10 & 1))
    {
        v11 = _ccall(v3, v4, v5, 0);
        v6 = -(v11 & 1) | 1;
    }
    if (!v6)
        *(unsigned int *)(v0 + 12) = a0;
    return g_pGameRules->field_44->field_2c(g_pGameRules, a0, a1, a2, a3);
}

