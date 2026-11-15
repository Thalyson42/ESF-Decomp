// FindPlayerByName__FPCc @0x18bd60 size=161
typedef struct st_58bd60_5 {
    char padding_0[124];
    struct st_58bd60_4 *field_7c;
} st_58bd60_5;

typedef struct st_58bd60_3 {
    char padding_0[160];
    struct st_58bd60_1 *field_a0;
} st_58bd60_3;

typedef struct st_58bd60_1 {
    unsigned int field_0;
} st_58bd60_1;

typedef struct st_58bd60_2 {
    char padding_0[464];
    unsigned int field_1d0;
} st_58bd60_2;

typedef struct st_58bd60_4 {
    struct st_58bd60_2 *field_0;
    char padding_4[92];
    struct st_58bd60_3 *field_60;
} st_58bd60_4;

typedef struct st_58bd60_0 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_58bd60_0;

extern st_58bd60_1 *g_engfuncs.pfnPEntityOfEntIndex;
extern st_58bd60_0 *gpGlobals;

st_58bd60_4 * FindPlayerByName__FPCc(int a0)
{
    int iter;  // edi
    st_58bd60_5 *v1;  // eax
    st_58bd60_4 *v2;  // esi

    iter = 1;
    while (iter <= gpGlobals->field_90)
    {
        v1 = g_engfuncs.pfnPEntityOfEntIndex(iter);
        if (v1)
        {
            v2 = v1->field_7c;
            if (!v2)
            {
                iter += 1;
            }
            else if (v2->field_60->field_a0(v2))
            {
                if (!strcasecmp@GLIBC_2.0(v2->field_0->field_1d0 + gpGlobals->field_98, a0))
                    return v2;
                iter += 1;
            }
            else
            {
                iter += 1;
            }
        }
        else
        {
            iter += 1;
        }
    }
    return NULL;
}

