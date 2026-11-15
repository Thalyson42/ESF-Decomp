// Spectator_FindNextPlayer__11CBasePlayerb @0xefd80 size=484
typedef struct st_4efd80_4 {
    char padding_0[464];
    unsigned int field_1d0;
} st_4efd80_4;

typedef struct st_4efd80_3 {
    char padding_0[520];
    unsigned int field_208;
} st_4efd80_3;

typedef struct st_4efd80_0 {
    char padding_0[280];
    char field_118;
    char padding_119[239];
    unsigned int field_208;
    char padding_20c[56];
    unsigned int field_244;
    unsigned int field_248;
} st_4efd80_0;

typedef struct st_4efd80_2 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_4efd80_2;

typedef struct st_4efd80_1 {
    unsigned int field_0;
} st_4efd80_1;

extern st_4efd80_1 *g_6168b4;
extern st_4efd80_1 *g_6168dc;
extern st_4efd80_2 *gpGlobals;

int Spectator_FindNextPlayer__11CBasePlayerb(st_4efd80_0 **a0, char a1)
{
    unsigned int v1;  // esi
    st_4efd80_0 *v2;  // eax
    int v3;  // edi
    int i;  // esi
    st_4efd80_0 **v5;  // eax
    unsigned int v6;  // edi
    st_4efd80_3 **v7;  // eax
    unsigned int v8;  // eax
    unsigned int *v9;  // eax
    st_4efd80_4 **v10;  // eax
    unsigned int v0;  // [bp-0x8]

    v1 = a0 + 482;
    v2 = (!sub_48d8b0(v1) ? *a0 : *(int *)sub_489fd0(v1));
    v3 = g_6168dc(v2->field_208);
    sub_48d960(a0 + 482, 0);
    v0 = 1;
    i = v3;
    if (a1)
    {
        v0 = 0xffffffff;
        i = v3;
    }
    do
    {
        i += v0;
        if (i > gpGlobals->field_90)
            i = 1;
        if (i <= 0)
            i = gpGlobals->field_90;
        v5 = sub_48a500(i);
        if (v5 && v5 != a0 && !*v5->field_244 && *v5->field_118 >= 0)
        {
            sub_48d960(a0 + 482, v5);
            break;
        }
    } while (i != v3);
    v6 = a0 + 482;
    if (!sub_48d8b0(v6))
        return g_6168b4(1, "No observer targets.\n");
    v7 = sub_489fd0(v6);
    v8 = g_6168dc(*v7->field_208);
    *a0->field_248 = v8;
    v9 = sub_489fd0(v6);
    sub_48db50(*a0, *v9 + 8);
    v10 = sub_489fd0(v6);
    return g_6168b4(1, "Now Tracking %s\n", *v10->field_1d0 + gpGlobals->field_98);
}

