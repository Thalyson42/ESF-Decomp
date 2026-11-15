// StopTurbo__11CBasePlayer @0xf09a0 size=94
typedef struct st_4f09a0_0 {
    char padding_0[804];
    unsigned int field_324;
    char padding_328[84];
    unsigned int field_37c;
    char padding_380[1004];
    int field_76c;
} st_4f09a0_0;

unsigned int StopTurbo__11CBasePlayer(st_4f09a0_0 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (a0->field_37c)
    {
        return v3;
    }
    else if (a0->field_324)
    {
        a0->field_324 = 0;
        if (!a0->field_76c)
            return v1;
        v0 = sub_48dd20(a0->field_76c);
        a0->field_76c = 0;
        return v0;
    }
    else
    {
        return v2;
    }
}

