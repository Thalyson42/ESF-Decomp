// Spectator_SetMode__11CBasePlayeri @0xf00c0 size=269
typedef struct st_4f00c0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_4f00c0_1;

typedef struct st_4f00c0_0 {
    char padding_0[580];
    unsigned int field_244;
    unsigned int field_248;
} st_4f00c0_0;

typedef struct st_4f00c0_2 {
    unsigned int field_0;
} st_4f00c0_2;

extern st_4f00c0_2 *g_engfuncs.pfnIndexOfEdict;

unsigned int * Spectator_SetMode__11CBasePlayeri(st_4f00c0_0 **a0, unsigned int a1)
{
    unsigned int v1;  // esi
    unsigned int v2;  // edi
    st_4f00c0_1 **v3;  // eax
    unsigned int v4;  // eax
    unsigned int *v5;  // eax
    unsigned int *v6;  // eax
    int v0;  // [bp-0x28]

    v1 = a1;
    if (v1 == *a0->field_244)
        return *a0;
    if (v1 - 1 > 5)
        v1 = 4;
    if (v1 != 3 && v1 != 5)
    {
        v2 = a0 + 482;
        if (!EHANDLE::__opi(v2))
        {
            *(unsigned short *)&v0 = 0;
            CBasePlayer::Spectator_FindNextPlayer(a0, v0);
            if (!EHANDLE::__opi(v2))
            {
                ClientPrint(*a0, 4, "#Spec_NoTarget", 0, 0, 0, 0);
                v1 = 3;
            }
        }
    }
    *a0->field_244 = v1;
    if (v1 != 3 && v1 != 5)
    {
        v3 = EHANDLE::__rf(a0 + 482);
        v4 = g_engfuncs.pfnIndexOfEdict(*v3->field_208);
        v5 = *a0;
        v5[146] = v4;
        return v5;
    }
    v6 = *a0;
    v6[146] = 0;
    return v6;
}

