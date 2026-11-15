// RunAI__12CBaseMonster @0xdacb0 size=443
typedef struct st_4dacb0_1 {
    char padding_0[120];
    unsigned int field_78;
} st_4dacb0_1;

typedef struct st_4dacb0_0 {
    unsigned int field_0;
} st_4dacb0_0;

extern st_4dacb0_0 *g_616804;
extern st_4dacb0_0 *g_6168d8;
extern st_4dacb0_0 *g_616928;

unsigned int RunAI__12CBaseMonster(float idx)
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_4dacb0_1 *v8;  // esi
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    int v2;  // [bp-0xc]
    unsigned short v3;  // [bp-0x8]
    unsigned short v4;  // [bp-0x6]

    if ((*(int *)(*(unsigned int *)&idx + 384) == 1 || *(int *)(*(unsigned int *)&idx + 384) == 3) && !g_616928(0, 99) && !(*(char *)(*(int *)idx + 420) & 2))
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 492))(idx);
    if (*(int *)(*(unsigned int *)&idx + 384) && *(int *)(*(unsigned int *)&idx + 384) != 5 && *(int *)(*(unsigned int *)&idx + 384) != 8)
    {
        v6 = g_616804(*(int *)(*(int *)idx + 520));
        v1 = 0;
        if (!v6 || !g_6168d8(v6))
            v1 = 1;
        if (!v1 || *(int *)(*(unsigned int *)&idx + 384) == 2)
        {
            v4 = __fnstcw();
            v3 = v4 | 0xc00;
            v2 = (int)*(float *)(*(unsigned int *)&idx + 648);
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 236))(idx, v2);
            sub_487d20(idx);
            v7 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 420))(idx);
            *(unsigned int *)(*(unsigned int *)&idx + 260) = *(int *)(*(unsigned int *)&idx + 260) & ~v7;
            sub_4895d0(idx);
        }
        v8 = *(unsigned int *)&idx + 264;
        if (sub_48d8b0(v8))
        {
            v0 = *(int *)(*(unsigned int *)&idx + 96);
            v9 = sub_488810(v8);
            (*(int *)(v0 + 384))(idx, v9);
        }
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 416))(idx);
    }
    sub_48d420(idx);
    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 456))(idx);
    v10 = sub_489a10(idx);
    *(char *)(*(unsigned int *)&idx + 261) = *(char *)(*(unsigned int *)&idx + 261) & 252;
    return v10;
}

