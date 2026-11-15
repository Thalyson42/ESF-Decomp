// StartBlock__11CBasePlayer @0xf2740 size=216
typedef struct st_4f2740_0 {
    float field_0;
} st_4f2740_0;

extern st_4f2740_0 *gpGlobals;

unsigned int * StartBlock__11CBasePlayer(float idx)
{
    unsigned int v1;  // eax
    unsigned int *v2;  // eax

    v1 = *(int *)idx;
    if (*(char *)(v1 + 423) & 4)
    {
        return v1;
    }
    else if (*(int *)(*(unsigned int *)&idx + 812))
    {
        return v1;
    }
    else if (*(int *)(*(unsigned int *)&idx + 820))
    {
        return v1;
    }
    else if (*(int *)(*(unsigned int *)&idx + 828))
    {
        return v1;
    }
    else if (!*(int *)(*(unsigned int *)&idx + 808))
    {
        v2 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx);
        if (!v2)
        {
            return v2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 832))
        {
            return v2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1904))
        {
            return v2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 892))
        {
            return v2;
        }
        else if (*(int *)(*(unsigned int *)&idx + 1144))
        {
            return v2;
        }
        else if (!*(int *)(*(unsigned int *)&idx + 1724))
        {
            if (*(int *)(*(unsigned int *)&idx + 816))
                sub_48ba60(idx);
            *(unsigned int *)(*(unsigned int *)&idx + 1876) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 812) = 1;
            *(float *)(*(unsigned int *)&idx + 1844) = *(float *)gpGlobals;
            return gpGlobals;
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

