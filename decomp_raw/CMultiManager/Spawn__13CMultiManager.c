// Spawn__13CMultiManager @0x12b3f0 size=241
typedef struct st_52b3f0_1 {
    struct st_52b3f0_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[224];
    int field_104;
} st_52b3f0_1;

typedef struct st_52b3f0_0 {
    char padding_0[268];
    unsigned int field_10c;
} st_52b3f0_0;

extern char ManagerThink__13CMultiManager;
extern char ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf;

st_52b3f0_1 * Spawn__13CMultiManager(st_52b3f0_1 *a0)
{
    st_52b3f0_0 *v4;  // eax
    unsigned int v6;  // eax
    st_52b3f0_1 *v7;  // ecx
    st_52b3f0_1 *v9;  // eax
    unsigned int v10;  // edi
    float *v11;  // esi
    float *v12;  // ecx
    float v13;  // 128
    unsigned int i;  // [bp-0x10]
    float v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    v4 = a0->field_0;
    v4->field_10c = 0;
    v6 = _INSERT(v4, 0, 0) | 0xffff0000;
    v7 = a0;
    v7->field_1c = v6;
    v7->field_20 = &ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf;
    v7->field_c = _INSERT(v6, 0, 0) | 0xffff0000;
    v7->field_10 = &ManagerThink__13CMultiManager;
    do
    {
        i = 0;
        v3 = 1;
        v9 = a0;
        if ((int)v3 < v9->field_104)
        {
            v10 = &v9[1].padding_24[36];
            v2 = &v9[1].padding_4[4];
            do
            {
                v11 = v3 * 4;
                v12 = v3 * 4 - 4;
                v13 = *(float *)((char *)v11 + v10);
                if (v13 < *(float *)((char *)v12 + v10))
                {
                    *(int *)&v1 = *(int *)((char *)v11 + v2);
                    *(int *)((char *)v11 + v2) = *(int *)((char *)v12 + v2);
                    *(float *)((char *)v11 + v10) = *(float *)((char *)v12 + v10);
                    *(float *)((char *)v12 + v2) = v1;
                    *(float *)((char *)v12 + v10) = v13;
                    i = 1;
                }
            } while ((v3 += 1, (int)v3 < a0->field_104));
        }
    } while (i);
    return v9;
}

