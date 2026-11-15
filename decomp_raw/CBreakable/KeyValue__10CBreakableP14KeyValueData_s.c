// KeyValue__10CBreakableP14KeyValueData_s @0xc16a0 size=1170
typedef struct st_4c16a0_2 {
    struct st_4c16a0_1 *field_0;
    char padding_4[104];
    struct st_4c16a0_1 *field_6c;
    unsigned int field_70;
    char padding_74[8];
    struct st_4c16a0_1 *field_7c;
    unsigned int field_80;
} st_4c16a0_2;

typedef struct st_4c16a0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4c16a0_0;

typedef struct st_4c16a0_1 {
    char padding_0[388];
    unsigned int field_184;
} st_4c16a0_1;

typedef struct st_4c16a0_3 {
    char padding_0[152];
    struct st_4c16a0_1 *field_98;
} st_4c16a0_3;

typedef struct st_4c16a0_4 {
    unsigned int field_0;
} st_4c16a0_4;

extern unsigned int _10CBreakable.pSpawnObjects[4];
extern st_4c16a0_4 *g_engfuncs.pfnAllocString;
extern st_4c16a0_3 *gpGlobals;

st_4c16a0_1 * KeyValue__10CBreakableP14KeyValueData_s(st_4c16a0_2 *a0, st_4c16a0_0 *a1)
{
    st_4c16a0_1 *v0;  // eax
    st_4c16a0_1 *v1;  // ecx
    unsigned int v2;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "explosion"))
    {
        v0 = strcasecmp@GLIBC_2.0(a1->field_8, "directed");
        if (!v0)
        {
            a0->field_70 = 1;
        }
        else
        {
            v0 = strcasecmp@GLIBC_2.0(a1->field_8, "random");
            a0->field_70 = 0;
        }
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "material"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        if (v0 > 0x9)
            a0->field_6c = 0x1;
        else
            a0->field_6c = v0;
    }
    else
    {
        v0 = strcmp@GLIBC_2.0(a1->field_4, "deadmodel");
        if (v0)
        {
            v0 = strcmp@GLIBC_2.0(a1->field_4, "shards");
            if (v0)
            {
                if (!strcmp@GLIBC_2.0(a1->field_4, "gibmodel"))
                {
                    v0 = g_engfuncs.pfnAllocString(a1->field_8);
                    a0->field_7c = v0;
                }
                else if (!strcmp@GLIBC_2.0(a1->field_4, "spawnobject"))
                {
                    v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
                    v0 = (char *)v1 - 1;
                    if (v0 <= 0x14)
                    {
                        v0 = gpGlobals->field_98;
                        a0->field_80 = *(int *)((char *)&_10CBreakable.pSpawnObjects[0] + 0x4 * v1) - (char *)v0;
                    }
                }
                else if (!strcmp@GLIBC_2.0(a1->field_4, "explodemagnitude"))
                {
                    v2 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
                    v0 = a0->field_0;
                    v0->field_184 = v2;
                }
                else
                {
                    v0 = strcmp@GLIBC_2.0(a1->field_4, "lip");
                    if (v0)
                        return CBaseDelay::KeyValue(a0, a1);
                }
            }
        }
    }
    a1->field_c = 1;
    return v0;
}

