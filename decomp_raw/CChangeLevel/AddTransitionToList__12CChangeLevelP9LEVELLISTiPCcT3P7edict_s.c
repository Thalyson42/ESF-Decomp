// AddTransitionToList__12CChangeLevelP9LEVELLISTiPCcT3P7edict_s @0x12dd30 size=230
unsigned int AddTransitionToList__12CChangeLevelP9LEVELLISTiPCcT3P7edict_s(unsigned int a0, int a1, int a2, int a3, unsigned int *a4)
{
    int v0;  // esi
    unsigned int v1;  // eax
    unsigned int v2;  // edi
    int v3;  // esi
    unsigned int *v4;  // esi
    unsigned int *v5;  // eax
    unsigned int *v6;  // ecx

    if (a0 && a2 && a3 && a4)
    {
        v0 = 0;
        if (0 < a1)
        {
            do
            {
                v1 = v0 * 80;
                if (*(int *)(a0 + v1 + 64) == a4 && !sub_488af0(v1 + a0, a2))
                    goto LABEL_52ddd5;
            } while ((v0 += 1, v0 < a1));
        }
        v2 = a1 * 80;
        v3 = a0 + v2;
        sub_48e110(v3, a2);
        sub_48e110(v3 + 32, a3);
        *(unsigned int **)(a0 + v2 + 64) = a4;
        v4 = (!a4 ? NULL : a4 + 32);
        v5 = a1 * 80 + a0;
        v6 = v5 + 0x11;
        v5[0x11] = v4[2];
        v6[1] = v4[3];
        v6[2] = v4[4];
        return 1;
    }
LABEL_52ddd5:
    return 0;
}

