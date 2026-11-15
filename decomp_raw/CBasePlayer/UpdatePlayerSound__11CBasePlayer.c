// UpdatePlayerSound__11CBasePlayer @0xf9d90 size=593
typedef struct st_4f9d90_1 {
    struct st_4f9d90_0 *field_0;
    char padding_4[684];
    int field_2b0;
    int field_2b4;
    unsigned int field_2b8;
    int field_2bc;
    float field_2c0;
    char padding_2c4[1620];
    unsigned int field_918;
} st_4f9d90_1;

typedef struct st_4f9d90_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[340];
    char field_180;
    char padding_181[36];
    char field_1a5;
    char padding_1a6[98];
    int field_208;
} st_4f9d90_0;

typedef struct st_4f9d90_2 {
    unsigned int field_0;
    float field_4;
} st_4f9d90_2;

typedef struct st_4f9d90_3 {
    unsigned int field_0;
} st_4f9d90_3;

extern st_4f9d90_3 *g_engfuncs.pfnAlertMessage;
extern st_4f9d90_2 *gpGlobals;

double UpdatePlayerSound__11CBasePlayer(st_4f9d90_1 *a0)
{
    void* v4;  // esi
    double v5;  // mm7
    st_4f9d90_0 *v6;  // edx
    double v7;  // mm7
    double v8;  // mm6
    int v9;  // edx
    unsigned int v10;  // ecx
    st_4f9d90_0 *v11;  // edx
    double v12;  // mm7
    unsigned int v0;  // [bp-0x2c], Other Possible Types: int
    unsigned short v1;  // [bp-0x28]
    unsigned short v2;  // [bp-0x26]
    float v3;  // [bp-0x18]

    v4 = CSoundEnt::SoundPointerForIndex(CSoundEnt::ClientSoundIndex(a0->field_0->field_208));
    if (!v4)
    {
        g_engfuncs.pfnAlertMessage(1, "Client lost reserved sound!\n");
        return v5;
    }
    *(unsigned int *)&v4[12] = 0;
    v6 = a0->field_0;
    if (v6->field_1a5 & 2)
    {
        v7 = *(float *)&v6->field_20 * *(float *)&v6->field_20 + *(float *)&v6->field_24 * *(float *)&v6->field_24 + *(float *)&v6->field_28 * *(float *)&v6->field_28;
        v8 = sqrt(v7);
        if (isnan(v8))
            sqrt(*(unsigned int *)&v7);
        else
            v7 = v8;
        v3 = (float)v7;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)v3;
        v9 = v0;
        if (v9 > 0x200)
            v9 = 0x200;
    }
    else
    {
        v9 = 0;
    }
    if (a0->field_0->field_180 & 2)
        v9 += 100;
    if (a0->field_2b4 > v9)
    {
        a0->field_2b0 = a0->field_2b4;
        *(char *)&v4[12] = (char)v4[12] | 1;
    }
    else
    {
        a0->field_2b0 = v9;
    }
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)((double)a0->field_2b4 - gpGlobals->field_4 * 250.0);
    a0->field_2b4 = v0;
    v10 = (int)v4[16];
    if (a0->field_2b0 > (int)v10)
    {
        v10 = a0->field_2b0;
    }
    else if ((int)v10 > a0->field_2b0)
    {
        v0 = v10;
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)((double)(int)v0 - gpGlobals->field_4 * 250.0);
        v10 = v0;
        if ((int)v10 < a0->field_2b0)
            v10 = 0;
    }
    if (a0->field_918)
        v10 = 0;
    if (*(float *)&gpGlobals->field_0 > a0->field_2c0)
        a0->field_2b8 = 0;
    if (v4)
    {
        v11 = a0->field_0;
        *(unsigned int *)v4 = v11->field_8;
        *(unsigned int *)&v4[4] = v11->field_c;
        *(unsigned int *)&v4[8] = v11->field_10;
        *(unsigned int *)&v4[12] = (int)v4[12] | 4 | a0->field_2b8;
        *(unsigned int *)&v4[16] = v10;
    }
    v12 = (double)a0->field_2bc - gpGlobals->field_4 * 256.0;
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)v12;
    a0->field_2bc = v0;
    if (v0 >= NULL)
        return v12;
    a0->field_2bc = 0;
    return v12;
}

