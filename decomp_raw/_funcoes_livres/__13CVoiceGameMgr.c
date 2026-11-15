// __13CVoiceGameMgr @0x18be80 size=56
typedef struct st_58be80_0 {
    char padding_0[24];
    unsigned int field_18;
} st_58be80_0;

extern char __vt_13CVoiceGameMgr;

st_58be80_0 * __13CVoiceGameMgr(st_58be80_0 *a0)
{
    a0->field_18 = &__vt_13CVoiceGameMgr;
    memset(&a0->padding_0[12], 0, 12);
    return a0;
}

