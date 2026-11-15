// count_fdes @0x196108 size=45
unsigned int count_fdes(unsigned int *a0)
{
    unsigned int v0;  // ecx
    unsigned int *v1;  // eax

    v0 = 0;
    if (!*a0)
        return 0;
    do
    {
        if (a0[1] && a0[2])
            v0 += 1;
    } while ((v1 = (char *)a0 + *a0, a0 = v1 + 1, v1[1]));
    return v0;
}

