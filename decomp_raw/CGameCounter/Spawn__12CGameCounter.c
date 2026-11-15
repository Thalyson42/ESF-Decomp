// Spawn__12CGameCounter @0xd0900 size=89
int Spawn__12CGameCounter(float a0)
{
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)*(float *)(*(int *)a0 + 356);
    *(float *)(*(int *)a0 + 480) = (float)v0;
    return CRulePointEntity::Spawn(a0);
}

