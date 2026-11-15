// TaskThink__13CTeleportTask @0x1827d0 size=126
typedef struct st_5827d0_0 {
    char padding_0[2824];
    float field_b08;
    int field_b0c;
    char padding_b10[256];
    unsigned int field_c10;
} st_5827d0_0;

typedef struct st_5827d0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5827d0_0 *field_8;
} st_5827d0_1;

typedef struct st_5827d0_2 {
    unsigned int field_0;
} st_5827d0_2;

extern st_5827d0_2 *gpGlobals;

unsigned int TaskThink__13CTeleportTask(st_5827d0_1 *a0)
{
    unsigned int v0;  // eax

    a0->field_8->field_c10 = 0;
    CBot::ResetMoveSpeed(a0->field_8);
    CBot::SetMoveDir(a0->field_8, a0->field_8->field_b0c);
    if (a0->field_8->field_b08 <= *(float *)gpGlobals)
    {
        v0 = CBasePlayer::Teleport(a0->field_8);
        a0->field_4 = 2;
    }
    return v0;
}

