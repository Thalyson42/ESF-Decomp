// DeadEnd__15CFuncTrackTrain @0xebca0 size=362
typedef struct st_4ebca0_1 {
    struct st_4ebca0_0 *field_0;
    char padding_4[160];
    float field_a4;
} st_4ebca0_1;

typedef struct st_4ebca0_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_4ebca0_0;

typedef struct st_4ebca0_5 {
    char padding_0[464];
    unsigned int field_1d0;
} st_4ebca0_5;

typedef struct st_4ebca0_4 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[48];
    unsigned int field_5c;
    unsigned int field_60;
    unsigned int field_64;
} st_4ebca0_4;

typedef struct st_4ebca0_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4ebca0_2;

typedef struct st_4ebca0_3 {
    unsigned int field_0;
} st_4ebca0_3;

extern unsigned int g_vecZero;
extern unsigned int g_616790;
extern unsigned int g_616794;
extern st_4ebca0_3 *g_6168b4;
extern st_4ebca0_2 *gpGlobals;

int DeadEnd__15CFuncTrackTrain(float a0)
{
    st_4ebca0_5 **v2;  // esi
    st_4ebca0_1 *v3;  // edi
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    st_4ebca0_4 **v6;  // edi
    unsigned int *v7;  // edx
    unsigned int *v8;  // edx
    unsigned int v0;  // [bp-0x24]

    v2 = *(int *)(*(unsigned int *)&a0 + 100);
    v3 = (st_4ebca0_1 *)a0;
    g_6168b4(2, "TRAIN(%s): Dead end ", v3->field_0->field_1cc + gpGlobals->field_98);
    if (v2)
    {
        if (0.0 > v3->field_a4)
        {
            while (1)
            {
                v0 = 1;
                v4 = sub_48a830(v2, sub_487d40(v2));
                if (!v4)
                    break;
                v2 = v4;
            }
        }
        else
        {
            while (1)
            {
                v0 = 1;
                v5 = sub_48a830(v2, sub_48d550(v2));
                if (!v5)
                    break;
                v2 = v5;
            }
        }
    }
    v6 = (st_4ebca0_4 **)a0;
    v7 = *v6;
    v7[8] = g_vecZero;
    v7[9] = g_616790;
    v7[10] = g_616794;
    v8 = *v6;
    v8[23] = g_vecZero;
    v8[24] = g_616790;
    v8[25] = g_616794;
    if (!v2)
        return g_6168b4(2, "\n");
    g_6168b4(2, "at %s\n", *(int *)&*v2->padding_0[460] + gpGlobals->field_98);
    if (!*v2->field_1d0)
        return *v2;
    return sub_48c1b0(*v2->field_1d0 + gpGlobals->field_98, a0, a0, 3, 0);
}

