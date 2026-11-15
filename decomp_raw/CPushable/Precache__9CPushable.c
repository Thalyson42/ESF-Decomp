// Precache__9CPushable @0xc3430 size=95
typedef struct st_4c3430_0 {
    char padding_0[416];
    char field_1a0;
} st_4c3430_0;

typedef struct st_4c3430_1 {
    unsigned int field_0;
} st_4c3430_1;

extern unsigned int _9CPushable.m_soundNames[4];
extern st_4c3430_1 *g_engfuncs.pfnPrecacheSound;

st_4c3430_0 * Precache__9CPushable(st_4c3430_0 **a0)
{
    int i;  // esi
    st_4c3430_0 *v1;  // eax

    i = 0;
    do
    {
        g_engfuncs.pfnPrecacheSound(_9CPushable.m_soundNames[i]);
        i += 1;
    } while (i <= 2);
    v1 = *a0;
    if ((char)*a0->field_1a0 < 0)
        v1 = CBreakable::Precache(a0);
    return v1;
}

