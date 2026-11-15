// IsValidClass__18CHalfLifeMultiplayPCcP11CBasePlayer @0xdec20 size=319
typedef struct st_4dec20_3 {
    char padding_0[160];
    struct st_4dec20_4 *field_a0;
} st_4dec20_3;

typedef struct st_4dec20_7 {
    struct st_4dec20_2 *field_0;
    char padding_4[92];
    struct st_4dec20_3 *field_60;
    char padding_64[684];
    char field_310;
    char padding_311[1107];
    struct st_4dec20_6 *field_764;
} st_4dec20_7;

typedef struct st_4dec20_1 {
    char padding_0[396];
    unsigned int field_18c;
} st_4dec20_1;

typedef struct st_4dec20_4 {
    unsigned int field_0;
} st_4dec20_4;

typedef struct st_4dec20_5 {
    char padding_0[52];
    struct st_4dec20_4 *field_34;
} st_4dec20_5;

typedef struct st_4dec20_2 {
    char padding_0[464];
    unsigned int field_1d0;
    char padding_1d4[52];
    struct st_4dec20_1 *field_208;
    char padding_20c[56];
    unsigned int field_244;
} st_4dec20_2;

typedef struct st_4dec20_6 {
    char padding_0[4];
    struct st_4dec20_5 *field_4;
} st_4dec20_6;

typedef struct st_4dec20_0 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_4dec20_0;

extern int g_5a2bdc;
extern float characterlimit+12;
extern st_4dec20_0 *gpGlobals;

unsigned int IsValidClass__18CHalfLifeMultiplayPCcP11CBasePlayer(unsigned int a0, int a1, st_4dec20_7 *a2)
{
    int iter;  // edi
    st_4dec20_7 *v4;  // esi
    int v0;  // [bp-0x10]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)characterlimit+12;
    if (v0 <= 0)
        return 1;
    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v4 = UTIL_PlayerByIndex(iter);
        if (!v4)
        {
            iter += 1;
        }
        else if (!v4->field_60->field_a0(v4))
        {
            iter += 1;
        }
        else if (v4 == a2)
        {
            iter += 1;
        }
        else if (v4->field_0->field_244)
        {
            iter += 1;
        }
        else if (v4->field_310 & 32)
        {
            iter += 1;
        }
        else if (!strcmp@GLIBC_2.0(v4->field_0->field_1d0 + gpGlobals->field_98, &g_5a2bdc))
        {
            iter += 1;
        }
        else if (!v4->field_0->field_208->field_18c)
        {
            iter += 1;
        }
        else if (!strcmp@GLIBC_2.0(a1, CBaseClass::GetName(v4->field_764->field_4->field_34(v4->field_764))))
        {
            v0 -= 1;
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    return v0 > 0;
}

