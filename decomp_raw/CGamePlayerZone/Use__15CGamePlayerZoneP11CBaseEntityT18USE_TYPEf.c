// Use__15CGamePlayerZoneP11CBaseEntityT18USE_TYPEf @0xd0650 size=377
typedef struct st_4d0650_2 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_4d0650_2;

typedef struct st_4d0650_0 {
    char padding_0[520];
    int field_208;
} st_4d0650_0;

typedef struct st_4d0650_1 {
    struct st_4d0650_0 *field_0;
    char padding_4[100];
    unsigned int field_68;
    unsigned int field_6c;
    unsigned int field_70;
    unsigned int field_74;
} st_4d0650_1;

extern st_4d0650_2 *gpGlobals;

unsigned int * Use__15CGamePlayerZoneP11CBaseEntityT18USE_TYPEf(st_4d0650_1 *a0, int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int *v9;  // eax
    unsigned int *v10;  // esi
    st_4d0650_2 *v11;  // edx
    unsigned int v12;  // eax
    unsigned int *v0;  // [bp-0x88]
    int v1;  // [bp-0x84]
    unsigned int v2;  // [bp-0x80]
    unsigned int v3;  // [bp-0x7c]
    int iter;  // [bp-0x54]
    int v5;  // [bp-0x50]
    int v6;  // [bp-0x4c]
    char v7;  // [bp-0x44]
    unsigned int v8;  // [bp-0x40]

    v6 = 0;
    v5 = 0;
    v9 = CRuleEntity::CanFireForActivator(a0, a1);
    if (v9)
    {
        iter = 1;
        while (1)
        {
            v9 = gpGlobals;
            if (iter > gpGlobals->field_90)
                break;
            v10 = UTIL_PlayerByIndex(iter);
            if (v10)
            {
                UTIL_TraceModel(*v10 + 8, *v10 + 8, 1, a0->field_0->field_208, &v7);
                if (v8)
                {
                    v6 += 1;
                    if (a0->field_68)
                    {
                        v3 = a4;
                        v2 = a3;
                        v1 = a1;
                        v0 = v10;
                        v11 = gpGlobals;
                        v12 = a0->field_68;
                    }
                    else
                    {
                        iter += 1;
                        continue;
                    }
                }
                else
                {
                    v5 += 1;
                    if (a0->field_6c)
                    {
                        v3 = a4;
                        v2 = a3;
                        v1 = a1;
                        v0 = v10;
                        v11 = gpGlobals;
                        v12 = a0->field_6c;
                    }
                    else
                    {
                        iter += 1;
                        continue;
                    }
                }
                FireTargets(v12 + v11->field_98);
                iter += 1;
            }
            else
            {
                iter += 1;
            }
        }
        if (a0->field_70)
            v9 = FireTargets(a0->field_70 + gpGlobals->field_98, a1, a0, 2, (float)v6);
        if (a0->field_74)
            v9 = FireTargets(a0->field_74 + gpGlobals->field_98, a1, a0, 2, (float)v5);
    }
    return v9;
}

