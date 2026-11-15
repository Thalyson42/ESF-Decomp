// LimitFollowers__12CTalkMonsterP11CBaseEntityi @0x125930 size=151
typedef struct st_525930_1 {
    unsigned int field_0;
} st_525930_1;

typedef struct st_525930_0 {
    char padding_0[76];
    struct st_525930_1 *field_4c;
} st_525930_0;

typedef struct st_525930_2 {
    char padding_0[96];
    struct st_525930_0 *field_60;
} st_525930_2;

st_525930_2 * LimitFollowers__12CTalkMonsterP11CBaseEntityi(int a0, unsigned int a1, int a2)
{
    st_525930_2 *v2;  // edi
    st_525930_2 *v3;  // esi
    int v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    v2 = NULL;
    v0 = 0;
    v1 = 0;
    while (1)
    {
        v2 = sub_489900(a0, v2, v1, 0);
        if (v2)
        {
            v3 = v2->field_60->field_4c(v2);
            if (v3 && sub_488810(&v3[2].padding_0[72]) == a1)
            {
                v0 += 1;
                if (v0 > a2)
                    (*(int *)&v3->field_60[6].padding_0[20])(v3, 1);
            }
        }
        else
        {
            v1 += 1;
            if (v1 > 2)
                break;
        }
    }
    return v2;
}

