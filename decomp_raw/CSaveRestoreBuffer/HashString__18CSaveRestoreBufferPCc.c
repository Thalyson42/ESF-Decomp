// HashString__18CSaveRestoreBufferPCc @0x135440 size=68
int HashString__18CSaveRestoreBufferPCc(unsigned int a0, char *a1)
{
    char *v0;  // esi
    int v1;  // eax
    unsigned int v2;  // eax

    v0 = a1;
    v1 = 0;
    if (!*v0)
        return 0;
    do
    {
        v2 = sub_48c8b0(v1, 4);
        v1 = *v0 ^ v2;
        v0 += 1;
    } while (*v0);
    return v1;
}

