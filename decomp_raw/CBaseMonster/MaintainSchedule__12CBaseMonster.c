// MaintainSchedule__12CBaseMonster @0x111ea0 size=637
typedef struct st_511ea0_0 {
    char padding_0[332];
    struct st_511ea0_1 *field_14c;
    struct st_511ea0_1 *field_150;
    struct st_511ea0_1 *field_154;
    struct st_511ea0_1 *field_158;
    struct st_511ea0_1 *field_15c;
    char padding_160[20];
    struct st_511ea0_1 *field_174;
    struct st_511ea0_1 *field_178;
} st_511ea0_0;

typedef struct st_511ea0_1 {
    unsigned int field_0;
} st_511ea0_1;

typedef struct st_511ea0_3 {
    char padding_0[96];
    struct st_511ea0_0 *field_60;
    char padding_64[160];
    int field_104;
    char field_107;
    char field_108;
    char padding_109[107];
    unsigned int field_174;
    unsigned int field_178;
    char padding_17c[4];
    int field_180;
    int field_184;
    unsigned int field_188;
    struct st_511ea0_2 *field_18c;
    unsigned int field_190;
    char padding_194[232];
    unsigned int field_27c;
} st_511ea0_3;

typedef struct st_511ea0_2 {
    char padding_0[8];
    int field_8;
} st_511ea0_2;

extern st_511ea0_1 *g_engfuncs.pfnAlertMessage;

unsigned int MaintainSchedule__12CBaseMonster(st_511ea0_3 *a0)
{
    st_511ea0_0 *v2;  // eax
    int v3;  // edi
    int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v0;  // [bp-0x28]
    int v1;  // [bp-0x8]

    v1 = 0;
    do
    {
        if (a0->field_188 && a0->field_184 == 4)
            CBaseMonster::NextScheduledTask(a0);
        if (!CBaseMonster::FScheduleValid(a0) || a0->padding_17c != a0->field_180)
        {
            a0->field_60->field_15c(a0);
            if (a0->field_180 != 8 && (a0->field_180 != 6 || a0->padding_17c == 6) && (a0->field_104 && a0->field_104 >= 0 || a0->field_188 && *(int *)(a0->field_188 + 8) < 0 || a0->padding_17c == 2 && !EHANDLE::__opi(&a0->field_107)))
                a0->field_60->field_174(a0);
            if (*((char *)&a0->field_104 + 3) & 64 && a0->padding_17c == a0->field_180)
            {
                if (*(int *)&a0->padding_194[228])
                {
                    v2 = a0->field_60;
                    v0 = *(int *)&a0->padding_194[228];
                }
                else
                {
                    v2 = a0->field_60;
                    v0 = 41;
                }
                v3 = v2->field_154(a0);
                g_engfuncs.pfnAlertMessage(2, "Schedule Failed at %d!\n", a0->field_18c);
                CBaseMonster::ChangeSchedule(a0, v3);
            }
            else
            {
                CBaseMonster::SetState(a0, a0->field_180);
                if (a0->padding_17c == 6 || a0->padding_17c == 8)
                    v4 = CBaseMonster::GetSchedule(a0);
                else
                    v4 = a0->field_60->field_158(a0);
                CBaseMonster::ChangeSchedule(a0, v4);
            }
        }
        if (!a0->field_184)
        {
            v5 = CBaseMonster::GetTask(a0);
            a0->field_184 = 1;
            a0->field_60->field_14c(a0, v5);
        }
        if (*(int *)&a0->padding_109[106] != a0->field_174)
            a0->field_60->field_178(a0, a0->field_174);
    } while ((a0->field_184 == 4 || !a0->field_184) && (v1 += 1, v1 <= 9));
    if (CBaseMonster::TaskIsRunning(a0))
    {
        v6 = CBaseMonster::GetTask(a0);
        a0->field_60->field_150(a0, v6);
    }
    v7 = *(int *)&a0->padding_109[106];
    if (*(int *)&a0->padding_109[106] != a0->field_174)
        v7 = a0->field_60->field_178(a0, a0->field_174);
    return v7;
}

