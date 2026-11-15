// UTIL_SharedRandomLong__FUiii @0x131210 size=80
unsigned int UTIL_SharedRandomLong__FUiii(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // esi

    sub_489200(a0 + a1 + a2);
    v0 = a2 - a1 + 1;
    if (v0 == 1)
        return a1;
    return sub_48a890() % v0 + a1;
}

