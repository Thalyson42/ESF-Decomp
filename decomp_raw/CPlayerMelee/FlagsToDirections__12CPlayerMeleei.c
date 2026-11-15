// FlagsToDirections__12CPlayerMeleei @0x106910 size=131
unsigned int FlagsToDirections__12CPlayerMeleei(unsigned int a0, unsigned short a1)
{
    unsigned int v0;  // eax

    v0 = 0;
    if (*(char *)((void*)&a1 + 1) & 8)
        v0 = 8;
    if ((char)a1 & 8)
    {
        if ((char)a1 < 0)
            return v0 + 1;
        return v0 + 7;
    }
    else
    {
        if ((char)a1 & 16)
        {
            return ((char)a1 < 0 ? v0 + 3 : !(*(char *)((void*)&a1 + 1) & 1) ? v0 + 4 : v0 + 5);
        }
        else if ((char)a1 < 0)
        {
            return v0 + 2;
        }
        else if (*(char *)((void*)&a1 + 1) & 1)
        {
            return v0 + 6;
        }
        else
        {
            return 16;
        }
    }
}

