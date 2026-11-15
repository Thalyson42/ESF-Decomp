// UTIL_SetPlayerModel__FP11CBasePlayerPCc @0x1347d0 size=180
typedef struct st_5347d0_0 {
    char padding_0[180];
    unsigned int field_b4;
    unsigned int field_b8;
} st_5347d0_0;

typedef struct st_5347d0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_5347d0_2;

typedef struct st_5347d0_1 {
    unsigned int field_0;
} st_5347d0_1;

extern st_5347d0_1 *g_engfuncs.pfnModelIndex;
extern st_5347d0_2 *gpGlobals;

int UTIL_SetPlayerModel__FP11CBasePlayerPCc(st_5347d0_0 **a0, char *a1)
{
    char *v2;  // esi
    unsigned int v3;  // ecx
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int v4;  // cc_op
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    char *v7;  // edi
    char *v8;  // esi
    char *v9;  // edi
    unsigned int v10;  // 4101
    int v11;  // eax
    char *v0;  // [bp-0xa4]
    char v1;  // [bp-0x84]

    if (!a0)
        return v13;
    v2 = "player";
    v3 = 7;
    v4 = 13;
    v5 = 0;
    v6 = 0;
    v7 = a1;
    do
    {
        v8 = v2;
        v9 = v7;
        if (!v3)
            break;
        v3 -= 1;
        v4 = 4;
        v5 = *v8;
        v6 = *v9;
        v7 = v9 + 1;
        v2 = v8 + 1;
    } while (*v8 == *v9);
    v10 = _ccall(4, v4, v5, v6, 0);
    if (!(v10 & 1))
    {
        v0 = a1;
        v11 = "models/player/%s/%s.mdl";
    }
    else
    {
        v0 = a1;
        v11 = "models/%s.mdl";
    }
    sprintf@GLIBC_2.0(&v1, v11);
    v12 = g_engfuncs.pfnModelIndex(&v1);
    *a0->field_b4 = v12;
    *a0->field_b8 = &(&v1)[-1 * gpGlobals->field_98];
    return strcpy@GLIBC_2.0(a0 + 360, a1);
}

