// FindLandmark__12CChangeLevelPCc @0x12d940 size=234
typedef struct st_52d940_1 {
    char padding_0[152];
    unsigned int field_98;
} st_52d940_1;

typedef struct st_52d940_0 {
    unsigned int field_0;
} st_52d940_0;

extern st_52d940_0 *g_6167f8;
extern st_52d940_0 *g_6168b4;
extern st_52d940_0 *g_6168d8;
extern st_52d940_1 *gpGlobals;

unsigned int * FindLandmark__12CChangeLevelPCc(unsigned int a0)
{
    unsigned int v3;  // edi
    unsigned int *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    v2 = a0;
    v1 = "targetname";
    v0 = NULL;
    while (1)
    {
        v0 = g_6167f8(v0, v1, v2);
        v3 = 0;
        if (!v0 || !g_6168d8(v0))
            v3 = 1;
        if (v3)
        {
            g_6168b4(4, "Can't find landmark %s\n", a0);
            return NULL;
        }
        if (!sub_488af0(*(!v0 ? NULL : v0 + 32) + gpGlobals->field_98, "info_landmark"))
            return v0;
        v2 = a0;
        v1 = "targetname";
    }
}

