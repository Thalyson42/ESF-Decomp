// SwapChars__10CChatClassPCcPc @0x1488a0 size=314
typedef struct st_5488a0_0 {
    unsigned int field_0;
} st_5488a0_0;

extern st_5488a0_0 *g_616928;

char * SwapChars__10CChatClassPCcPc(unsigned int a0, int a1, char *a2)
{
    unsigned int v2;  // ecx
    char *v3;  // edi
    char *v4;  // edi
    unsigned int v5;  // eax
    char *v6;  // esi
    char *v7;  // eax
    char *v8;  // ecx
    char v9;  // 4108
    char v0;  // [bp-0x9]
    int v1;  // [bp-0x8]

    v1 = 0;
    sub_48e110(a2, a1);
    v2 = 0xffffffff;
    v3 = a2;
    do
    {
        v4 = v3;
    } while (v2 && (v2 -= 1, v3 = v4 + 1, *v4));
    v5 = ~v2;
    v6 = g_616928(1, v5 - 3);
    v0 = 0;
    v7 = sub_48cbf0(*(char *)(v6 + a2));
    if (!v7 || (v7 = sub_48cbf0(*(char *)(a2 + v6 + 1)), !v7 || (v7 = a2, *(char *)(v7 + v6 - 1) == 37)))
        v0 = 1;
    if (v0)
    {
        if (v1 <= 19)
        {
            do
            {
                v6 = g_616928(1, v5 - 3);
                v0 = 0;
                v7 = sub_48cbf0(*(char *)(v6 + a2));
                if (!v7 || (v7 = sub_48cbf0(*(char *)(a2 + v6 + 1)), !v7 || (v7 = a2, *(char *)(v7 + v6 - 1) == 37)))
                    v0 = 1;
            } while ((v1 += 1, v0 && v1 <= 19));
        }
        else
        {
            return v7;
        }
    }
    if (v1 > 19)
        return v7;
    v8 = a2;
    v9 = *(char *)(v6 + v8);
    *(char *)&v7 = *(char *)(v8 + v6 + 1);
    *(char *)(v6 + v8) = *(char *)(v8 + v6 + 1);
    *(char *)(v8 + v6 + 1) = v9;
    return v7;
}

