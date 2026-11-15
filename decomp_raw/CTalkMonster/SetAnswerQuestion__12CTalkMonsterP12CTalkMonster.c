// SetAnswerQuestion__12CTalkMonsterP12CTalkMonster @0x126a60 size=79
typedef struct st_526a60_0 {
    char padding_0[676];
    unsigned int field_2a4;
} st_526a60_0;

extern int slIdleResponse;

int SetAnswerQuestion__12CTalkMonsterP12CTalkMonster(st_526a60_0 *a0, int a1)
{
    if (!a0->field_2a4)
        CBaseMonster::ChangeSchedule(a0, &slIdleResponse);
    return EHANDLE::__as(&a0[1].padding_0[104], a1);
}

