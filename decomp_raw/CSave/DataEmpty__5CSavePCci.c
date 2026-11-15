// DataEmpty__5CSavePCci @0x136250 size=46
unsigned int DataEmpty__5CSavePCci(unsigned int a0, unsigned int a1, char *a2)
{
    char *v0;  // eax

    v0 = NULL;
    if (NULL < a2)
    {
        do
        {
            if (v0[a1])
                return 0;
        } while ((v0 += 1, v0 < a2));
    }
    return 1;
}

