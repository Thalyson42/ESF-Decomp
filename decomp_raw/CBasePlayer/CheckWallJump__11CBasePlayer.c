// CheckWallJump__11CBasePlayer @0xf6a40 size=254
unsigned int CheckWallJump__11CBasePlayer(float idx)
{
    unsigned int *v4;  // eax
    unsigned int *v5;  // eax
    unsigned int v6;  // eax
    unsigned int *v7;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v4 = *(int *)idx;
    if (v4[66] == 3 || v4[66] == 14)
    {
        v4 = *(int *)idx;
        if (v4[147])
        {
            if (v4[147] && *(int *)(*(unsigned int *)&idx + 936))
            {
                v4[147] = 0;
                return v4;
            }
            if (!*(int *)(*(unsigned int *)&idx + 1732))
            {
                *(unsigned int *)(*(unsigned int *)&idx + 1732) = 1;
                v5 = *(int *)idx;
                *(float *)&v0 = *(float *)&v5[162];
                *(float *)&v1 = *(float *)&v5[163];
                *(float *)&v2 = *(float *)&v5[164];
                v6 = CBasePlayer::EnableWallJump(idx, &v0);
                if (!*(int *)(*(unsigned int *)&idx + 1732))
                    return v6;
            }
            v7 = *(int *)idx;
            if (v7[147])
                return v7;
            *(unsigned int *)(*(unsigned int *)&idx + 1732) = 0;
            if (!*(int *)(*(unsigned int *)&idx + 1736))
                return v7;
            return CBasePlayer::DisableWallJump(idx);
        }
    }
    if (*(int *)(*(unsigned int *)&idx + 1732))
        *(unsigned int *)(*(unsigned int *)&idx + 1732) = 0;
    if (*(int *)(*(unsigned int *)&idx + 1736))
        CBasePlayer::DisableWallJump(idx);
    return v4;
}

