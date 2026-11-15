// ItemPostFrame__17CBasePlayerWeapon @0x1383d0 size=558
typedef struct st_5383d0_0 {
    float field_0;
} st_5383d0_0;

extern st_5383d0_0 *gpGlobals;
extern unsigned int g_62f730[4];

unsigned int ItemPostFrame__17CBasePlayerWeapon(float idx)
{
    int v2;  // eax
    unsigned int *v3;  // eax
    unsigned int v4;  // eax
    int v5;  // eax
    unsigned int *v6;  // eax
    unsigned int *v7;  // eax
    unsigned int v8;  // eax
    float v0;  // [bp-0x2c]

    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 385) & 8 && (v2 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx), sub_48b190(*(float *)(*(unsigned int *)&idx + 160), *(float *)gpGlobals, (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx))))
    {
        if (g_62f730[11 * *(int *)(*(unsigned int *)&idx + 0x88)])
            *(unsigned int *)(*(unsigned int *)&idx + 144) = 1;
        v3 = *(int *)(*(unsigned int *)&idx + 128);
        if (v3[217] || v3[203] || v3[0xcc] || v3[476] || v3[223] || v3[286])
            goto LABEL_538587;
        v0 = idx;
        v4 = *(int *)(*(int *)(*(unsigned int *)&idx + 96) + 324);
        goto LABEL_538594;
    }
    else
    {
        if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 384) & 1 && !(v5 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx), !sub_48b190(*(float *)(*(unsigned int *)&idx + 156), *(float *)gpGlobals, (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 340))(idx))))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 144) = 1;
            v6 = *(int *)(*(unsigned int *)&idx + 128);
            if (!v6[217] && !v6[203] && !v6[0xcc] && (!v6[476] || v6[213]) && !(v7 = *(int *)(*(unsigned int *)&idx + 128), v7[223] || v7[322] || v7[286]))
            {
                v0 = idx;
                v4 = *(int *)(*(int *)(*(unsigned int *)&idx + 96) + 320);
            }
            else
            {
LABEL_538587:
                v0 = idx;
                v4 = *(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328);
            }
LABEL_538594:
            v4(v0);
        }
        else if (!(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 384) & 2049))
        {
            *(unsigned int *)(*(unsigned int *)&idx + 144) = 0;
            return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(idx);
        }
        v8 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 336))(idx);
        if (!v8)
            return v8;
        return (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(idx);
    }
}

