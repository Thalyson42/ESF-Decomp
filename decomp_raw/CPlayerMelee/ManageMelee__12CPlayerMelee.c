// ManageMelee__12CPlayerMelee @0xffb70 size=426
unsigned int ManageMelee__12CPlayerMelee(float a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    sub_4895e0(a0);
    if (*(int *)(*(unsigned int *)&a0 + 312) && (!(*(int *)(*(int *)(*(int *)(*(unsigned int *)&a0 + 296) + 96) + 140))(*(int *)(*(unsigned int *)&a0 + 296)) || *(float *)(*(int *)*(int *)(*(unsigned int *)&a0 + 296) + 364) == 0.0f))
    {
        if (!*(int *)(*(unsigned int *)&a0 + 284) || !*(int *)(*(unsigned int *)&a0 + 312))
            return v1;
        sub_48a700(a0, 0);
        return v1;
    }
    if (*(int *)(*(unsigned int *)&a0 + 284) == 1)
    {
        v2 = sub_489530(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 2)
    {
        sub_48a730(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 3)
    {
        sub_48b740(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 4)
    {
        sub_489e60(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 7)
    {
        sub_48bad0(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 8)
    {
        sub_48dc00(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 5)
    {
        sub_48b330(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 6)
    {
        sub_48d610(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 9)
    {
        sub_48b440(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 10)
    {
        sub_48c850(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 11)
    {
        sub_489070(a0);
        return v2;
    }
    else if (*(int *)(*(unsigned int *)&a0 + 284) == 12)
    {
        sub_48a180(a0);
        return v2;
    }
    else
    {
        return v2;
    }
}

