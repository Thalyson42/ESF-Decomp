// SelectLastItem__11CBasePlayer @0xfbc00 size=177
typedef struct st_4fbc00_0 {
    char padding_0[252];
    struct st_4fbc00_1 *field_fc;
    struct st_4fbc00_1 *field_100;
    struct st_4fbc00_1 *field_104;
    struct st_4fbc00_1 *field_108;
} st_4fbc00_0;

typedef struct st_4fbc00_1 {
    unsigned int field_0;
} st_4fbc00_1;

typedef struct st_4fbc00_2 {
    char padding_0[96];
    struct st_4fbc00_0 *field_60;
} st_4fbc00_2;

unsigned int SelectLastItem__11CBasePlayer(st_4fbc00_2 **a0)
{
    unsigned int v0;  // eax
    st_4fbc00_2 *v1;  // edx
    st_4fbc00_2 *v2;  // eax
    unsigned int v3;  // eax

    if (!a0[604])
        return v3;
    if (a0[602])
    {
        v0 = a0[602]->field_60->field_100(a0[602]);
        if (!v0)
        {
            return v0;
        }
        else if (a0[602])
        {
            a0[602]->field_60->field_104(a0[602], 0);
        }
    }
    v1 = a0[602];
    v2 = a0[604];
    a0[602] = v2;
    a0[604] = v1;
    v2->field_60->field_fc(v2);
    return a0[602]->field_60->field_108(a0[602]);
}

