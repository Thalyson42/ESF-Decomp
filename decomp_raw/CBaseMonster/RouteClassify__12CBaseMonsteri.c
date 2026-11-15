// RouteClassify__12CBaseMonsteri @0xd6100 size=78
unsigned int RouteClassify__12CBaseMonsteri(unsigned int a0, char a1)
{
    if (a1 & 1)
    {
        return 1;
    }
    else if (a1 & 2)
    {
        return 2;
    }
    else if (a1 & 16)
    {
        return 16;
    }
    else if (a1 & 32)
    {
        return 32;
    }
    else
    {
        return 64;
    }
}

