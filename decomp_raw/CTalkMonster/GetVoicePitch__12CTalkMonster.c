// GetVoicePitch__12CTalkMonster @0x125ec0 size=59
typedef struct st_525ec0_1 {
    char padding_0[688];
    unsigned int field_2b0;
} st_525ec0_1;

typedef struct st_525ec0_0 {
    unsigned int field_0;
} st_525ec0_0;

extern st_525ec0_0 *g_engfuncs.pfnRandomLong;

int GetVoicePitch__12CTalkMonster(st_525ec0_1 *a0)
{
    unsigned int v0;  // eax

    v0 = g_engfuncs.pfnRandomLong(0, 3);
    return v0 + a0->field_2b0;
}

