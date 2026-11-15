// Drop__15CBasePlayerItem @0x138670 size=85
typedef struct st_538670_1 {
    char padding_0[260];
    float field_104;
} st_538670_1;

typedef struct st_538670_2 {
    struct st_538670_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
} st_538670_2;

typedef struct st_538670_0 {
    float field_0;
} st_538670_0;

extern char SUB_Remove__11CBaseEntity;
extern st_538670_0 *gpGlobals;

short Drop__15CBasePlayerItem(st_538670_2 *a0)
{
    a0->field_14 = 0;
    a0->field_18 = 0;
    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    return (unsigned short)gpGlobals;
}

