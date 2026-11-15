// GetWallJumpAnim__11CBasePlayerPcT1 @0xf6960 size=220
char * GetWallJumpAnim__11CBasePlayerPcT1(unsigned int a0, char *a1, void* iter)
{
    char *v0;  // edx
    unsigned int v1;  // ecx
    void* i;  // esi
    unsigned int v11;  // ecx
    char *v12;  // eax
    unsigned int v13;  // ecx
    unsigned int v14;  // cc_op
    unsigned int v15;  // cc_dep1
    unsigned int v16;  // cc_dep2
    char *v17;  // esi
    char *v18;  // esi
    char *v19;  // edi
    char *v2;  // edi
    unsigned int v20;  // 4101
    void* v21;  // ecx
    char *v22;  // eax
    unsigned int v23;  // ecx
    unsigned int v24;  // cc_op
    unsigned int v25;  // cc_dep1
    unsigned int v26;  // cc_dep2
    char *v27;  // esi
    char *v28;  // edi
    unsigned int v29;  // 4101
    unsigned int v3;  // cc_op
    void* j;  // esi
    unsigned int v31;  // ecx
    void* v32;  // edi
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    char *v6;  // esi
    char *v7;  // esi
    char *v8;  // edi
    unsigned int v9;  // 4101

    v0 = a1;
    v1 = 0x11;
    v2 = "grabwall_forward";
    v3 = 13;
    v4 = 0;
    v5 = 0;
    v6 = v0;
    do
    {
        v7 = v6;
        v8 = v2;
        if (!v1)
            break;
        v1 -= 1;
        v3 = 4;
        v4 = *v7;
        v5 = *v8;
        v2 = v8 + 1;
        v6 = v7 + 1;
    } while (*v7 == *v8);
    v9 = _ccall(4, v3, v4, v5, 0);
    if (v9 & 1)
    {
        i = "walljump_forward";
        for (v11 = 4; v11; i += 4)
        {
            v11 -= 1;
            *(int *)iter = *(int *)i;
            iter += 4;
        }
        *(char *)iter = *(char *)i;
        return "grabwall_forward";
    }
    else
    {
        v12 = "grabwall_left";
        v13 = 14;
        v14 = 13;
        v15 = 0;
        v16 = 0;
        v17 = v0;
        do
        {
            v18 = v17;
            v19 = v12;
            if (!v13)
                break;
            v13 -= 1;
            v14 = 4;
            v15 = *v18;
            v16 = *v19;
            v12 = v19 + 1;
            v17 = v18 + 1;
        } while (*v18 == *v19);
        v20 = _ccall(4, v14, v15, v16, 0);
        if (v20 & 1)
        {
            v21 = iter;
            *(unsigned int *)v21 = 1819042167;
            *(unsigned int *)&v21[4] = 1886221674;
            *(unsigned int *)&v21[8] = 1717922911;
            *(unsigned short *)&v21[12] = 116;
            return 0x66650074;
        }
        v22 = "grabwall_right";
        v23 = 15;
        v24 = 13;
        v25 = 0;
        v26 = 0;
        do
        {
            v27 = v0;
            v28 = v22;
            if (!v23)
                break;
            v23 -= 1;
            v24 = 4;
            v25 = *v27;
            v26 = *v28;
            v22 = v28 + 1;
            v0 = v27 + 1;
        } while (*v27 == *v28);
        v29 = _ccall(4, v24, v25, v26, 0);
        if (!(v29 & 1))
        {
            v32 = iter;
            *(unsigned int *)v32 = 1819042167;
            *(unsigned int *)&v32[4] = 1886221674;
            *(unsigned int *)&v32[8] = 1667326559;
            *(unsigned short *)&v32[12] = 107;
            return 0x6361006b;
        }
        j = "walljump_right";
        for (v31 = 3; v31; j += 4)
        {
            v31 -= 1;
            *(int *)iter = *(int *)j;
            iter += 4;
        }
        *(short *)iter = *(short *)j;
        *(char *)&iter[2] = (char)j[2];
        return "grabwall_right";
    }
}

