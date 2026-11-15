// Materialize__15CBasePlayerItem @0x1380b0 size=120
typedef struct st_5380b0_0 {
    char padding_0[8];
    char field_8;
    char padding_9[259];
    unsigned int field_10c;
    char padding_110[8];
    char field_118;
} st_5380b0_0;

typedef struct st_5380b0_1 {
    struct st_5380b0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_5380b0_1;

extern char DefaultTouch__15CBasePlayerItemP11CBaseEntity;

short Materialize__15CBasePlayerItem(st_5380b0_1 *a0)
{
    st_5380b0_0 *v0;  // eax
    unsigned int v1;  // eax

    v0 = a0->field_0;
    if ((char)v0->field_118 < 0)
    {
        v0->field_118 = v0->field_118 & 127;
        a0->field_0->field_118 = a0->field_0->field_118 | 2;
    }
    a0->field_0->field_10c = 1;
    v1 = _INSERT(UTIL_SetOrigin(a0->field_0, &a0->field_0->field_8), 0, 0);
    a0->field_14 = v1 | 0xffff0000;
    a0->field_18 = &DefaultTouch__15CBasePlayerItemP11CBaseEntity;
    a0->field_c = 0;
    a0->field_10 = 0;
    return v1;
}

