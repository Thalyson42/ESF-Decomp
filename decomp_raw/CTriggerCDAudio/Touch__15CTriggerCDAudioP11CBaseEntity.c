// Touch__15CTriggerCDAudioP11CBaseEntity @0x12c080 size=63
typedef struct st_52c080_0 {
    char padding_0[160];
    struct st_52c080_1 *field_a0;
} st_52c080_0;

typedef struct st_52c080_1 {
    unsigned int field_0;
} st_52c080_1;

typedef struct st_52c080_2 {
    char padding_0[96];
    struct st_52c080_0 *field_60;
} st_52c080_2;

unsigned int Touch__15CTriggerCDAudioP11CBaseEntity(int a0, st_52c080_2 *a1)
{
    unsigned int v0;  // eax

    v0 = a1->field_60->field_a0(a1);
    if (!v0)
        return v0;
    return CTriggerCDAudio::PlayTrack(a0);
}

