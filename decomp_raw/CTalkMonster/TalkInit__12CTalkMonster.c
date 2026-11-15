// TalkInit__12CTalkMonster @0x125b80 size=46
typedef struct st_525b80_0 {
    char padding_0[688];
    unsigned int field_2b0;
} st_525b80_0;

extern unsigned int _12CTalkMonster.g_talkWaitTime;

unsigned int * TalkInit__12CTalkMonster(st_525b80_0 *a0)
{
    _12CTalkMonster.g_talkWaitTime = 0;
    a0->field_2b0 = 100;
    return &_12CTalkMonster.g_talkWaitTime;
}

