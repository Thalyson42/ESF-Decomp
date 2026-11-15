// GoDown__16CFuncTrackChange @0xed5d0 size=281
typedef struct st_4ed5d0_0 {
    char padding_0[100];
    unsigned int field_64;
} st_4ed5d0_0;

extern char CallHitBottom__9CFuncPlat;

unsigned int GoDown__16CFuncTrackChange(float idx)
{
    unsigned int v4;  // eax
    unsigned int v5;  // ecx
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    st_4ed5d0_0 *v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 316) == 1)
        return v10;
    v4 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 0x100))(idx, 3);
    v5 = *(int *)idx;
    if (*(char *)(v5 + 416) & 16)
    {
        v6 = _INSERT(v4, 0, 0);
        *(unsigned int *)(*(unsigned int *)&idx + 220) = v6 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &CallHitBottom__9CFuncPlat;
        *(unsigned int *)(*(unsigned int *)&idx + 128) = 3;
        *(float *)&v0 = *(float *)(*(unsigned int *)&idx + 280);
        *(float *)&v1 = *(float *)(*(unsigned int *)&idx + 284);
        *(float *)&v2 = *(float *)(*(unsigned int *)&idx + 288);
        v7 = CBaseToggle::AngularMove(idx, &v0, *(float *)(v5 + 504));
    }
    else
    {
        *(unsigned int *)(*(unsigned int *)&idx + 220) = _INSERT(CFuncPlat::GoDown(idx), 0, 0) | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 224) = &CallHitBottom__9CFuncPlat;
        v7 = CFuncPlatRot::RotMove(idx, *(unsigned int *)&idx + 280, *(float *)(*(int *)idx + 260) - *(float *)(*(int *)idx + 0x100));
    }
    if (*(int *)(*(unsigned int *)&idx + 316) != 2)
        return v7;
    CFuncTrackChange::UpdateTrain(idx, *(unsigned int *)&idx + 280);
    v9 = *(int *)(*(unsigned int *)&idx + 300);
    v9->field_64 = 0;
    return v9;
}

