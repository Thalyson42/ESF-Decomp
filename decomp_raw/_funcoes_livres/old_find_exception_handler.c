// old_find_exception_handler @0x194db4 size=148
unsigned int old_find_exception_handler(unsigned int a0, unsigned int *a1)
{
    unsigned int v2;  // edi
    unsigned int v3;  // eax
    int v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    if (!a1)
        return 0;
    v0 = -0x1;
    v1 = 0;
    if (*a1 != -0x1)
    {
        v2 = 0;
        do
        {
            if ((unsigned int)*(int *)((char *)a1 + v2) <= a0 && (unsigned int)*(int *)((char *)a1 + v2 + 4) > a0)
            {
                if (v0 == -0x1 || (v3 = v0 * 12, (unsigned int)*(int *)((char *)a1 + v2 + 4) <= (unsigned int)*(int *)((char *)a1 + v3 + 4) && (unsigned int)*(int *)((char *)a1 + v2) >= (unsigned int)*(int *)((char *)a1 + v3)))
                    v0 = v1;
            }
            else
            {
                if (v0 >= NULL && (unsigned int)*(int *)((char *)a1 + v2) > a0)
                    break;
            }
        } while ((v2 += 12, v1 += 1, *(int *)((char *)a1 + v2) != 0xffffffff));
    }
    if (v0 != -0x1)
        return a1[2 + 3 * v0];
    return 0;
}

