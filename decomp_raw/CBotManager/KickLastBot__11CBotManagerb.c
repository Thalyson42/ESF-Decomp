// KickLastBot__11CBotManagerb @0x13f3f0 size=294
typedef struct st_53f3f0_2 {
    char padding_0[164];
    struct st_53f3f0_3 *field_a4;
} st_53f3f0_2;

typedef struct st_53f3f0_4 {
    struct st_53f3f0_1 *field_0;
    char padding_4[92];
    struct st_53f3f0_2 *field_60;
    char padding_64[2468];
    char field_a08;
} st_53f3f0_4;

typedef struct st_53f3f0_5 {
    char padding_0[3364];
    char field_d24;
} st_53f3f0_5;

typedef struct st_53f3f0_3 {
    unsigned int field_0;
} st_53f3f0_3;

typedef struct st_53f3f0_1 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[42];
    unsigned int field_1d0;
} st_53f3f0_1;

typedef struct st_53f3f0_6 {
    char padding_0[20];
    struct st_53f3f0_3 *field_14;
} st_53f3f0_6;

typedef struct st_53f3f0_0 {
    char padding_0[144];
    char field_90;
    char padding_91[7];
    unsigned int field_98;
} st_53f3f0_0;

extern st_53f3f0_3 *g_engfuncs.pfnServerCommand;
extern st_53f3f0_0 *gpGlobals;
extern char cout;
extern st_53f3f0_6 *cout+512;

st_53f3f0_5 * KickLastBot__11CBotManagerb(st_53f3f0_5 *a0, char a1)
{
    st_53f3f0_4 *v6;  // esi
    char v7;  // al
    unsigned int v8;  // cc_op
    unsigned int v9;  // cc_dep1
    unsigned int v10;  // 4105
    unsigned int v11;  // 4112
    st_53f3f0_5 *v12;  // eax
    int v0;  // [bp-0x78]
    int v1;  // [bp-0x74]
    char v2;  // [bp-0x46]
    char v3;  // [bp-0x45]
    char v4;  // [bp-0x45]
    char v5;  // [bp-0x44]

    v3 = gpGlobals->field_90;
    if (gpGlobals->field_90)
    {
        do
        {
            v6 = UTIL_PlayerByIndex(v3);
            *(unsigned short *)&v1 = 0;
            *(unsigned short *)&v0 = 0;
            v7 = UTIL_IsValidPlayer(v6, v0, v1);
            v8 = 13;
            v9 = v7;
            if (!v7)
                continue;
            v2 = 0;
            if (!v6->field_60->field_a4(v6))
                v2 = (v6->field_0->field_1a5 & 32) != 0;
            v8 = 4;
            v9 = v2;
            if (v2 && (v8 = 15, v9 = v6, v9))
            {
                v6->field_a08 = 1;
                sprintf@GLIBC_2.0(&v5, "kick \"%s\"\n", v6->field_0->field_1d0 + gpGlobals->field_98);
                g_engfuncs.pfnServerCommand(&v5);
                break;
            }
            v4 = v3 - 1;
            v10 = _ccall(v8, v9, 0, 0);
            v11 = _ccall(4, 19, v3 - 1, 0, v10);
            v3 = v4;
        } while (!(v11 & 1));
    }
    v12 = a0;
    v12->field_d24 = 0;
    memset(&v12->padding_0[20], 0, 5);
    if (a1)
        v12 = cout+512->field_14(&cout, "Last bot kicked\n");
    return v12;
}

