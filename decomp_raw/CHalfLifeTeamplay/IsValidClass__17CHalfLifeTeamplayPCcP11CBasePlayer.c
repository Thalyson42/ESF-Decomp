// IsValidClass__17CHalfLifeTeamplayPCcP11CBasePlayer @0x127c80 size=325
typedef struct st_527c80_0 {
    char padding_0[428];
    unsigned int field_1ac;
} st_527c80_0;

typedef struct st_527c80_1 {
    int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_527c80_1;

extern float realteams+12;
extern st_527c80_1 g_pGoodClasses;
extern st_527c80_1 g_pEvilClasses;

unsigned int IsValidClass__17CHalfLifeTeamplayPCcP11CBasePlayer(int a0, int a1, st_527c80_0 **a2)
{
    int v5;  // edi
    int i;  // esi
    int j;  // esi
    int k;  // esi
    char *v0;  // [bp-0xfe44]
    unsigned int v1;  // [bp-0xfe40]
    char *v2;  // [bp-0xfe3c]
    char *v3;  // [bp-0xfe38]
    char v4;  // [bp-0xfe34]

    if (realteams+12 != 1.0f)
        return CHalfLifeMultiplay::IsValidClass(a0, a1, a2);
    if (*a2->field_1ac == 2)
    {
        v5 = 4;
        i = 0;
        v3 = &v4;
        do
        {
            strcpy@GLIBC_2.0(&v3[0xff * i], (&g_pEvilClasses.field_0)[i]);
            i += 1;
        } while (i < 4);
    }
    else if (*a2->field_1ac == 1)
    {
        v5 = 5;
        j = 0;
        v2 = &v4;
        do
        {
            strcpy@GLIBC_2.0(&v2[0xff * j], (&g_pGoodClasses.field_0)[j]);
            j += 1;
        } while (j < 5);
    }
    else
    {
        return 0;
    }
    v1 = 0;
    k = 0;
    for (v0 = &v4; k < v5; k += 1)
    {
        if (!strcmp@GLIBC_2.0(&v0[0xff * k], a1))
        {
            v1 = 1;
            break;
        }
    }
    if (v1)
        return CHalfLifeMultiplay::IsValidClass(a0, a1, a2);
    return 0;
}

