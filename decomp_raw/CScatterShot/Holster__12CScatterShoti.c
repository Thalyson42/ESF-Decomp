// Holster__12CScatterShoti @0x1112a0 size=120
int Holster__12CScatterShoti(int *a0)
{
    int i;  // esi
    unsigned int *v0;  // [bp-0x8]

    i = 0;
    if (0 < a0[57])
    {
        v0 = a0 + 49;
        do
        {
            sub_489300(a0, v0[i]);
            i += 1;
        } while (i < a0[57]);
    }
    sub_488e80(a0[32], 5);
    return sub_488e80(a0[32], 6);
}

