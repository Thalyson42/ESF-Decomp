// CutSpaces__10CChatClassPCcPc @0x148af0 size=101
char * CutSpaces__10CChatClassPCcPc(unsigned int a0, char *a1, char *a2)
{
    char *v0;  // esi
    int node;  // edx
    char *iter;  // ecx
    char *v3;  // ecx
    char *v4;  // edi
    char *v5;  // edi
    char *j;  // eax

    v0 = a2;
    node = 0;
    if (*a1 == 32)
    {
        do
        {
            node += 1;
        } while (node <= 79 && a1[node] == 32);
    }
    for (iter = v0; node <= 79 && a1[node]; node += 1)
    {
        *iter = a1[node];
        iter += 1;
    }
    *iter = 0;
    v3 = 0xffffffff;
    v4 = v0;
    do
    {
        v5 = v4;
    } while (v3 && (v3 -= 1, v4 = v5 + 1, *v5));
    for (j = ~v3 - 2; j > NULL; j -= 1)
    {
        if (*(char *)(j + v0) != 32)
            return j;
        *(char *)(j + v0) = 0;
    }
    return j;
}

