// SpawnDragonBalls__30CHalfLifeCaptureTheDragonBalls @0x9b670 size=674
typedef struct st_49b670_2 {
    char padding_0[136];
    float field_88;
} st_49b670_2;

typedef struct st_49b670_6 {
    char padding_0[32];
    unsigned int field_20;
} st_49b670_6;

typedef struct st_49b670_5 {
    struct st_49b670_4 *field_0;
} st_49b670_5;

typedef struct st_49b670_4 {
    char padding_0[520];
    unsigned int field_208;
} st_49b670_4;

typedef struct st_49b670_3 {
    char padding_0[612];
    unsigned int field_264;
    unsigned int field_268;
    char padding_26c[12];
    char field_278;
    char padding_279[31];
    unsigned int field_298;
} st_49b670_3;

typedef struct st_49b670_0 {
    unsigned int field_0;
} st_49b670_0;

extern unsigned int gmsgDragonBallEnt;
extern st_49b670_0 *g_6167f8;
extern st_49b670_0 *g_616878;
extern st_49b670_0 *g_61687c;
extern st_49b670_0 *g_616880;
extern st_49b670_0 *g_616888;
extern st_49b670_0 *g_6168b4;
extern st_49b670_0 *g_6168d8;
extern st_49b670_0 *g_6168dc;
extern st_49b670_0 *g_616928;

st_49b670_3 * SpawnDragonBalls__30CHalfLifeCaptureTheDragonBalls(st_49b670_3 *a0)
{
    unsigned int v10;  // esi
    int idx;  // edi
    unsigned int v12;  // ecx
    unsigned int l;  // esi
    int v14;  // eax
    int j;  // edi
    unsigned int v16;  // esi
    unsigned int *v17;  // edx
    st_49b670_3 *v18;  // eax
    st_49b670_5 **v19;  // edi
    unsigned int v0;  // [bp-0x21c]
    st_49b670_6 *v1;  // [bp-0x1f0]
    int k;  // [bp-0x1ec]
    int index;  // [bp-0x1e8]
    float v4;  // [bp-0x1e4]
    float v5;  // [bp-0x1e0]
    float v6;  // [bp-0x1dc]
    char v7;  // [bp-0x1c4]
    char v8;  // [bp-0x1a8]
    st_49b670_2 *i;  // [bp-0x1a4]

    index = 0;
    for (i = g_6167f8(0, "classname", "item_dragonball"); index <= 99; (&i)[index] = g_6167f8(*(int *)&(&v8)[4 * index], "classname", "item_dragonball"))
    {
        v10 = 0;
        if (!(&i)[index] || !g_6168d8((&i)[index]))
            v10 = 1;
        if (v10)
            break;
        index += 1;
    }
    if (index <= 6)
    {
        g_6168b4(1, "not enough dragonballs in this map\n");
        a0->field_298 = 1;
        return a0;
    }
    idx = 0;
    do
    {
        do
        {
            v12 = g_616928(0, index - 1);
            l = 1;
            v14 = 0;
            if (0 < idx)
            {
                do
                {
                    if (*(int *)&(&v7)[4 * v14] == v12)
                        l = 0;
                } while ((v14 += 1, v14 < idx));
            }
        } while (!l);
    } while ((*(unsigned int *)&(&v7)[4 * idx] = v12, idx += 1, idx <= 6));
    j = 0;
    do
    {
        v16 = j * 4;
        v17 = &(&i)[*(int *)&(&v7)[v16]]->field_88;
        v4 = (&i)[*(int *)&(&v7)[v16]]->field_88;
        v5 = *(float *)&v17[1];
        v6 = *(float *)&v17[2];
        j += 1;
        v18 = sub_48bf60(&v4, j);
        *(st_49b670_3 **)&(&a0->field_278)[v16] = v18;
        if (!v18)
            return v18;
    } while (j <= 6);
    if (a0->field_268)
    {
        a0->field_268 = 0;
        k = 0;
        v1 = &a0->field_278;
        do
        {
            g_616878(2, gmsgDragonBallEnt, 0, 0);
            g_616880(k);
            v19 = k * 4;
            v0 = g_6168dc(*(int *)(*(int *)*(int *)(v19 + v1) + 520));
            g_616888(v0);
            g_61687c(v0);
            sub_48a5c0(*(int *)(v19 + v1));
            k += 1;
        } while (k <= 6);
    }
    a0->field_264 = 1;
    return a0;
}

