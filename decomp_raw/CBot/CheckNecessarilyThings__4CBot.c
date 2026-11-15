// CheckNecessarilyThings__4CBot @0x181830 size=852
typedef struct st_581830_1 {
    char padding_0[136];
    unsigned int field_88;
} st_581830_1;

typedef struct st_581830_4 {
    char padding_0[20];
    struct st_581830_2 *field_14;
} st_581830_4;

typedef struct st_581830_0 {
    char padding_0[264];
    unsigned int field_108;
} st_581830_0;

typedef struct st_581830_2 {
    char padding_0[32];
    struct st_581830_3 *field_20;
} st_581830_2;

typedef struct st_581830_3 {
    unsigned int field_0;
} st_581830_3;

typedef struct st_581830_5 {
    struct st_581830_0 *field_0;
    char padding_4[808];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[8];
    unsigned int field_33c;
    char padding_340[4];
    unsigned int field_344;
    char padding_348[12];
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    char padding_360[4];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
    char padding_3e8[180];
    unsigned int field_49c;
    char padding_4a0[552];
    unsigned int field_6c8;
    char padding_6cc[164];
    unsigned int field_770;
    char padding_774[500];
    struct st_581830_1 *field_968;
    char padding_96c[1784];
    struct st_581830_4 *field_1064;
} st_581830_5;

extern st_581830_0 BotManager;
extern char BotManager+3403;

st_581830_0 * CheckNecessarilyThings__4CBot(st_581830_5 *a0)
{
    st_581830_0 *v3;  // eax
    st_581830_0 *v4;  // eax
    st_581830_0 *v5;  // eax
    st_581830_0 *v6;  // eax
    unsigned int v0;  // [bp-0x28]
    char v1;  // [bp-0x5]

    v1 = 0;
    if (a0->field_32c && (!a0->field_1064 ? 1 : a0->field_1064->field_14->field_20(a0->field_1064) != 2))
        CBasePlayer::StopBlock(a0);
    if (a0->field_344)
    {
        v0 = 11;
    }
    else if (a0->field_358)
    {
        v0 = 2;
    }
    else
    {
        if (!a0->field_1064)
        {
            v1 = 1;
        }
        else if (!(a0->field_1064->field_14->field_20(a0->field_1064) == 18))
        {
            goto LABEL_5818ea;
        }
        if (!v1)
            goto LABEL_581910;
LABEL_5818ea:
        if (a0->field_6c8 || a0->field_37c && a0->field_3e4 == 3)
        {
            v0 = 18;
        }
        else
        {
LABEL_581910:
            if (a0->field_770)
            {
                v0 = 10;
            }
            else
            {
                v3 = &BotManager.padding_0[0];
                if (BotManager+3403 || a0->field_364)
                {
                    v0 = 20;
                }
                else if (!a0->field_37c)
                {
LABEL_581a82:
                    if (a0->field_354 || a0->field_35c)
                    {
                        v0 = 9;
                    }
                    else
                    {
                        if (a0->field_330 && (!a0->field_1064 || (v3 = a0->field_1064->field_14->field_20(a0->field_1064), v3 && !(v3 = a0->field_1064->field_14->field_20(a0->field_1064), v3 == 0xc))))
                            v3 = CBasePlayer::StopPowerUp(a0);
                        if (!a0->field_33c)
                            return v3;
                        if (!a0->field_35c)
                        {
                            if (a0->field_968->field_88 == 10)
                            {
                                v0 = 14;
                            }
                            else
                            {
                                if (a0->field_1064)
                                {
                                    v5 = a0->field_1064->field_14->field_20(a0->field_1064);
                                    if (v5 == 0xf)
                                        return v5;
                                    v6 = a0->field_1064->field_14->field_20(a0->field_1064);
                                    if (v6 == 0x16)
                                        return v6;
                                    v0 = 15;
                                }
                                else
                                {
                                    return CBot::MakeTask(a0, 15);
                                }
                            }
                        }
                        else
                        {
                            return v3;
                        }
                    }
                }
                else if (a0->field_3e4 == 4)
                {
                    v0 = 20;
                }
                else if (a0->field_49c == 2)
                {
                    v0 = 2;
                }
                else if (a0->field_3e4 == 5)
                {
                    v0 = 28;
                }
                else if (a0->field_49c == 6 || a0->field_3e4 && a0->field_3e4 != 3)
                {
                    v0 = 21;
                }
                else if (a0->field_49c == 1)
                {
                    v0 = 8;
                }
                else if (a0->field_49c - 3 > 1 && a0->field_49c != 7 && a0->field_49c != 8 && a0->field_49c != 11 && a0->field_49c != 9 && a0->field_49c != 10)
                {
                    v3 = a0->field_0;
                    if (a0->field_0->field_108 != 11)
                        goto LABEL_581a82;
                    if (a0->field_1064)
                    {
                        v3 = a0->field_1064->field_14->field_20(a0->field_1064);
                        if (v3 == 0xc)
                            goto LABEL_581a82;
                        v0 = 7;
                    }
                    else
                    {
                        v0 = 7;
                    }
                }
                else if (a0->field_1064)
                {
                    v4 = a0->field_1064->field_14->field_20(a0->field_1064);
                    if (v4 == 8)
                        return v4;
                    v0 = 4;
                }
                else
                {
                    v0 = 4;
                }
            }
        }
    }
    return CBot::MakeTask(a0);
}

