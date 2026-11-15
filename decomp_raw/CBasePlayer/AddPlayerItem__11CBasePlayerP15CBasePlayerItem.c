// AddPlayerItem__11CBasePlayerP15CBasePlayerItem @0xfcf60 size=540
typedef struct st_4fcf60_9 {
    char padding_0[132];
    unsigned int field_84;
} st_4fcf60_9;

typedef struct st_4fcf60_2 {
    struct st_4fcf60_1 *field_0;
    char padding_4[92];
    struct st_4fcf60_0 *field_60;
    char padding_64[32];
    struct st_4fcf60_2 *field_84;
} st_4fcf60_2;

typedef struct st_4fcf60_5 {
    char padding_0[2368];
    struct st_4fcf60_2 *field_940;
    char padding_944[36];
    struct st_4fcf60_4 *field_968;
} st_4fcf60_5;

typedef struct st_4fcf60_3 {
    char padding_0[264];
    struct st_4fcf60_1 *field_108;
} st_4fcf60_3;

typedef struct st_4fcf60_0 {
    char padding_0[236];
    struct st_4fcf60_1 *field_ec;
    struct st_4fcf60_1 *field_f0;
    char padding_f4[20];
    struct st_4fcf60_1 *field_108;
    char padding_10c[12];
    struct st_4fcf60_1 *field_118;
    char padding_11c[20];
    struct st_4fcf60_1 *field_130;
} st_4fcf60_0;

typedef struct st_4fcf60_1 {
    unsigned int field_0;
} st_4fcf60_1;

typedef struct st_4fcf60_4 {
    char padding_0[96];
    struct st_4fcf60_3 *field_60;
} st_4fcf60_4;

typedef struct st_4fcf60_7 {
    char padding_0[16];
    struct st_4fcf60_1 *field_10;
    char padding_14[100];
    struct st_4fcf60_1 *field_78;
} st_4fcf60_7;

typedef struct st_4fcf60_6 {
    char padding_0[152];
    unsigned int field_98;
} st_4fcf60_6;

typedef struct st_4fcf60_8 {
    char padding_0[68];
    struct st_4fcf60_7 *field_44;
} st_4fcf60_8;

extern st_4fcf60_8 *g_pGameRules;
extern st_4fcf60_6 *gpGlobals;
extern unsigned int gEvilImpulse101;

unsigned int AddPlayerItem__11CBasePlayerP15CBasePlayerItem(st_4fcf60_5 *a0, st_4fcf60_2 *a1)
{
    unsigned int idx;  // eax
    st_4fcf60_9 *v2;  // esi
    st_4fcf60_9 *v3;  // esi
    st_4fcf60_0 *v4;  // eax
    st_4fcf60_2 **v5;  // esi
    st_4fcf60_2 *v6;  // ecx
    st_4fcf60_2 *v0;  // [bp-0x2c]

    idx = a1->field_60->field_130(a1);
    v2 = (&a0->field_940)[idx];
    if ((&a0->field_940)[idx])
    {
        while (1)
        {
            v3 = v2;
            if (!strcmp@GLIBC_2.0(gpGlobals->field_98 + *(int *)*(int *)&v3->padding_0[0], *(int *)a1->field_0 + gpGlobals->field_98))
                break;
            v2 = v3->field_84;
            if (!v3->field_84)
                goto LABEL_4fd090;
        }
        if (a1->field_60->field_f0(a1, v3))
        {
            g_pGameRules->field_44->field_78(g_pGameRules, a0, a1);
            CBasePlayerItem::CheckRespawn(a1);
            (*(int *)(*(int *)&v3->padding_0[96] + 264))(v3);
            if (a0->field_968)
                a0->field_968->field_60->field_108(a0->field_968);
            a1->field_60->field_118(a1);
            return 0;
        }
        if (gEvilImpulse101)
        {
            v4 = a1->field_60;
            v0 = a1;
            goto LABEL_4fd168;
        }
    }
    else
    {
LABEL_4fd090:
        if (a1->field_60->field_ec(a1, a0))
        {
            g_pGameRules->field_44->field_78(g_pGameRules, a0, a1);
            CBasePlayerItem::CheckRespawn(a1);
            v5 = &a0->field_940;
            v6 = a1;
            v6->field_84 = v5[a1->field_60->field_130(a1)];
            v5[v6->field_60->field_130(v6)] = a1;
            if (!g_pGameRules->field_44->field_10(g_pGameRules, a0, a1))
                return 1;
            CBasePlayer::SwitchWeapon(a0, a1);
            return 1;
        }
        if (gEvilImpulse101)
        {
            v4 = a1->field_60;
            v0 = a1;
LABEL_4fd168:
            v4->field_118(a1);
        }
    }
    return 0;
}

