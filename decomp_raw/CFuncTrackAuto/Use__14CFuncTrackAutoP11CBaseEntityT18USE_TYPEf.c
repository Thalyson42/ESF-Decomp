// Use__14CFuncTrackAutoP11CBaseEntityT18USE_TYPEf @0xedbf0 size=371
typedef struct st_4edbf0_2 {
    char padding_0[240];
    struct st_4edbf0_0 *field_f0;
    struct st_4edbf0_0 *field_f4;
    char padding_f8[8];
    struct st_4edbf0_0 *field_100;
} st_4edbf0_2;

typedef struct st_4edbf0_4 {
    char padding_0[96];
    struct st_4edbf0_2 *field_60;
    char padding_64[28];
    struct st_4edbf0_4 *field_80;
    char padding_84[160];
    int field_124;
    int field_128;
    struct st_4edbf0_3 *field_12c;
    char padding_130[12];
    struct st_4edbf0_4 *field_13c;
    struct st_4edbf0_4 *field_140;
    unsigned int field_144;
} st_4edbf0_4;

typedef struct st_4edbf0_0 {
    unsigned int field_0;
} st_4edbf0_0;

typedef struct st_4edbf0_3 {
    char padding_0[100];
    unsigned int field_64;
} st_4edbf0_3;

typedef struct st_4edbf0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4edbf0_1;

extern st_4edbf0_1 *gpGlobals;

st_4edbf0_4 * Use__14CFuncTrackAutoP11CBaseEntityT18USE_TYPEf(st_4edbf0_4 *a0, st_4edbf0_0 **a1, unsigned int a2, int a3)
{
    st_4edbf0_4 *v0;  // eax
    unsigned int v1;  // edi
    st_4edbf0_4 *v2;  // eax
    st_4edbf0_4 *v3;  // edx
    st_4edbf0_4 *v4;  // eax
    unsigned int v6;  // edi
    st_4edbf0_4 *v7;  // edx

    v0 = a0;
    if (!v0->field_144)
        return v0;
    if (!v0->field_80)
    {
        v1 = v0->field_124;
    }
    else
    {
        v1 = 0;
        if (a0->field_80 == 0x1)
            v1 = a0->field_128;
    }
    if (!strcmp@GLIBC_2.0(*(int *)*a1 + gpGlobals->field_98, "func_tracktrain"))
    {
        v2 = CFuncTrackChange::EvaluateTrain(a0, v1);
        v3 = a0;
        v3->field_13c = v2;
        if (v2 != 0x2)
            return v2;
        v4 = v3->field_80;
        if (v4 == v3->field_140)
            return v4;
        v3->field_144 = 0;
        return (!v4 ? v3->field_60->field_f4(v3) : a0->field_60->field_f0(a0));
    }
    else
    {
        if (!v1)
            return a0->field_60->field_100(a0, a0->field_140);
        v6 = CPathTrack::GetNext(v1);
        if (v6)
        {
            v7 = a0;
            if (v7->field_12c->field_64 != v6 && CBaseEntity::ShouldToggle(v7, a3, v7->field_140))
            {
                if (!a0->field_140)
                    a0->field_140 = 0x1;
                else
                    a0->field_140 = NULL;
            }
        }
        return a0->field_60->field_100(a0, a0->field_140);
    }
}

