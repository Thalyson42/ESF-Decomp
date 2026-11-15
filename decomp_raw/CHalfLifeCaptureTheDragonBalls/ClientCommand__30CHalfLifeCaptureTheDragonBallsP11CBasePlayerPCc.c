// ClientCommand__30CHalfLifeCaptureTheDragonBallsP11CBasePlayerPCc @0x9b380 size=320
typedef struct st_49b380_3 {
    char padding_0[840];
    unsigned int field_348;
    unsigned int field_34c;
    char padding_350[1004];
    float field_73c;
} st_49b380_3;

typedef struct st_49b380_0 {
    char padding_0[240];
    struct st_49b380_1 *field_f0;
} st_49b380_0;

typedef struct st_49b380_1 {
    unsigned int field_0;
} st_49b380_1;

typedef struct st_49b380_2 {
    char padding_0[68];
    struct st_49b380_0 *field_44;
    char padding_48[548];
    unsigned int field_26c;
    char padding_270[4];
    unsigned int field_274;
} st_49b380_2;

typedef struct st_49b380_4 {
    float field_0;
} st_49b380_4;

extern st_49b380_4 *gpGlobals;

unsigned int ClientCommand__30CHalfLifeCaptureTheDragonBallsP11CBasePlayerPCc(st_49b380_2 *a0, st_49b380_3 *a1, int a2)
{
    unsigned int v0;  // [bp-0x24]

    if (!strcmp@GLIBC_2.0(a2, "immortality"))
    {
        if (a0->field_26c && a1->field_348 && a0->field_274)
        {
            a1->field_34c = 1;
            a1->field_73c = (float)(*(float *)gpGlobals + 45.0);
            goto LABEL_49b455;
        }
    }
    else
    {
        if (strcmp@GLIBC_2.0(a2, "strength"))
        {
            if (strcmp@GLIBC_2.0(a2, "wishpoint"))
                return CHalfLifeTeamplay::ClientCommand(a0, a1, a2);
            if (a0->field_26c && a1->field_348 && a0->field_274)
            {
                v0 = 2;
LABEL_49b49a:
                CHalfLifeCaptureTheDragonBalls::FinishWish(a0, a1);
            }
        }
        else if (a0->field_26c && a1->field_348 && a0->field_274)
        {
            CBasePlayer::IncreasePL(a1, 1000000);
            a0->field_44->field_f0(a0);
LABEL_49b455:
            v0 = 1;
            goto LABEL_49b49a;
        }
    }
    return 1;
}

