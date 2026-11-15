// ActivateMultiTrigger__12CBaseTriggerP11CBaseEntity @0x12cec0 size=537
typedef struct st_52cec0_0 {
    char padding_0[128];
    unsigned int field_80;
} st_52cec0_0;

typedef struct st_52cec0_4 {
    char padding_0[160];
    struct st_52cec0_5 *field_a0;
} st_52cec0_4;

typedef struct st_52cec0_2 {
    struct st_52cec0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char padding_1c[112];
    unsigned int field_8c;
    char padding_90[68];
    char field_d4;
    char padding_d5[43];
    int field_100;
} st_52cec0_2;

typedef struct st_52cec0_5 {
    unsigned int field_0;
} st_52cec0_5;

typedef struct st_52cec0_7 {
    char padding_0[44];
    unsigned int field_2c;
} st_52cec0_7;

typedef struct st_52cec0_1 {
    unsigned int field_0;
    char padding_4[256];
    float field_104;
    char padding_108[136];
    struct st_52cec0_0 *field_190;
    char padding_194[64];
    unsigned int field_1d4;
    char padding_1d8[16];
    unsigned int field_1e8;
    char padding_1ec[28];
    int field_208;
} st_52cec0_1;

typedef struct st_52cec0_6 {
    char padding_0[96];
    struct st_52cec0_4 *field_60;
} st_52cec0_6;

typedef struct st_52cec0_3 {
    unsigned int field_0;
    char padding_4[32];
    float field_24;
    char padding_28[112];
    unsigned int field_98;
} st_52cec0_3;

extern char SUB_Remove__11CBaseEntity;
extern char MultiWaitOver__12CBaseTrigger;
extern st_52cec0_3 *gpGlobals;

unsigned int * ActivateMultiTrigger__12CBaseTriggerP11CBaseEntity(st_52cec0_2 *a0, st_52cec0_6 *a1)
{
    st_52cec0_7 *v2;  // esi
    unsigned int v5;  // eax
    unsigned int v0;  // [bp-0x44]
    unsigned int v1;  // [bp-0x40]

    if (a0->field_0->field_104 > *(float *)&gpGlobals->field_0 || !sub_488a80(a0->field_100, a1))
        return gpGlobals;
    if (!sub_488af0(a0->field_0->field_0 + gpGlobals->field_98, "trigger_secret"))
    {
        if (!a0->field_0->field_190)
            return gpGlobals;
        if (!sub_488af0(*(!a0->field_0->field_190 ? NULL : (struct st_52cec0_0 *)&a0->field_0->field_190->field_80) + gpGlobals->field_98, "player"))
        {
            gpGlobals->field_24 = (float)(1.0 + gpGlobals->field_24);
            goto LABEL_52cf9b;
        }
    }
    else
    {
LABEL_52cf9b:
        if (a0->field_0->field_1e8)
            sub_489390(a0->field_0->field_208, 2, gpGlobals->field_98 + a0->field_0->field_1e8, 0x3f800000, 0.800000011920929f, 0, 100);
        v2 = &a0->field_d4;
        sub_48d960(v2, a1);
        v1 = 0;
        v0 = 3;
        sub_48d150(a0, sub_488810(v2));
        if (a0->field_0->field_1d4 && a1->field_60->field_a0(a1))
            sub_488380(a0->field_0->field_1d4 + gpGlobals->field_98, a1);
        if (0.0 < *(float *)&a0->field_8c)
        {
            a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
            a0->field_10 = &MultiWaitOver__12CBaseTrigger;
            a0->field_0->field_104 = *(float *)&gpGlobals->field_0 + *(float *)&a0->field_8c;
        }
        else
        {
            a0->field_14 = 0;
            a0->field_18 = 0;
            a0->field_0->field_104 = (float)(0.1 + *(float *)&gpGlobals->field_0);
            v5 = _INSERT(gpGlobals, 0, 0);
            a0->field_c = v5 | 0xffff0000;
            a0->field_10 = &SUB_Remove__11CBaseEntity;
        }
    }
    return gpGlobals;
}

