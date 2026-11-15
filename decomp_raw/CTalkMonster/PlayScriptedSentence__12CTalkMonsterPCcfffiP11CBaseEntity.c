// PlayScriptedSentence__12CTalkMonsterPCcfffiP11CBaseEntity @0x1268c0 size=138
typedef struct st_5268c0_0 {
    char padding_0[360];
    struct st_5268c0_1 *field_168;
} st_5268c0_0;

typedef struct st_5268c0_1 {
    unsigned int field_0;
} st_5268c0_1;

typedef struct st_5268c0_2 {
    char padding_0[96];
    struct st_5268c0_0 *field_60;
    char padding_64[163];
    char field_107;
    char padding_108[500];
    unsigned int field_2fc;
} st_5268c0_2;

typedef struct st_5268c0_3 {
    float field_0;
} st_5268c0_3;

extern st_5268c0_3 *gpGlobals;

int PlayScriptedSentence__12CTalkMonsterPCcfffiP11CBaseEntity(st_5268c0_2 *a0, unsigned int a1, float a2, float a3, float a4, unsigned int a5, int a6)
{
    if (!a5)
        CTalkMonster::ShutUpFriends(a0);
    a0->field_107 = a0->field_107 & 239;
    *(float *)&a0->field_2fc = a2 + *(float *)gpGlobals;
    a0->field_60->field_168(a0, a1, a2, a3, a4);
    return EHANDLE::__as(&a0[1].padding_0[16], a6);
}

