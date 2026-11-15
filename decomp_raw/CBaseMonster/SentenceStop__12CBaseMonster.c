// SentenceStop__12CBaseMonster @0xd9de0 size=76
typedef struct st_4d9de0_0 {
    char padding_0[520];
    int field_208;
} st_4d9de0_0;

int SentenceStop__12CBaseMonster(st_4d9de0_0 **a0)
{
    return EMIT_SOUND_DYN(*a0->field_208, 2, "common/null.wav", 0x3f800000, 2.0f, 0, 100);
}

