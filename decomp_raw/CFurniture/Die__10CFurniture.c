// Die__10CFurniture @0x117070 size=62
typedef struct st_517070_1 {
    struct st_517070_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_517070_1;

typedef struct st_517070_0 {
    char padding_0[260];
    unsigned int field_104;
} st_517070_0;

typedef struct st_517070_2 {
    float field_0;
} st_517070_2;

extern char SUB_Remove__11CBaseEntity;
extern st_517070_2 *gpGlobals;

short Die__10CFurniture(st_517070_1 *a0)
{
    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    *(float *)&a0->field_0->field_104 = *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

