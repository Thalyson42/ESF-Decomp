// PlayLockSounds__FP9entvars_sP10locksoundsii @0xaac90 size=645
typedef struct st_4aac90_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    int field_10;
    int field_14;
    float field_18;
    float field_1c;
    char field_20;
    char field_21;
} st_4aac90_1;

typedef struct st_4aac90_2 {
    char padding_0[520];
    unsigned int field_208;
} st_4aac90_2;

typedef struct st_4aac90_0 {
    unsigned int field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4aac90_0;

extern st_4aac90_0 *gpGlobals;

unsigned int * PlayLockSounds__FP9entvars_sP10locksoundsii(st_4aac90_2 *a0, st_4aac90_1 *a1, unsigned int a2, unsigned int a3)
{
    unsigned int v3;  // edx
    unsigned int v4;  // edi
    st_4aac90_1 *v13;  // ecx
    unsigned int v14;  // edi
    unsigned int v15;  // eax
    st_4aac90_1 *v5;  // ecx
    st_4aac90_1 *v6;  // ecx
    int v7;  // edi
    int v8;  // eax
    st_4aac90_1 *v9;  // ecx
    unsigned int v10;  // edx
    unsigned int v11;  // edi
    st_4aac90_1 *v12;  // ecx
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    float v2;  // [bp-0x8]

    v2 = (float)(!a3 ? 3.0 : 0.5);
    if (a2)
    {
        v3 = 0;
        if (a1->field_0 && *(float *)&gpGlobals->field_0 > a1->field_18)
            v3 = 1;
        v4 = 0;
        v5 = a1;
        if (v5->field_4 && !v5->field_20 && *(float *)&gpGlobals->field_0 > v5->field_1c)
            v4 = 1;
        if (v3)
        {
            v1 = a0->field_208;
            EMIT_SOUND_DYN(v1, 3, a1->field_0 + gpGlobals->field_98, 0, 0.800000011920929f, 0, 100);
            a1->field_18 = v2 + *(float *)&gpGlobals->field_0;
        }
        if (!v4)
            return gpGlobals;
        v6 = a1;
        v7 = v6->field_10;
        v8 = SENTENCEG_PlaySequentialSz(a0->field_208, v6->field_4 + gpGlobals->field_98, 0.8500000238418579f, 0.800000011920929f, 0, 100, v7, 0);
        v9 = a1;
        v9->field_10 = v8;
        v9->field_14 = 0;
        v9->field_20 = v7 == v8;
    }
    else
    {
        v10 = 0;
        if (a1->field_8 && *(float *)&gpGlobals->field_0 > a1->field_18)
            v10 = 1;
        v11 = 0;
        v12 = a1;
        if (v12->field_c && !v12->field_21 && *(float *)&gpGlobals->field_0 > v12->field_1c)
            v11 = 1;
        if (v10)
        {
            v0 = a0->field_208;
            EMIT_SOUND_DYN(v0, 3, a1->field_8 + gpGlobals->field_98, 0, 0.800000011920929f, 0, 100);
            a1->field_18 = v2 + *(float *)&gpGlobals->field_0;
        }
        if (!v11)
            return gpGlobals;
        v13 = a1;
        v14 = v13->field_14;
        v15 = SENTENCEG_PlaySequentialSz(a0->field_208, v13->field_c + gpGlobals->field_98, 0.8500000238418579f, 0.800000011920929f, 0, 100, v14, 0);
        v9 = a1;
        v9->field_14 = v15;
        v9->field_10 = 0;
        v9->field_21 = v14 == v15;
    }
    v9->field_1c = (float)(*(float *)&gpGlobals->field_0 + 6.0);
    return gpGlobals;
}

