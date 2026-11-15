// GoUp__16CFuncTrackChange @0xed6f0 size=281
typedef struct st_4ed6f0_0 {
    char padding_0[100];
    unsigned int field_64;
} st_4ed6f0_0;

extern char CallHitTop__9CFuncPlat;

unsigned int GoUp__16CFuncTrackChange(float idx)
{
    unsigned int v4;  // eax
    unsigned int v5;  // ecx
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_4ed6f0_0 *v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 316) == 1)
        return v10;
    v4 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 0x100))(idx, 2);
    v5 = *(int *)idx;
    if (*(char *)(v5 + 416) & 16)
    {
        *(unsigned int *)(*(unsigned int *)&idx + 128) = 2;
        v6 = _INSERT(v4, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 220) = v6 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &CallHitTop__9CFuncPlat;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 268);
        *(float *)&v1 = *(float *)(*(unsigned int *)&idx + 272);
        *(float *)&v2 = *(float *)(*(unsigned int *)&idx + 276);
        v7 = sub_488a40(idx, &v0, *(float *)(v5 + 504));
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(sub_48b550(idx), 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &CallHitTop__9CFuncPlat;
        v7 = sub_48bb80(idx, *(unsigned int *)&idx + 268, *(float *)(*(int *)idx + 260) - *(float *)(*(int *)idx + 0x100));
    }
    if (*(int *)(*(unsigned int *)&idx + 316) != 2)
        return v7;
    sub_48d5c0(idx, *(unsigned int *)&idx + 268);
    v9 = *(int *)(*(unsigned int *)&idx + 300);
    v9->field_64 = 0;
    return v9;
}

