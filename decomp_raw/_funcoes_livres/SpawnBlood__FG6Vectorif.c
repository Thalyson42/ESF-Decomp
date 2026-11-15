// SpawnBlood__FG6Vectorif @0x1373e0 size=81
extern int g_vecAttackDir;

int SpawnBlood__FG6Vectorif(int a0, int a1, float a2)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    v4 = __fnstcw();
    v3 = v4 | 0xc00;
    v2 = (int)a2;
    return UTIL_BloodDrips(a0, &g_vecAttackDir, a1, v2, v0, v1);
}

