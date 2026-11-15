// FIdleHello__12CTalkMonster @0x126270 size=371
typedef struct st_526270_0 {
    unsigned int field_0;
} st_526270_0;

extern st_526270_0 *g_engfuncs.pfnRandomFloat;

unsigned int FIdleHello__12CTalkMonster(float idx)
{
    int v3;  // esi
    unsigned int v0;  // [bp-0x30]
    float v1;  // [bp-0x2c]

    if (!CTalkMonster::FOkToSpeak(idx) || *(char *)(*(unsigned int *)&idx + 680) & 8)
        return 0;
    v3 = CTalkMonster::FindNearestFriend(idx, 1);
    if (v3 && (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 280))(idx, v3) && (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 224))(idx, v3))
    {
        EHANDLE::__as(*(unsigned int *)&idx + 784, v3);
        if (*(char *)(*(int *)idx + 417) & 1)
        {
            v1 = 2.0f;
            v0 = 0x3f800000;
            g_engfuncs.pfnRandomFloat(3.0f, 3.5f);
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 728), 3.0f);
        }
        else
        {
            v1 = 2.0f;
            v0 = 0x3f800000;
            g_engfuncs.pfnRandomFloat(3.0f, 3.5f);
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 724), 3.0f);
        }
        *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) | 8;
        return 1;
    }
    return 0;
}

