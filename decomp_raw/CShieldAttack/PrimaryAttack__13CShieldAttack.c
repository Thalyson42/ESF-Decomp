// PrimaryAttack__13CShieldAttack @0x1199f0 size=354
unsigned int PrimaryAttack__13CShieldAttack(double a0, float idx)
{
    unsigned int v3;  // eax
    float v0;  // [bp-0x3c]
    float v1;  // [bp-0x8]

    if (*(int *)(*(unsigned int *)&idx + 212) > 1)
    {
        v0 = idx;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 328))(v0);
        v3 = sub_488640(v0);
        goto LABEL_519b3d;
    }
    else if (*(int *)(*(unsigned int *)&idx + 212) == 1)
    {
        if (sub_48c980(*(int *)(*(unsigned int *)&idx + 128), 8))
            goto LABEL_519b2a;
        v0 = idx;
        sub_48d080(v0);
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 0;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0x3f800000;
        *(unsigned int *)(*(unsigned int *)&idx + 212) = 0;
        v3 = sub_488640(v0);
    }
    else
    {
        if (!*(int *)(*(unsigned int *)&idx + 212) && sub_48c980(*(int *)(*(unsigned int *)&idx + 128), 8))
        {
            sub_4899d0(idx);
            if (!(*(char *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 421) & 2))
                sub_488d40(*(int *)(*(unsigned int *)&idx + 128));
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1724) = 1;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 1;
            *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 208) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 212) = 1;
        }
LABEL_519b2a:
        v3 = sub_488640();
        v1 = (float)(a0 + 0.2);
        a0 = v1;
LABEL_519b3d:
        *(float *)(*(unsigned int *)&idx + 160) = (float)a0;
    }
    *(float *)(*(unsigned int *)&idx + 156) = (float)a0;
    return v3;
}

