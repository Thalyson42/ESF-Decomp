// Holster__12CKameTorpedoi @0xca8a0 size=139
int Holster__12CKameTorpedoi(int *a0, int a1)
{
    int i;  // esi
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    CKameTorpedo::UpdateTorpedoList(a0);
    i = 0;
    if (0 < a0[125])
    {
        do
        {
            v0 = 0;
            v1 = 0;
            v2 = 1000.0f;
            CKameTorpedoAttack::Fire(a0[117 + i], &v0, 0);
            i += 1;
        } while (i < a0[125]);
    }
    return CChargedAttack::Holster(a0, a1);
}

