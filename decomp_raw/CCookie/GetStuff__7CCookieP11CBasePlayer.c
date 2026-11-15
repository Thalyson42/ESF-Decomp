// GetStuff__7CCookieP11CBasePlayer @0x9a030 size=27
typedef struct st_49a030_0 {
    char padding_0[352];
    float field_160;
} st_49a030_0;

typedef struct st_49a030_1 {
    struct st_49a030_0 *field_0;
    char padding_4[584];
    int field_24c;
} st_49a030_1;

st_49a030_1 * GetStuff__7CCookieP11CBasePlayer(unsigned int a0, st_49a030_1 *a1)
{
    a1->field_0->field_160 = (float)a1->field_24c;
    return a1;
}

