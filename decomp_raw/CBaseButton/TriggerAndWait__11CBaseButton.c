// TriggerAndWait__11CBaseButton @0x97520 size=240
typedef struct st_497520_0 {
    char padding_0[304];
    unsigned int field_130;
} st_497520_0;

extern char ButtonTouch__11CBaseButtonP11CBaseEntity;
extern char ButtonReturn__11CBaseButton;

unsigned int TriggerAndWait__11CBaseButton(float idx)
{
    int v3;  // eax
    unsigned int v4;  // eax
    st_497520_0 *v5;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]

    v3 = sub_488810(*(unsigned int *)&idx + 212);
    v4 = sub_488a80(*(int *)(*(unsigned int *)&idx + 0x100), v3);
    if (!v4)
        return v4;
    *(unsigned int *)(*(unsigned int *)&idx + 128) = 0;
    if (!*(int *)(*(unsigned int *)&idx + 260) && !(*(char *)(*(int *)idx + 416) & 32))
    {
        v5 = *(int *)idx;
        *(float *)&v5->padding_0[260] = *(float *)&v5->padding_0[0x100] + *(float *)(*(unsigned int *)&idx + 140);
        *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v5, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &ButtonReturn__11CBaseButton;
    }
    else if (!(*(char *)(*(int *)idx + 417) & 1))
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 24) = 0;
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(*(int *)idx, 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 24) = &ButtonTouch__11CBaseButtonP11CBaseEntity;
    }
    *(unsigned int *)(*(int *)idx + 304) = 0x3f800000;
    v1 = 0;
    v0 = 3;
    return sub_48d150(idx, sub_488810(*(unsigned int *)&idx + 212));
}

