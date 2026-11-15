// ManagerThink__13CMultiManager @0x12b570 size=301
typedef struct st_52b570_2 {
    struct st_52b570_1 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[176];
    char field_d4;
    char padding_d5[47];
    int field_104;
    int field_108;
    unsigned int field_10c;
    char padding_110[64];
    unsigned int field_150;
} st_52b570_2;

typedef struct st_52b570_1 {
    char padding_0[260];
    unsigned int field_104;
    char padding_108[152];
    int field_1a0;
} st_52b570_1;

typedef struct st_52b570_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_52b570_0;

extern char ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf;
extern st_52b570_0 *gpGlobals;

unsigned int * ManagerThink__13CMultiManager(float a0)
{
    st_52b570_2 *v5;  // esi
    int v6;  // eax
    unsigned int *v7;  // eax
    unsigned int v8;  // eax
    st_52b570_2 *v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    float i;  // [bp-0x8]

    v5 = (st_52b570_2 *)a0;
    i = gpGlobals->field_0 - *(float *)&v5->field_10c;
    if (v5->field_108 < v5->field_104)
    {
        if (i >= *(float *)&(&v5->field_150)[v5->field_108])
        {
            v5 = v5;
            do
            {
                v2 = 0;
                v1 = 3;
                v0 = v5;
                v6 = EHANDLE::__opP11CBaseEntity(&v5->field_d4);
                FireTargets(*(int *)&v5->padding_110[4 * v5->field_108] + gpGlobals->field_98, v6);
                v5->field_108 = v5->field_108 + 1;
                if (v5->field_108 >= v5->field_104)
                    goto LABEL_52b63b;
            } while (i >= *(float *)&(&v5->field_150)[v5->field_108]);
        }
        if (v5->field_108 < v5->field_104)
        {
            v7 = v5->field_0;
            *(float *)&v7[65] = *(float *)&v5->field_10c + *(float *)&(&v5->field_150)[v5->field_108];
            return v7;
        }
    }
LABEL_52b63b:
    v5->field_c = 0;
    v5->field_10 = 0;
    if (v5->field_0->field_1a0 >= 0)
    {
        v8 = _INSERT(v5->field_0, 0, 0);
        v5->field_1c = v8 | 0xffff0000;
        v5->field_20 = &ManagerUse__13CMultiManagerP11CBaseEntityT18USE_TYPEf;
        return v8 | 0xffff0000;
    }
    return UTIL_Remove(v5);
}

