// IAllocSound__9CSoundEnt @0x11f020 size=105
typedef struct st_51f020_0 {
    unsigned int field_0;
} st_51f020_0;

extern st_51f020_0 *g_engfuncs.pfnAlertMessage;

unsigned int IAllocSound__9CSoundEnt(unsigned int *a0)
{
    unsigned int v0;  // esi
    unsigned int *v1;  // ecx
    unsigned int v2;  // edx

    if (a0[25] == 0xffffffff)
    {
        g_engfuncs.pfnAlertMessage(1, "Free Sound List is full!\n");
        return 0xffffffff;
    }
    v0 = a0[25];
    v1 = v0 * 32;
    v2 = a0 + 35;
    a0[25] = *(int *)((char *)v1 + v2);
    *(unsigned int *)((char *)v1 + v2) = a0[26];
    a0[26] = v0;
    return v0;
}

