// PushEnemy__12CBaseMonsterP11CBaseEntityR6Vector @0xd5860 size=157
int PushEnemy__12CBaseMonsterP11CBaseEntityR6Vector(unsigned int a0, int a1, unsigned int *a2)
{
    int i;  // edi
    int v1;  // eax
    int v2;  // esi
    int v3;  // eax
    unsigned int *v4;  // edx
    unsigned int v5;  // eax

    if (!a1)
        return v1;
    for (i = 0; i <= 3; i += 1)
    {
        v2 = a0 + i * 8 + 280;
        v3 = EHANDLE::__opP11CBaseEntity(v2);
        if (v3 == a1)
            return v3;
        v1 = EHANDLE::__opi(v2);
        if (!v1)
        {
            EHANDLE::__as(a0 + i * 8 + 280, a1);
            v4 = a0 + i * 12;
            v4[78] = *a2;
            v4[79] = a2[1];
            v5 = a2[2];
            v4[80] = v5;
            return v5;
        }
    }
    return v1;
}

