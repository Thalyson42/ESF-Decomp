// HitTop__16CFuncTrackChange @0xeda10 size=169
typedef struct st_4eda10_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4eda10_0;

unsigned int HitTop__16CFuncTrackChange(float idx)
{
    st_4eda10_0 **v4;  // esi
    unsigned int *v5;  // edx
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    CFuncPlatRot::HitTop(idx);
    if (*(int *)(*(unsigned int *)&idx + 316) == 2)
    {
        v4 = *(int *)(*(unsigned int *)&idx + 300);
        v5 = &*v4->field_8;
        *(float *)&v0 = *(float *)&*v4->field_8;
        *(float *)&v1 = *(float *)&v5[1];
        *(float *)&v2 = *(float *)&v5[2];
        v4[25] = CPathTrack::Nearest(*(int *)(*(unsigned int *)&idx + 292), &v0);
    }
    *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
    *(float *)(*(int *)idx + 260) = -1.0f;
    v6 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 0x100))(idx, *(int *)(*(unsigned int *)&idx + 128));
    *(unsigned int *)(*(unsigned int *)&idx + 324) = 1;
    return v6;
}

