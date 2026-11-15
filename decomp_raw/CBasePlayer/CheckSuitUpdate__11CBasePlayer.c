// CheckSuitUpdate__11CBasePlayer @0xf9a40 size=308
typedef struct st_4f9a40_0 {
    struct st_4f9a40_1 *field_0;
    char padding_4[1976];
    float field_7bc;
    int field_7c0;
    char padding_7c4[12];
    unsigned int field_7d0;
} st_4f9a40_0;

typedef struct st_4f9a40_1 {
    char padding_0[360];
    int field_168;
    char padding_16c[156];
    int field_208;
} st_4f9a40_1;

typedef struct st_4f9a40_3 {
    char padding_0[24];
    struct st_4f9a40_2 *field_18;
} st_4f9a40_3;

typedef struct st_4f9a40_2 {
    unsigned int field_0;
} st_4f9a40_2;

typedef struct st_4f9a40_4 {
    char padding_0[68];
    struct st_4f9a40_3 *field_44;
} st_4f9a40_4;

extern st_4f9a40_4 *g_pGameRules;
extern st_4f9a40_2 *gpGlobals;
extern char gszallsentencenames;

int CheckSuitUpdate__11CBasePlayer(st_4f9a40_0 *a0)
{
    unsigned int idx;  // esi
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    int v4;  // ecx
    unsigned int *v5;  // eax
    unsigned int v6;  // edx
    unsigned short v0;  // [bp-0x24]

    idx = a0->field_7d0;
    if (a0->field_0->field_168 >= 0)
    {
        return v3;
    }
    else if (!g_pGameRules->field_44->field_18(g_pGameRules))
    {
        v2 = _INSERT(gpGlobals, 0, 0);
        if (*(float *)gpGlobals < a0->field_7bc)
            return v3;
        v3 = _INSERT(v2, 0, 0);
        if (0.0 >= a0->field_7bc)
            return v3;
        v4 = 0;
        v5 = &a0->field_7c0;
        v6 = v5[idx];
        if (!v6)
        {
            do
            {
                idx += 1;
                if (idx == 4)
                    idx = 0;
            } while ((v4 += 1, v4 <= 3 && (v6 = v5[idx], !v6)));
            if (!v6)
            {
                a0->field_7bc = 0;
                return v3;
            }
        }
        (&a0->field_7c0)[idx] = 0;
        if ((int)v6 > 0)
        {
            v0 = 33;
            sub_48c150(&v0, &(&gszallsentencenames)[16 * v6]);
            sub_48d8f0(a0->field_0->field_208, &v0);
        }
        else
        {
            sub_48db00(a0->field_0->field_208, -v6);
        }
        a0->field_7bc = (float)(3.5 + *(float *)gpGlobals);
        return v3;
    }
    else
    {
        return v3;
    }
}

