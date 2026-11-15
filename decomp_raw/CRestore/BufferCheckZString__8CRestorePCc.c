// BufferCheckZString__8CRestorePCc @0x136c20 size=108
typedef struct st_536c20_0 {
    char padding_0[4];
    int field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_536c20_0;

unsigned int BufferCheckZString__8CRestorePCc(st_536c20_0 **a0, char *a1)
{
    st_536c20_0 *v0;  // esi
    int v1;  // ecx
    char *v2;  // edi
    char *v3;  // edi
    int v4;  // eax

    if (!*a0)
        return 0;
    v0 = *a0;
    v1 = -0x1;
    v2 = a1;
    do
    {
        v3 = v2;
    } while (v1 && (v1 -= 1, v2 = v3 + 1, *v3));
    v4 = ~v1 - 1;
    if (v4 <= (int)(v0->field_c - v0->field_8) && !strncmp@GLIBC_2.0(a1, v0->field_4, v4))
        return 1;
    return 0;
}

