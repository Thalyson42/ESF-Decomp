// Spawn__8CDeadHEV @0xfe1a0 size=272
typedef struct st_4fe1a0_0 {
    struct st_4fe1a0_1 *field_0;
    char padding_4[4];
    struct st_4fe1a0_1 *field_8;
    char padding_c[232];
    struct st_4fe1a0_1 *field_f4;
} st_4fe1a0_0;

typedef struct st_4fe1a0_1 {
    unsigned int field_0;
} st_4fe1a0_1;

extern unsigned int _8CDeadHEV.m_szPoses[4];
extern st_4fe1a0_0 g_engfuncs;

int Spawn__8CDeadHEV(float a0)
{
    unsigned int v2;  // eax
    st_4fe1a0_0 *v0;  // [bp-0x8]

    v0 = &g_engfuncs.field_0;
    g_engfuncs.field_0("models/player.mdl");
    v0->field_8(*(int *)(*(int *)a0 + 520), "models/player.mdl");
    *(unsigned int *)(*(int *)a0 + 280) = 0;
    *(float *)(*(int *)a0 + 176) = 8.0f;
    *(unsigned int *)(*(int *)a0 + 296) = 0;
    *(unsigned int *)(*(int *)a0 + 276) = 1;
    *(unsigned int *)(*(unsigned int *)&a0 + 632) = 247;
    v2 = CBaseAnimating::LookupSequence(a0, _8CDeadHEV.m_szPoses[*(int *)(*(unsigned int *)&a0 + 680)]);
    *(unsigned int *)(*(int *)a0 + 296) = v2;
    if (*(int *)(*(int *)a0 + 296) == 0xffffffff)
    {
        v0->field_f4(1, "Dead hevsuit with bad pose\n");
        *(unsigned int *)(*(int *)a0 + 296) = 0;
        *(unsigned int *)(*(int *)a0 + 280) = 1;
    }
    *(float *)(*(int *)a0 + 352) = 8.0f;
    return (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 264))(a0);
}

