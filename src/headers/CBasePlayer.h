// CBasePlayer.h -- reconstruído automaticamente (vtable + offsets). REVISAR.
#pragma once

class CBasePlayer : public CBaseMonster {  // base: SDK
public:
    virtual void Spawn();  // vtable[0] Spawn__11CBasePlayer
    virtual void Precache();  // vtable[1] Precache__11CBasePlayer
    virtual void Save();  // vtable[3] Save__11CBasePlayerR5CSave
    virtual void Restore();  // vtable[4] Restore__11CBasePlayerR8CRestore
    virtual void ObjectCaps();  // vtable[5] ObjectCaps__11CBasePlayer
    virtual void Classify();  // vtable[8] Classify__11CBasePlayer
    virtual void TraceAttack();  // vtable[10] TraceAttack__11CBasePlayerP9entvars_sfG6VectorP11TraceResulti
    virtual void TakeDamage();  // vtable[11] TakeDamage__11CBasePlayerP9entvars_sT1fi
    virtual void TakeHealth();  // vtable[12] TakeHealth__11CBasePlayerfi
    virtual void Killed();  // vtable[13] Killed__11CBasePlayerP9entvars_si
    virtual void AddPoints();  // vtable[20] AddPoints__11CBasePlayerii
    virtual void AddPointsToTeam();  // vtable[21] AddPointsToTeam__11CBasePlayerii
    virtual void AddPlayerItem();  // vtable[22] AddPlayerItem__11CBasePlayerP15CBasePlayerItem
    virtual void RemovePlayerItem();  // vtable[23] RemovePlayerItem__11CBasePlayerP15CBasePlayerItem
    virtual void StartSneaking();  // vtable[29] StartSneaking__11CBasePlayer
    virtual void StopSneaking();  // vtable[30] StopSneaking__11CBasePlayer
    virtual void IsSneaking();  // vtable[32] IsSneaking__11CBasePlayer
    virtual void IsAlive();  // vtable[33] IsAlive__11CBasePlayer
    virtual void IsPlayer();  // vtable[38] IsPlayer__11CBasePlayer
    virtual void IsNetClient();  // vtable[39] IsNetClient__11CBasePlayer
    virtual void TeamID();  // vtable[40] TeamID__11CBasePlayer
    virtual void FBecomeProne();  // vtable[48] FBecomeProne__11CBasePlayer
    virtual void BodyTarget();  // vtable[52] BodyTarget__11CBasePlayerRC6Vector
    virtual void Illumination();  // vtable[53] Illumination__11CBasePlayer
    virtual void ShouldFadeOnDeath();  // vtable[59] ShouldFadeOnDeath__11CBasePlayer
    virtual void BarnacleVictimBitten();  // vtable[110] BarnacleVictimBitten__11CBasePlayerP9entvars_s
    virtual void BarnacleVictimReleased();  // vtable[111] BarnacleVictimReleased__11CBasePlayer
    virtual void GetGunPosition();  // vtable[118] GetGunPosition__11CBasePlayer
    virtual void DeathSound();  // vtable[119] DeathSound__11CBasePlayer
    virtual void Jump();  // vtable[124] Jump__11CBasePlayer
    virtual void PreThink();  // vtable[125] PreThink__11CBasePlayer
    virtual void PostThink();  // vtable[126] PostThink__11CBasePlayer
    virtual void UpdateClientData();  // vtable[127] UpdateClientData__11CBasePlayer
    virtual void ImpulseCommands();  // vtable[128] ImpulseCommands__11CBasePlayer
    virtual void 0();  // vtable[129] 0
    // campos observados (offset em bytes a partir de `this`; inclui os herdados)
    int f_00c;  // +0xc (12)
    int f_010;  // +0x10 (16)
    int f_060;  // +0x60 (96)
    int f_078;  // +0x78 (120)
    void* f_084;  // +0x84 (132)
    float f_168;  // +0x168 (360)
    int f_174;  // +0x174 (372)
    int f_178;  // +0x178 (376)
    int f_17c;  // +0x17c (380)
    char f_1a5;  // +0x1a5 (421)
    int f_24c;  // +0x24c (588)
    float f_264;  // +0x264 (612)
    int f_268;  // +0x268 (616)
    char f_269;  // +0x269 (617)
    char f_26a;  // +0x26a (618)
    char f_270;  // +0x270 (624)
    int f_278;  // +0x278 (632)
    int f_294;  // +0x294 (660)
    float f_298;  // +0x298 (664)
    int f_29c;  // +0x29c (668)
    int f_2ac;  // +0x2ac (684)
    int f_2b0;  // +0x2b0 (688)
    int f_2b4;  // +0x2b4 (692)
    int f_2b8;  // +0x2b8 (696)
    int f_2bc;  // +0x2bc (700)
    float f_2c0;  // +0x2c0 (704)
    int f_2c4;  // +0x2c4 (708)
    char f_2c8;  // +0x2c8 (712)
    char f_2c9;  // +0x2c9 (713)
    char f_2cc;  // +0x2cc (716)
    float f_2dc;  // +0x2dc (732)
    int f_308;  // +0x308 (776)
    char f_310;  // +0x310 (784)
    float f_318;  // +0x318 (792)
    float f_31c;  // +0x31c (796)
    int f_320;  // +0x320 (800)
    int f_324;  // +0x324 (804)
    int f_328;  // +0x328 (808)
    int f_32c;  // +0x32c (812)
    int f_330;  // +0x330 (816)
    int f_334;  // +0x334 (820)
    int f_338;  // +0x338 (824)
    int f_33c;  // +0x33c (828)
    int f_340;  // +0x340 (832)
    int f_344;  // +0x344 (836)
    int f_348;  // +0x348 (840)
    int f_34c;  // +0x34c (844)
    int f_350;  // +0x350 (848)
    int f_354;  // +0x354 (852)
    int f_358;  // +0x358 (856)
    int f_35c;  // +0x35c (860)
    int f_360;  // +0x360 (864)
    int f_364;  // +0x364 (868)
    int f_368;  // +0x368 (872)
    int f_36c;  // +0x36c (876)
    float f_370;  // +0x370 (880)
    int f_374;  // +0x374 (884)
    int f_378;  // +0x378 (888)
    int f_37c;  // +0x37c (892)
    char f_380;  // +0x380 (896)
    int f_3a0;  // +0x3a0 (928)
    int f_3a8;  // +0x3a8 (936)
    float f_3cc;  // +0x3cc (972)
    float f_3d0;  // +0x3d0 (976)
    float f_3d4;  // +0x3d4 (980)
    int f_3e8;  // +0x3e8 (1000)
    int f_400;  // +0x400 (1024)
    int f_478;  // +0x478 (1144)
    int f_49c;  // +0x49c (1180)
    void* f_4a8;  // +0x4a8 (1192)
    void* f_4ac;  // +0x4ac (1196)
    int f_4b8;  // +0x4b8 (1208)
    int f_4bc;  // +0x4bc (1212)
    int f_4c4;  // +0x4c4 (1220)
    char f_504;  // +0x504 (1284)
    int f_508;  // +0x508 (1288)
    int f_50c;  // +0x50c (1292)
    float f_57c;  // +0x57c (1404)
    int f_580;  // +0x580 (1408)
    int f_584;  // +0x584 (1412)
    int f_588;  // +0x588 (1416)
    float f_58c;  // +0x58c (1420)
    float f_598;  // +0x598 (1432)
    float f_59c;  // +0x59c (1436)
    int f_6a0;  // +0x6a0 (1696)
    int f_6bc;  // +0x6bc (1724)
    int f_6c0;  // +0x6c0 (1728)
    int f_6c4;  // +0x6c4 (1732)
    int f_6c8;  // +0x6c8 (1736)
    int f_6cc;  // +0x6cc (1740)
    int f_6d0;  // +0x6d0 (1744)
    int f_6d4;  // +0x6d4 (1748)
    int f_6d8;  // +0x6d8 (1752)
    int f_6dc;  // +0x6dc (1756)
    int f_6e0;  // +0x6e0 (1760)
    float f_724;  // +0x724 (1828)
    int f_728;  // +0x728 (1832)
    float f_72c;  // +0x72c (1836)
    int f_730;  // +0x730 (1840)
    float f_734;  // +0x734 (1844)
    int f_738;  // +0x738 (1848)
    float f_73c;  // +0x73c (1852)
    int f_740;  // +0x740 (1856)
    int f_744;  // +0x744 (1860)
    int f_748;  // +0x748 (1864)
    int f_74c;  // +0x74c (1868)
    int f_750;  // +0x750 (1872)
    float f_754;  // +0x754 (1876)
    int f_75c;  // +0x75c (1884)
    int f_764;  // +0x764 (1892)
    int f_768;  // +0x768 (1896)
    int f_76c;  // +0x76c (1900)
    int f_770;  // +0x770 (1904)
    float f_774;  // +0x774 (1908)
    int f_778;  // +0x778 (1912)
    int f_77c;  // +0x77c (1916)
    int f_780;  // +0x780 (1920)
    int f_784;  // +0x784 (1924)
    char f_788;  // +0x788 (1928)
    float f_790;  // +0x790 (1936)
    int f_794;  // +0x794 (1940)
    int f_798;  // +0x798 (1944)
    int f_7a0;  // +0x7a0 (1952)
    int f_7a4;  // +0x7a4 (1956)
    int f_7a8;  // +0x7a8 (1960)
    int f_7ac;  // +0x7ac (1964)
    float f_7bc;  // +0x7bc (1980)
    int f_7c0;  // +0x7c0 (1984)
    int f_7d0;  // +0x7d0 (2000)
    int f_7d4;  // +0x7d4 (2004)
    int f_8d4;  // +0x8d4 (2260)
    float f_8d8;  // +0x8d8 (2264)
    int f_8dc;  // +0x8dc (2268)
    int f_8f0;  // +0x8f0 (2288)
    int f_8f4;  // +0x8f4 (2292)
    int f_8f8;  // +0x8f8 (2296)
    int f_8fc;  // +0x8fc (2300)
    int f_900;  // +0x900 (2304)
    char f_904;  // +0x904 (2308)
    int f_908;  // +0x908 (2312)
    char f_90c;  // +0x90c (2316)
    float f_914;  // +0x914 (2324)
    int f_918;  // +0x918 (2328)
    int f_91c;  // +0x91c (2332)
    float f_920;  // +0x920 (2336)
    int f_928;  // +0x928 (2344)
    int f_92c;  // +0x92c (2348)
    char f_930;  // +0x930 (2352)
    int f_934;  // +0x934 (2356)
    int f_938;  // +0x938 (2360)
    int f_93c;  // +0x93c (2364)
    char f_940;  // +0x940 (2368)
    int f_968;  // +0x968 (2408)
    int f_96c;  // +0x96c (2412)
    int f_970;  // +0x970 (2416)
    int f_984;  // +0x984 (2436)
    int f_988;  // +0x988 (2440)
    int f_98c;  // +0x98c (2444)
    int f_990;  // +0x990 (2448)
    int f_994;  // +0x994 (2452)
    float f_998;  // +0x998 (2456)
    char f_99c;  // +0x99c (2460)
    float f_9dc;  // +0x9dc (2524)
    void* f_a04;  // +0xa04 (2564)
    void* f_d50;  // +0xd50 (3408)
};
