// WriteString__5CSavePCcT1 @0x135700 size=65
int WriteString__5CSavePCcT1(int a0, int a1, char *a2)
{
    char *v1;  // eax
    int v2;  // ecx
    char *v3;  // edi
    char *v0;  // [bp-0x20]

    v1 = a2;
    v0 = v1;
    v2 = -0x1;
    do
    {
        v3 = v1;
    } while (v2 && (v2 -= 1, v1 = v3 + 1, *v3));
    return CSave::BufferField(a0, a1, ~v2);
}

