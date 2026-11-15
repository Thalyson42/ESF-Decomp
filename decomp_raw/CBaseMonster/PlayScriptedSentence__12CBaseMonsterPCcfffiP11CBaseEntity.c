// PlayScriptedSentence__12CBaseMonsterPCcfffiP11CBaseEntity @0xd9d90 size=75
typedef struct st_4d9d90_0 {
    char padding_0[360];
    struct st_4d9d90_1 *field_168;
} st_4d9d90_0;

typedef struct st_4d9d90_1 {
    unsigned int field_0;
} st_4d9d90_1;

typedef struct st_4d9d90_2 {
    char padding_0[96];
    struct st_4d9d90_0 *field_60;
} st_4d9d90_2;

int PlayScriptedSentence__12CBaseMonsterPCcfffiP11CBaseEntity(st_4d9d90_2 *a0, unsigned int a1, float a2, float a3, float a4)
{
    return a0->field_60->field_168(a0, a1, a2, a3, a4);
}

