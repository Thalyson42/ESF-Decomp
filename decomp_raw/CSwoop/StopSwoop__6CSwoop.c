// StopSwoop__6CSwoop @0x124200 size=397
typedef struct st_524200_0 {
    struct st_524200_1 *field_0;
    char padding_4[796];
    unsigned int field_320;
    unsigned int field_324;
    char padding_328[84];
    unsigned int field_37c;
    char padding_380[1004];
    unsigned int field_76c;
} st_524200_0;

typedef struct st_524200_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[16];
    unsigned int field_11c;
    char padding_120[360];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_524200_1;

int StopSwoop__6CSwoop(float idx)
{
    unsigned int *v4;  // edx
    st_524200_0 *v5;  // eax
    unsigned int *v6;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    *(unsigned int *)(*(unsigned int *)&idx + 4) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 8) = 0;
    *(unsigned int *)idx = 0xffffffff;
    *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 120) + 892) = 0;
    v4 = *(int *)*(int *)(*(unsigned int *)&idx + 120);
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v4[162] = v0;
    v4[163] = v1;
    v4[164] = v2;
    CSwoop::ResetAllDT(idx);
    v5 = *(int *)(*(unsigned int *)&idx + 120);
    if (v5->field_76c)
    {
        if (v5->field_324)
        {
            EMIT_SOUND_DYN(*(int *)&v5->field_0->padding_120[232], 3, "weapons/aura.wav", 0x3f800000, 0.800000011920929f, 0, 100);
        }
        else
        {
            CAura::Destroy(*(int *)(*(int *)(*(unsigned int *)&idx + 120) + 1900));
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 120) + 1900) = 0;
        }
    }
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 120) + 800) = 0;
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 421) & 2)
    {
        *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 284) = 0x3f800000;
        *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 264) = 3;
    }
    else
    {
        CBasePlayer::StartFly(*(int *)(*(unsigned int *)&idx + 120));
    }
    CPlayerMelee::SetMovementFlags(*(int *)(*(unsigned int *)&idx + 120) + 896, *(unsigned int *)&idx + 12);
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 384) & 2)
        CSwoop::AddToNullKeyset(idx, 2);
    v6 = *(int *)*(int *)(*(unsigned int *)&idx + 120);
    if (*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 120) + 384) & 4)
        v6 = CSwoop::AddToNullKeyset(idx, 4);
    return v6;
}

