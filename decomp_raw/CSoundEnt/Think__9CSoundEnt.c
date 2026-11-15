// Think__9CSoundEnt @0x11ee60 size=300
typedef struct st_51ee60_2 {
    char padding_0[108];
    unsigned int field_6c;
} st_51ee60_2;

typedef struct st_51ee60_1 {
    char padding_0[112];
    unsigned int field_70;
} st_51ee60_1;

typedef struct st_51ee60_0 {
    float field_0;
} st_51ee60_0;

typedef struct st_51ee60_3 {
    unsigned int field_0;
} st_51ee60_3;

extern st_51ee60_3 *g_engfuncs.pfnAlertMessage;
extern st_51ee60_0 *gpGlobals;

int * Think__9CSoundEnt(float a0)
{
    int *v6;  // eax
    int i;  // edx
    unsigned int v8;  // edi
    float *v9;  // ecx
    st_51ee60_1 *v11;  // edx
    unsigned int v12;  // eax
    st_51ee60_2 *v13;  // edx
    unsigned int v14;  // eax
    int *v15;  // eax
    unsigned int v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x5c]
    float *v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    int v4;  // [bp-0x18]

    *(float *)(*(int *)a0 + 260) = (float)(0.3 + *(float *)gpGlobals);
    v4 = -0x1;
    v6 = (int *)a0;
    i = v6[26];
    if (v6[26] != -0x1)
    {
        v3 = v6 + 0x22;
        v8 = *(unsigned int *)&a0 + 140;
        do
        {
            v9 = i * 32;
            v2 = gpGlobals;
            if ((isunordered(*(float *)((char *)v9 + v3), *v2) ? 0x44 : *(float *)((char *)v9 + v3) == *v2 ? 63 : *(float *)((char *)v9 + v3) < *v2 ? 0 : 0xff) < 64 && *(float *)((char *)v9 + v3) != -1.0f)
            {
                v6 = CSoundEnt::FreeSound(i, v4);
                i = *(int *)((char *)v9 + v8);
                continue;
            }
            v4 = i;
            v6 = i * 32;
            i = *(int *)((char *)v6 + v8);
        } while (i != -0x1);
    }
    v11 = (st_51ee60_1 *)a0;
    if (!v11->field_70)
        return v6;
    v12 = CSoundEnt::ISoundsInList(v11, 2);
    v13 = (st_51ee60_2 *)a0;
    v1 = v12 - v13->field_6c;
    v0 = CSoundEnt::ISoundsInList(v13, 1);
    v14 = CSoundEnt::ISoundsInList(a0, 2);
    g_engfuncs.pfnAlertMessage(2, "Soundlist: %d / %d  (%d)\n", v14);
    v15 = CSoundEnt::ISoundsInList(a0, 2);
    *(int **)(*(unsigned int *)&a0 + 108) = v15;
    return v15;
}

