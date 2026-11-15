// MessageThink__12CRevertSaved @0xfe9d0 size=133
typedef struct st_4fe9d0_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4fe9d0_0;

extern char LoadThink__12CRevertSaved;
extern st_4fe9d0_0 *gpGlobals;

unsigned int MessageThink__12CRevertSaved(float idx)
{
    float v1;  // 128
    unsigned int v2;  // eax

    sub_48cb90(*(int *)(*(int *)idx + 468) + gpGlobals->field_98);
    v1 = *(float *)(*(unsigned int *)&idx + 104) - *(float *)(*(unsigned int *)&idx + 100);
    if (0.0 >= v1)
        return sub_48a360(idx);
    *(float *)(*(int *)idx + 260) = v1 + gpGlobals->field_0;
    v2 = _INSERT(gpGlobals, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v2 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &LoadThink__12CRevertSaved;
    return v2 | 0xffff0000;
}

