// UpdateAutoTargets__14CFuncTrackAutoi @0xedaf0 size=243
typedef struct st_4edaf0_0 {
    char padding_0[416];
    char field_1a0;
} st_4edaf0_0;

st_4edaf0_0 * UpdateAutoTargets__14CFuncTrackAutoi(float idx)
{
    st_4edaf0_0 **v2;  // eax
    unsigned int v3;  // eax
    unsigned int v4;  // edx
    st_4edaf0_0 *v5;  // eax
    st_4edaf0_0 **v0;  // [bp-0x8]

    if (!*(int *)(*(unsigned int *)&idx + 292))
    {
        return v5;
    }
    else if (*(int *)(*(unsigned int *)&idx + 296))
    {
        if (!*(int *)(*(unsigned int *)&idx + 320))
        {
            v2 = CPathTrack::GetNext(*(int *)(*(unsigned int *)&idx + 292));
            v3 = *(int *)(*(unsigned int *)&idx + 296);
        }
        else
        {
            v2 = CPathTrack::GetNext(*(int *)(*(unsigned int *)&idx + 296));
            v3 = *(int *)(*(unsigned int *)&idx + 292);
        }
        v0 = CPathTrack::GetNext(v3);
        if (v2)
        {
            *v2->field_1a0 = *v2->field_1a0 & 254;
            if (*(int *)(*(unsigned int *)&idx + 316) == 2 && *(int *)(*(unsigned int *)&idx + 300))
            {
                v4 = *(int *)(*(unsigned int *)&idx + 300);
                if (*(float *)(*(int *)v4 + 504) == 0.0f)
                    (*(int *)(*(int *)(v4 + 96) + 184))(v4, idx, idx, 1, 0.0f);
            }
        }
        if (!v0)
            return v5;
        v5 = *v0;
        v5->field_1a0 = v5->field_1a0 | 1;
        return v5;
    }
    else
    {
        return v5;
    }
}

