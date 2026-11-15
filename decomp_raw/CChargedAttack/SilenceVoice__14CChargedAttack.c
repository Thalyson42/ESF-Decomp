// SilenceVoice__14CChargedAttack @0x9eef0 size=82
typedef struct st_49eef0_1 {
    char padding_0[128];
    struct st_49eef0_2 *field_80;
} st_49eef0_1;

typedef struct st_49eef0_2 {
    struct st_49eef0_0 *field_0;
} st_49eef0_2;

typedef struct st_49eef0_0 {
    char padding_0[520];
    int field_208;
} st_49eef0_0;

int SilenceVoice__14CChargedAttack(st_49eef0_1 *a0)
{
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

