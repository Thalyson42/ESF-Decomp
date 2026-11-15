// SetMoveDir__4CBoti @0x16fd20 size=286
typedef struct st_56fd20_0 {
    struct st_56fd20_1 *field_0;
    char padding_4[3428];
    float field_d68;
    float field_d6c;
    float field_d70;
} st_56fd20_0;

typedef struct st_56fd20_1 {
    char padding_0[384];
    char field_180;
    char field_181;
} st_56fd20_1;

char * SetMoveDir__4CBoti(st_56fd20_0 *a0, unsigned int a1)
{
    char *v1;  // eax
    char *v2;  // eax
    int v0;  // [bp-0x8]

    if (a1 & 2)
    {
        v0 = -CBasePlayer::GetMaxSpeed(a0);
        a0->field_d68 = (float)v0;
        v1 = &a0->field_0->padding_0[0];
        v1[385] = v1[385] | 2;
    }
    if (a1 & 4)
    {
        v0 = CBasePlayer::GetMaxSpeed(a0);
        a0->field_d68 = (float)v0;
        v1 = &a0->field_0->padding_0[0];
        v1[385] = v1[385] | 4;
    }
    if (a1 & 16)
    {
        v0 = CBasePlayer::GetMaxSpeed(a0);
        a0->field_d70 = (float)v0;
        v1 = &a0->field_0->padding_0[0];
        v1[384] = v1[384] | 8;
    }
    if (a1 & 8)
    {
        v0 = -CBasePlayer::GetMaxSpeed(a0);
        a0->field_d70 = (float)v0;
        v1 = &a0->field_0->padding_0[0];
        v1[384] = v1[384] | 16;
    }
    if (a1 & 32)
    {
        v0 = CBasePlayer::GetMaxSpeed(a0);
        a0->field_d6c = (float)v0;
        v1 = &a0->field_0->padding_0[0];
        v1[384] = v1[384] | 2;
    }
    if (!(a1 & 64))
        return v1;
    v0 = -CBasePlayer::GetMaxSpeed(a0);
    a0->field_d6c = (float)v0;
    v2 = &a0->field_0->padding_0[0];
    v2[384] = v2[384] | 4;
    return v2;
}

