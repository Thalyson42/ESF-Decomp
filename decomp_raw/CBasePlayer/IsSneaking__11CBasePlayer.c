// IsSneaking__11CBasePlayer @0xfee00 size=58
typedef struct st_4fee00_0 {
    char padding_0[2336];
    float field_920;
} st_4fee00_0;

typedef struct st_4fee00_1 {
    unsigned int field_0;
} st_4fee00_1;

extern st_4fee00_1 *gpGlobals;

int IsSneaking__11CBasePlayer(st_4fee00_0 *a0)
{
    return a0->field_920 <= *(float *)gpGlobals;
}

