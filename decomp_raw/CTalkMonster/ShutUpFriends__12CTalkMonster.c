// ShutUpFriends__12CTalkMonster @0x1258c0 size=109
typedef struct st_5258c0_1 {
    unsigned int field_0;
} st_5258c0_1;

typedef struct st_5258c0_0 {
    char padding_0[76];
    struct st_5258c0_1 *field_4c;
} st_5258c0_0;

typedef struct st_5258c0_2 {
    char padding_0[96];
    struct st_5258c0_0 *field_60;
} st_5258c0_2;

st_5258c0_2 * ShutUpFriends__12CTalkMonster(int a0)
{
    st_5258c0_2 *v0;  // esi
    int v1;  // edi
    st_5258c0_2 *v2;  // edx

    v0 = NULL;
    v1 = 0;
    while (1)
    {
        v0 = CTalkMonster::EnumFriends(a0, v0, v1, 1);
        if (v0)
        {
            v2 = v0->field_60->field_4c(v0);
            if (v2)
                (*(int *)&v2->field_60[4].padding_0[48])(v2);
        }
        else
        {
            v1 += 1;
            if (v1 > 2)
                break;
        }
    }
    return v0;
}

