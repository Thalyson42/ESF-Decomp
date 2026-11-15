// PlayAnimation__11CBasePlayer @0xf56f0 size=191
int PlayAnimation__11CBasePlayer(float a0)
{
    unsigned int v2;  // eax
    unsigned int v3;  // edi
    unsigned int v4;  // edx
    char v0;  // [bp-0xc], Other Possible Types: int

    if (*(int *)(*(unsigned int *)&a0 + 1900))
    {
        v2 = sub_489da0(a0);
        *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&a0 + 1900) + 276) = v2;
    }
    sub_488cd0(*(unsigned int *)&a0 + 896);
    if (!sub_4897a0(a0))
    {
        v3 = sub_48b580(a0, &v0);
        v4 = sub_48bc10(a0);
        if (v4)
            *(unsigned int *)(*(int *)a0 + 300) = v4;
        if (*(int *)(*(int *)a0 + 296) != v3)
        {
            *(float *)(*(int *)a0 + 304) = (float)v0;
            *(unsigned int *)(*(int *)a0 + 296) = v3;
            sub_488850(a0);
        }
    }
    return sub_4887a0(a0);
}

