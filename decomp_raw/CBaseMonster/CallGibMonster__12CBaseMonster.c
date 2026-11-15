// CallGibMonster__12CBaseMonster @0xa4ce0 size=341
typedef struct st_4a4ce0_0 {
    unsigned int field_0;
} st_4a4ce0_0;

extern st_4a4ce0_0 *g_6168a4;

unsigned int CallGibMonster__12CBaseMonster(float idx)
{
    unsigned int v2;  // edi
    double v3;  // mm0
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    float v0;  // [bp-0x2c]

    v2 = 0;
    if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 468))(idx))
    {
        g_6168a4("violence_hgibs");
        v2 = 0.0 == v3;
    }
    else if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 472))(idx))
    {
        g_6168a4("violence_agibs");
        if (v3 == 0.0)
            v2 = 1;
    }
    *(unsigned int *)(*(int *)idx + 364) = 0;
    *(unsigned int *)(*(int *)idx + 268) = 0;
    if (v2)
    {
        v0 = idx;
        v4 = *(int *)(*(int *)(*(unsigned int *)&idx + 96) + 476);
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 280) = 128;
        v0 = idx;
        v4 = *(int *)(*(int *)(*(unsigned int *)&idx + 96) + 464);
    }
    v4(v0);
    *(unsigned int *)(*(int *)idx + 368) = 2;
    sub_48d420(idx);
    if (-99.0f > *(float *)(*(int *)idx + 352))
        *(unsigned int *)(*(int *)idx + 352) = 0;
    v5 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 244))(idx);
    if (!v5)
    {
        return v5;
    }
    else if (!v2)
    {
        return sub_48cc00(idx);
    }
    else
    {
        return v5;
    }
}

