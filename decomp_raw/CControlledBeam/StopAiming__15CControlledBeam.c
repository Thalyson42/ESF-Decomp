// StopAiming__15CControlledBeam @0xa7bc0 size=437
typedef struct st_4a7bc0_2 {
    struct st_4a7bc0_1 *field_0;
    char padding_4[824];
    unsigned int field_33c;
    char padding_340[20];
    unsigned int field_354;
    char padding_358[4];
    unsigned int field_35c;
    char padding_360[12];
    unsigned int field_36c;
    char padding_370[12];
    unsigned int field_37c;
    char padding_380[840];
    unsigned int field_6c8;
    char padding_6cc[136];
    unsigned int field_754;
    char padding_758[24];
    unsigned int field_770;
    char padding_774[4];
    unsigned int field_778;
} st_4a7bc0_2;

typedef struct st_4a7bc0_1 {
    char padding_0[296];
    unsigned int field_128;
} st_4a7bc0_1;

typedef struct st_4a7bc0_0 {
    unsigned int field_0;
} st_4a7bc0_0;

extern unsigned int gmsgPowerStruggle;
extern st_4a7bc0_0 *g_616878;
extern st_4a7bc0_0 *g_61687c;
extern st_4a7bc0_0 *g_616884;
extern st_4a7bc0_0 *g_6168dc;

int StopAiming__15CControlledBeam(float idx)
{
    st_4a7bc0_2 *v5;  // eax
    st_4a7bc0_2 *v6;  // eax
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    g_616878(1, gmsgPowerStruggle, 0, *(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), v1, v2, v3);
    v0 = 127;
    g_616884(v0);
    g_61687c(v0);
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 852) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 876) = 0;
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 860) = 0;
    v5 = *(int *)(*(unsigned int *)&idx + 128);
    if (!v5->field_770 && !v5->field_37c)
    {
        v5->field_754 = 0x3f800000;
    }
    else
    {
        *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 296) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1912) = 0;
        sub_488850(*(int *)(*(unsigned int *)&idx + 128));
    }
    *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 828) = 0;
    if (*(int *)(*(unsigned int *)&idx + 520))
    {
        sub_48dea0(idx);
        sub_48c5a0(*(int *)(*(unsigned int *)&idx + 128));
    }
    if (*(int *)(*(unsigned int *)&idx + 516))
        sub_48c650(idx);
    *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
    sub_489390(*(int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 520), 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    v6 = *(int *)(*(unsigned int *)&idx + 128);
    if (v6->field_6c8)
        return v6;
    return sub_48b090(g_6168dc(*(int *)&v6->field_0[1].padding_0[220]));
}

