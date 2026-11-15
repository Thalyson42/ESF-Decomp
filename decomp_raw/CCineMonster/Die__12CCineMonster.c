// Die__12CCineMonster @0x114c60 size=44
typedef struct st_514c60_0 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
} st_514c60_0;

extern char SUB_Remove__11CBaseEntity;

short Die__12CCineMonster(st_514c60_0 *a0)
{
    unsigned int v0;  // eax

    *(unsigned short *)&v0 = 0;
    a0->field_c = v0 | 0xffff0000;
    a0->field_10 = &SUB_Remove__11CBaseEntity;
    return v0;
}

