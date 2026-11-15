// MakeCandy__11CBasePlayerPCc @0xf0320 size=108
typedef struct st_4f0320_1 {
    char padding_0[1832];
    struct st_4f0320_0 *field_728;
} st_4f0320_1;

typedef struct st_4f0320_0 {
    char padding_0[868];
    unsigned int field_364;
} st_4f0320_0;

unsigned int MakeCandy__11CBasePlayerPCc(st_4f0320_1 *a0, int a1)
{
    unsigned int v0;  // eax

    if (!a0->field_728)
    {
        return 0;
    }
    else if (!a0->field_728->field_364)
    {
        a0->field_728 = NULL;
        return 0;
    }
    else
    {
        v0 = CBasePlayer::BecomeCandy(a0->field_728, a1, a0);
        if (!v0)
            return v0;
        a0->field_728 = NULL;
        return v0;
    }
}

