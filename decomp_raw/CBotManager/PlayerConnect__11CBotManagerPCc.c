// PlayerConnect__11CBotManagerPCc @0x13f9d0 size=126
typedef struct st_53f9d0_0 {
    char padding_0[16];
    float field_10;
    char padding_14[6];
    short field_1a;
    char padding_1c[3368];
    char field_d44;
} st_53f9d0_0;

typedef struct st_53f9d0_1 {
    float field_0;
} st_53f9d0_1;

extern st_53f9d0_1 *gpGlobals;

char * PlayerConnect__11CBotManagerPCc(st_53f9d0_0 *a0, char *a1)
{
    char *v1;  // eax
    unsigned int v2;  // ecx
    st_53f9d0_0 *v11;  // ecx
    char *v3;  // edi
    unsigned int v4;  // cc_op
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    char *v7;  // esi
    char *v8;  // edi
    unsigned int v9;  // 4101
    st_53f9d0_0 *v10;  // eax
    int v0;  // [bp-0x28]

    a0->field_d44 = a0->field_d44 + 1;
    v1 = "127.0.0.1";
    v2 = 10;
    v3 = "127.0.0.1";
    v4 = 13;
    v5 = 0;
    v6 = 0;
    do
    {
        v7 = a1;
        v8 = v3;
        if (!v2)
            break;
        v2 -= 1;
        v4 = 4;
        v5 = *v7;
        v6 = *v8;
        v3 = v8 + 1;
        a1 = v7 + 1;
    } while (*v7 == *v8);
    v9 = _ccall(4, v4, v5, v6, 0);
    if (!(v9 & 1))
    {
        v10 = a0;
        v10->field_10 = (float)(*(float *)gpGlobals + 30.0);
        v1 = v10->field_1a;
        if (v10->field_d44 > v1)
        {
            v11 = a0;
            if (v11->field_1a != -0x1)
            {
                *(unsigned short *)&v0 = 0;
                v1 = CBotManager::KickLastBot(v11, v0);
            }
        }
    }
    return v1;
}

