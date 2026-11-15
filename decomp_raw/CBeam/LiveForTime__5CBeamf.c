// LiveForTime__5CBeamf @0xb74c0 size=65
typedef struct st_4b74c0_2 {
    struct st_4b74c0_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_4b74c0_2;

typedef struct st_4b74c0_1 {
    char padding_0[260];
    unsigned int field_104;
} st_4b74c0_1;

typedef struct st_4b74c0_0 {
    float field_0;
} st_4b74c0_0;

extern char SUB_Remove__11CBaseEntity;
extern st_4b74c0_0 *gpGlobals;

short LiveForTime__5CBeamf(st_4b74c0_2 *a0, float a1)
{
    a0->field_c = _INSERT(0, 0, 0) | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    *(float *)&a0->field_0->field_104 = a1 + *(float *)gpGlobals;
    return (unsigned short)gpGlobals;
}

