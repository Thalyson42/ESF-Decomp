// _._13CVoiceGameMgr @0x18bec0 size=53
typedef struct st_58bec0_0 {
    char padding_0[24];
    unsigned int field_18;
} st_58bec0_0;

extern unsigned int __vt_13CVoiceGameMgr;

unsigned int _._13CVoiceGameMgr(st_58bec0_0 *a0, char a1)
{
    unsigned int v0;  // eax

    v0 = &__vt_13CVoiceGameMgr;
    a0->field_18 = &__vt_13CVoiceGameMgr;
    if (a1 & 1)
        v0 = __builtin_delete(a0);
    return v0;
}

