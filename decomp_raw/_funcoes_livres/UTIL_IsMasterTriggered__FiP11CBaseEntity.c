// UTIL_IsMasterTriggered__FiP11CBaseEntity @0x133380 size=249
typedef struct st_533380_4 {
    char padding_0[124];
    struct st_533380_3 *field_7c;
} st_533380_4;

typedef struct st_533380_1 {
    unsigned int field_0;
} st_533380_1;

typedef struct st_533380_2 {
    char padding_0[28];
    struct st_533380_1 *field_1c;
    char padding_20[40];
    struct st_533380_1 *field_48;
} st_533380_2;

typedef struct st_533380_3 {
    char padding_0[96];
    struct st_533380_2 *field_60;
} st_533380_3;

typedef struct st_533380_0 {
    char padding_0[152];
    unsigned int field_98;
} st_533380_0;

extern st_533380_1 *g_6167f8;
extern st_533380_1 *g_6168b4;
extern st_533380_1 *g_6168d4;
extern st_533380_1 *g_6168d8;
extern st_533380_0 *gpGlobals;

unsigned int UTIL_IsMasterTriggered__FiP11CBaseEntity(unsigned int a0, unsigned int a1)
{
    st_533380_4 *v0;  // esi
    unsigned int v1;  // edi
    st_533380_4 *v2;  // eax
    st_533380_3 *v3;  // esi

    if (!a0)
        return 1;
    v0 = g_6167f8(0, "targetname", a0 + gpGlobals->field_98);
    v1 = 0;
    if (!v0 || !g_6168d8(v0))
        v1 = 1;
    if (!v1)
    {
        v2 = v0;
        if (v2 || (v2 = g_6168d4(0), v2))
            v3 = v2->field_7c;
        else
            v3 = NULL;
        if (v3 && (char)v3->field_60->field_1c(v3) < 0)
            return v3->field_60->field_48(v3, a1);
    }
    g_6168b4(1, "Master was null or not a master!\n");
    return 1;
}

