// ButtonActivate__11CBaseButton @0x973d0 size=335
typedef struct st_4973d0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4973d0_0;

extern char TriggerAndWait__11CBaseButton;
extern st_4973d0_0 *gpGlobals;

int ButtonActivate__11CBaseButton(float idx)
{
    int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int *v7;  // eax
    unsigned int *v8;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    sub_489390(*(int *)(*(int *)idx + 520), 2, *(int *)(*(int *)idx + 488) + gpGlobals->field_98, 0x3f800000, 0.800000011920929f, 0, 100);
    v4 = sub_488810(*(unsigned int *)&idx + 212);
    if (!sub_488a80(*(int *)(*(unsigned int *)&idx + 0x100), v4))
        return sub_48dfe0(*(int *)idx, *(unsigned int *)&idx + 272, 1, 1);
    v5 = sub_48dfe0(*(int *)idx, *(unsigned int *)&idx + 272, 0, 1);
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 2;
    v6 = _INSERT(v5, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 220) = v6 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 224) = &TriggerAndWait__11CBaseButton;
    if (*(int *)(*(unsigned int *)&idx + 264))
    {
        v8 = *(unsigned int *)&idx + 192;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 192);
        *(float *)&v1 = *(float *)&v8[1];
        *(float *)&v2 = *(float *)&v8[2];
        return sub_488a40(idx, &v0, *(float *)(*(int *)idx + 504));
    }
    v7 = *(unsigned int *)&idx + 168;
    *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 168);
    *(float *)&v1 = *(float *)&v7[1];
    *(float *)&v2 = *(float *)&v7[2];
    return sub_488220(idx, &v0, *(float *)(*(int *)idx + 504));
}

