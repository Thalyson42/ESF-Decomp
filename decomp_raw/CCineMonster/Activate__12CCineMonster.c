// Activate__12CCineMonster @0x115c70 size=631
typedef struct st_515c70_4 {
    char padding_0[124];
    struct st_515c70_3 *field_7c;
} st_515c70_4;

typedef struct st_515c70_1 {
    unsigned int field_0;
} st_515c70_1;

typedef struct st_515c70_5 {
    char padding_0[520];
    unsigned int field_208;
} st_515c70_5;

typedef struct st_515c70_2 {
    char padding_0[76];
    struct st_515c70_1 *field_4c;
} st_515c70_2;

typedef struct st_515c70_3 {
    char padding_0[96];
    struct st_515c70_2 *field_60;
} st_515c70_3;

typedef struct st_515c70_0 {
    char padding_0[152];
    unsigned int field_98;
} st_515c70_0;

extern st_515c70_1 *g_engfuncs.pfnFindEntityByString;
extern st_515c70_1 *g_engfuncs.pfnPEntityOfEntOffset;
extern st_515c70_1 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_515c70_1 *g_engfuncs.pfnGetModelPtr;
extern st_515c70_0 *gpGlobals;

st_515c70_4 * Activate__12CCineMonster(unsigned int *a0)
{
    st_515c70_4 *i;  // eax
    unsigned int v5;  // edi
    st_515c70_4 *v6;  // eax
    st_515c70_3 *v7;  // edx
    st_515c70_4 *v8;  // eax
    unsigned int v9;  // edi
    st_515c70_4 *v10;  // eax
    st_515c70_3 *v11;  // edx
    st_515c70_4 *v12;  // edi
    st_515c70_4 *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    st_515c70_5 **v3;  // [bp-0x8]

    i = g_engfuncs.pfnFindEntityByString(0, "targetname", a0[172] + gpGlobals->field_98);
    for (v3 = NULL; !v3; i = g_engfuncs.pfnFindEntityByString(i, "targetname", a0[172] + gpGlobals->field_98))
    {
        v5 = 0;
        if (!i || !g_engfuncs.pfnEntOffsetOfPEntity(i))
            v5 = 1;
        if (!v5)
        {
            if (*(char *)((!i ? 0 : i + 1) + 420) & 32)
            {
                v6 = i;
                if (v6 || (v6 = g_engfuncs.pfnPEntityOfEntOffset(0), v6))
                    v7 = v6->field_7c;
                else
                    v7 = NULL;
                v3 = (!v7 ? NULL : v7->field_60->field_4c(v7));
            }
        }
        else if (!v3)
        {
            v2 = a0[172] + gpGlobals->field_98;
            v1 = "classname";
            v0 = NULL;
            while (1)
            {
                v8 = g_engfuncs.pfnFindEntityByString(v0, v1, v2);
                v0 = v8;
                if (v3)
                    break;
                v9 = 0;
                if (!v0 || (v8 = g_engfuncs.pfnEntOffsetOfPEntity(v0), !v8))
                    v9 = 1;
                if (!v9)
                {
                    v10 = v0;
                    if (v10 || (v10 = g_engfuncs.pfnPEntityOfEntOffset(0), v10))
                        v11 = v10->field_7c;
                    else
                        v11 = NULL;
                    v3 = (!v11 ? NULL : v11->field_60->field_4c(v11));
                    v2 = a0[172] + gpGlobals->field_98;
                    v1 = "targetname";
                }
                else
                {
                    if (!v3)
                        return v8;
                    break;
                }
            }
        }
    }
    v12 = g_engfuncs.pfnGetModelPtr(*v3->field_208);
    if (!v12)
        return v12;
    SequencePrecache(v12, a0[0xaa] + gpGlobals->field_98);
    return SequencePrecache(v12, a0[171] + gpGlobals->field_98);
}

