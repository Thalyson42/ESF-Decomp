// ButtonReturn__11CBaseButton @0x97610 size=203
typedef struct st_497610_0 {
    char padding_0[304];
    unsigned int field_130;
} st_497610_0;

extern char ButtonBackHome__11CBaseButton;

int ButtonReturn__11CBaseButton(float idx)
{
    unsigned int *v5;  // eax
    unsigned int *v6;  // eax
    st_497610_0 *v7;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    *(unsigned int *)(*(unsigned int *)&idx + 128) = 3;
    *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(0, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 224) = &ButtonBackHome__11CBaseButton;
    if (!*(int *)(*(unsigned int *)&idx + 264))
    {
        v5 = *(unsigned int *)&idx + 156;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 156);
        *(float *)&v1 = *(float *)&v5[1];
        *(float *)&v2 = *(float *)&v5[2];
        sub_488220(idx, &v0, *(float *)(*(int *)idx + 504));
    }
    else
    {
        v6 = *(unsigned int *)&idx + 180;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 180);
        *(float *)&v1 = *(float *)&v6[1];
        *(float *)&v2 = *(float *)&v6[2];
        sub_488a40(idx, &v0, *(float *)(*(int *)idx + 504));
    }
    v7 = *(int *)idx;
    v7->field_130 = 0;
    return v7;
}

