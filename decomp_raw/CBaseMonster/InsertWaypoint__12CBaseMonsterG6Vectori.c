// InsertWaypoint__12CBaseMonsterG6Vectori @0xd62d0 size=170
unsigned int InsertWaypoint__12CBaseMonsterG6Vectori(unsigned int *a0, unsigned int *a1, unsigned int a2)
{
    int i;  // ecx
    unsigned int *v2;  // eax
    unsigned int *v3;  // edx
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = a0[104 + 4 * a0[134]] & 0xfffffe7f | a2;
    i = 7;
    do
    {
        v2 = &a0[4 * i];
        v2[101] = v2[97];
        v2[0x66] = v2[98];
        v2[103] = v2[99];
        v2[104] = v2[100];
        i -= 1;
    } while (i > 0);
    v3 = &a0[4 * a0[134]];
    v3[101] = *a1;
    v3[0x66] = a1[1];
    v3[103] = a1[2];
    v4 = a0[134];
    a0[104 + 4 * v4] = v0;
    return v4 * 16;
}

