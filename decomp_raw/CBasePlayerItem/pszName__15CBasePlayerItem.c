// pszName__15CBasePlayerItem @0x1392c0 size=48
typedef struct st_5392c0_0 {
    char padding_0[136];
    unsigned int field_88;
} st_5392c0_0;

extern unsigned int g_62f738[4];

int pszName__15CBasePlayerItem(st_5392c0_0 *a0)
{
    return g_62f738[11 * a0->field_88];
}

