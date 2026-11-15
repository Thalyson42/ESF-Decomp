// Spawn__11CBasePlayer @0xfae80 size=1906
typedef struct st_4fae80_2 {
    char padding_0[72];
    struct st_4fae80_1 *field_48;
    char padding_4c[12];
    struct st_4fae80_1 *field_58;
} st_4fae80_2;

typedef struct st_4fae80_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4fae80_0;

typedef struct st_4fae80_1 {
    unsigned int field_0;
} st_4fae80_1;

typedef struct st_4fae80_3 {
    char padding_0[68];
    struct st_4fae80_2 *field_44;
} st_4fae80_3;

extern float spawn_invulnerable_time+12;
extern st_4fae80_3 *g_pGameRules;
extern st_4fae80_1 *g_engfuncs.pfnAlertMessage;
extern st_4fae80_1 *g_engfuncs.pfnSetClientMaxspeed;
extern st_4fae80_1 *g_engfuncs.pfnSetPhysicsKeyValue;
extern st_4fae80_0 *gpGlobals;

int Spawn__11CBasePlayer(float idx)
{
    unsigned int *v12;  // eax
    int v13;  // esi
    unsigned int v14;  // eax
    int index;  // ecx
    unsigned int *v16;  // edx
    unsigned int *v17;  // esi
    unsigned int v18;  // eax
    unsigned int *v19;  // edx
    char v0;  // [bp-0x29]
    int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    float v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x1c]
    float v8;  // [bp-0x18]
    float v9;  // [bp-0x14]
    float v10;  // [bp-0x10]

    *(char **)*(int *)idx = -1 * gpGlobals->field_98 + 0x5a4bfd;
    *(float *)(*(int *)idx + 352) = 100.0f;
    *(unsigned int *)(*(int *)idx + 444) = 0;
    *(float *)(*(int *)idx + 364) = 2.0f;
    *(unsigned int *)(*(int *)idx + 268) = 3;
    *(unsigned int *)(*(int *)idx + 264) = 3;
    *(float *)(*(int *)idx + 432) = *(float *)(*(int *)idx + 352);
    *(unsigned int *)(*(int *)idx + 420) = *(int *)(*(int *)idx + 420) & 0x100000;
    *(char *)(*(int *)idx + 420) = *(char *)(*(int *)idx + 420) | 8;
    *(float *)(*(int *)idx + 508) = (float)(gpGlobals->field_0 + 12.0);
    *(float *)(*(int *)idx + 480) = 2.0f;
    *(unsigned int *)(*(int *)idx + 280) = 0;
    *(unsigned int *)(*(int *)idx + 368) = 0;
    *(unsigned int *)(*(int *)idx + 472) = 0;
    *(unsigned int *)(*(int *)idx + 476) = 0;
    *(unsigned int *)(*(int *)idx + 288) = 0x3f800000;
    *(unsigned int *)(*(int *)idx + 284) = 0x3f800000;
    *(unsigned int *)(*(unsigned int *)&idx + 2296) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 616) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 784) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2332) = 0;
    g_engfuncs.pfnSetPhysicsKeyValue(*(int *)(*(int *)idx + 520), "slj", "0");
    g_engfuncs.pfnSetPhysicsKeyValue(*(int *)(*(int *)idx + 520), "hl", "1");
    v12 = *(int *)idx;
    *(unsigned int *)(*(unsigned int *)&idx + 2360) = 0;
    v12[133] = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2364) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 2456) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1964) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2268) = 0;
    *(float *)(*(unsigned int *)&idx + 360) = 0.5f;
    *(unsigned int *)(*(unsigned int *)&idx + 632) = 247;
    UTIL_WeaponTimeBase();
    *(float *)(*(unsigned int *)&idx + 612) = 0.5f;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 124))(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 732) = 0;
    *(char *)(*(unsigned int *)&idx + 2352) = *(char *)(*(unsigned int *)&idx + 2352) & 246;
    if (!*(int *)(*(unsigned int *)&idx + 1892))
    {
        v13 = __builtin_new(8);
        v0 = 1;
        v0 = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 1892) = __10CBaseClassP11CBasePlayer(v13, idx);
        if (v0)
            __builtin_delete(v13);
        (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 44))(*(int *)(*(unsigned int *)&idx + 1892));
        *(float *)(*(unsigned int *)&idx + 880) = 0.5f;
        CBasePlayer::SetPowerLevel(idx, 0);
        CBasePlayer::SetMaxPowerLevel(idx, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 588) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 1868) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 1940) = 0;
        CBaseClass::SetModel(*(int *)(*(unsigned int *)&idx + 1892));
    }
    v14 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 52))(*(int *)(*(unsigned int *)&idx + 1892));
    *(unsigned int *)(*(int *)idx + 524) = v14;
    if ((*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 52))(*(int *)(*(unsigned int *)&idx + 1892)))
    {
        *(float *)(*(unsigned int *)&idx + 1852) = gpGlobals->field_0 + spawn_invulnerable_time+12;
        *(unsigned int *)(*(unsigned int *)&idx + 844) = 1;
        *(unsigned int *)(*(unsigned int *)&idx + 848) = 1;
        *(unsigned int *)(*(int *)idx + 348) = 11;
        *(float *)(*(int *)idx + 332) = 255.0f;
        *(unsigned int *)(*(int *)idx + 328) = 2;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 844) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 848) = 0;
        *(unsigned int *)(*(int *)idx + 328) = 0;
        *(unsigned int *)(*(int *)idx + 348) = 0;
    }
    *(unsigned int *)(*(unsigned int *)&idx + 800) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 804) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1876) = 0x3f800000;
    *(unsigned int *)(*(unsigned int *)&idx + 812) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 820) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 824) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 828) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 840) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 852) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 856) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 860) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1924) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1832) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1900) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1884) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1848) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 864) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 876) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 868) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 872) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 888) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 892) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1728) = 0;
    index = 0;
    do
    {
        v16 = *(unsigned int *)&idx + index * 12;
        v2 = 0;
        v4 = 0;
        v7 = 0;
        v16[425] = v2;
        v16[426] = v4;
        v16[427] = v7;
        *(float *)(*(unsigned int *)&idx + 1424 + index * 4) = -1.0f;
        index += 1;
    } while (index <= 1);
    *(unsigned int *)(*(unsigned int *)&idx + 1724) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1408) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1432) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1436) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1412) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1416) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1696) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1736) = 0;
    v17 = *(unsigned int *)&idx + 896;
    CPlayerMelee::Reset(v17);
    CPlayerMelee::SetAttacker(v17, idx);
    CSwoop::Reset(*(unsigned int *)&idx + 1284);
    *(float *)(*(unsigned int *)&idx + 1404) = idx;
    *(unsigned int *)(*(unsigned int *)&idx + 1744) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1828) = 0;
    memset@GLIBC_2.0(*(unsigned int *)&idx + 1748, 0, 80);
    *(char *)(*(int *)idx + 280) = *(char *)(*(int *)idx + 280) & 127;
    *(unsigned int *)(*(unsigned int *)&idx + 1912) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 1916) = 0;
    EHANDLE::__as(*(unsigned int *)&idx + 1928, 0);
    g_pGameRules->field_44->field_58(g_pGameRules, idx);
    v18 = CBaseAnimating::LookupActivity(idx, 1);
    *(unsigned int *)(*(int *)idx + 296) = v18;
    v3 = 4.0f;
    v5 = 4.0f;
    v6 = 9.0f;
    v8 = -4.0f;
    v9 = -4.0f;
    v10 = -9.0f;
    UTIL_SetSize(*(int *)idx, &v8, &v3);
    v19 = *(int *)idx;
    v2 = 0;
    v4 = 0;
    v6 = 7.0f;
    v19[93] = v2;
    v19[94] = v4;
    *(float *)&v19[95] = v6;
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
    v2 = 0;
    v5 = 32.0f;
    v7 = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 660) = v2;
    *(float *)(*(unsigned int *)&idx + 664) = v5;
    *(unsigned int *)(*(unsigned int *)&idx + 668) = v7;
    if (*(int *)(*(unsigned int *)&idx + 684) == 0xffffffff)
        g_engfuncs.pfnAlertMessage(1, "Couldn't alloc player sound slot!\n");
    *(unsigned int *)(*(unsigned int *)&idx + 2328) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2416) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2300) = 1;
    *(unsigned int *)(*(unsigned int *)&idx + 2356) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 2312) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2412) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2348) = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 1856) = 0;
    v1 = CBasePlayer::GetMaxSpeed(idx);
    g_engfuncs.pfnSetClientMaxspeed(*(int *)(*(int *)idx + 520), (float)v1);
    *(unsigned int *)(*(unsigned int *)&idx + 2448) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 2444) = 0;
    *(float *)(*(unsigned int *)&idx + 2524) = gpGlobals->field_0;
    return g_pGameRules->field_44->field_48(g_pGameRules, idx);
}

