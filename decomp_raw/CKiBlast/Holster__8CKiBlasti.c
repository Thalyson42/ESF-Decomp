// Holster__8CKiBlasti @0xccb10 size=66
typedef struct st_4ccb10_0 {
    char padding_0[128];
    int field_80;
} st_4ccb10_0;

int Holster__8CKiBlasti(st_4ccb10_0 *a0)
{
    CBasePlayer::StopAniTrigger(a0->field_80, 5);
    return CBasePlayer::StopAniTrigger(a0->field_80, 6);
}

