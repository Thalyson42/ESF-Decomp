// Use__12CEnvBeverageP11CBaseEntityT18USE_TYPEf @0xb6a30 size=193
typedef struct st_4b6a30_2 {
    char padding_0[272];
    unsigned int field_110;
} st_4b6a30_2;

typedef struct st_4b6a30_0 {
    char padding_0[8];
    char field_8;
    char padding_9[71];
    char field_50;
    char padding_51[191];
    unsigned int field_110;
    char padding_114[76];
    unsigned int field_160;
    unsigned int field_164;
    char padding_168[160];
    unsigned int field_208;
} st_4b6a30_0;

typedef struct st_4b6a30_1 {
    char padding_0[8];
    char field_8;
    char padding_9[71];
    char field_50;
    char padding_51[191];
    unsigned int field_110;
    char padding_114[76];
    float field_160;
    float field_164;
    char padding_168[160];
    int field_208;
} st_4b6a30_1;

typedef struct st_4b6a30_3 {
    unsigned int field_0;
} st_4b6a30_3;

extern st_4b6a30_3 *g_engfuncs.pfnRandomLong;

st_4b6a30_0 * Use__12CEnvBeverageP11CBaseEntityT18USE_TYPEf(st_4b6a30_1 **a0)
{
    st_4b6a30_1 *v0;  // edx
    st_4b6a30_2 **v1;  // esi
    unsigned int v2;  // eax
    st_4b6a30_2 *v3;  // eax
    st_4b6a30_1 *v4;  // eax

    v0 = *a0;
    if (v0->field_164 != 0.0)
    {
        return v4;
    }
    else if (0.0 < v0->field_160)
    {
        v1 = CBaseEntity::Create("item_sodacan", &v0->field_8, &v0->field_50, v0->field_208);
        if (*a0->field_110 == 6)
        {
            v2 = g_engfuncs.pfnRandomLong(0, 5);
            v3 = *v1;
        }
        else
        {
            v3 = *v1;
            v2 = *a0->field_110;
        }
        v3->field_110 = v2;
        *a0->field_164 = 1.0;
        v4 = *a0;
        v4->field_160 = (float)(v4->field_160 - 1.0);
        return v4;
    }
    else
    {
        return v4;
    }
}

