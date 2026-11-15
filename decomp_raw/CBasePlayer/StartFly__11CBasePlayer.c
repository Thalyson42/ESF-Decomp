// StartFly__11CBasePlayer @0xf0780 size=177
typedef struct st_4f0780_0 {
    char padding_0[264];
    unsigned int field_108;
} st_4f0780_0;

unsigned int StartFly__11CBasePlayer(float a0)
{
    st_4f0780_0 *v1;  // eax
    unsigned int v2;  // eax
    st_4f0780_0 *v3;  // eax

    v1 = *(int *)a0;
    if (v1[1].padding_0[155] & 4)
    {
        return v1;
    }
    else if (!*(int *)(*(unsigned int *)&a0 + 800))
    {
        v2 = (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 140))(a0);
        if (!v2)
        {
            return v2;
        }
        else if (!*(int *)(*(unsigned int *)&a0 + 808))
        {
            if (*(int *)(*(unsigned int *)&a0 + 892) && !*(int *)(*(unsigned int *)&a0 + 1144))
                return v2;
            if (*(int *)(*(unsigned int *)&a0 + 828))
            {
                return v2;
            }
            else if (!*(int *)(*(unsigned int *)&a0 + 856))
            {
                if (*(int *)(*(unsigned int *)&a0 + 812))
                    sub_4895a0(a0);
                *(unsigned int *)(*(unsigned int *)&a0 + 800) = 1;
                *(float *)(*(int *)a0 + 284) = 1.0000000116860974e-07f;
                v3 = *(int *)a0;
                v3->field_108 = 14;
                return v3;
            }
            else
            {
                return v2;
            }
        }
        else
        {
            return v2;
        }
    }
    else
    {
        return v1;
    }
}

