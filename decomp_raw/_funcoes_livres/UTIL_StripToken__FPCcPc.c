// UTIL_StripToken__FPCcPc @0x135180 size=50
char UTIL_StripToken__FPCcPc(char *a0, unsigned int a1)
{
    char *v0;  // edx
    char v1;  // al

    v0 = NULL;
    if (*a0 && *a0 != 35)
    {
        do
        {
            v1 = *(char *)(v0 + a0);
            v0[a1] = *(char *)(v0 + a0);
            v0 += 1;
        } while (*(char *)(v0 + a0) && *(char *)(v0 + a0) != 35);
    }
    v0[a1] = 0;
    return v1;
}

