// BufferSkipZString__8CRestore @0x136bc0 size=85
typedef struct st_536bc0_0 {
    char padding_0[4];
    struct st_536bc0_1 *field_4;
    unsigned int field_8;
    unsigned int field_c;
} st_536bc0_0;

typedef struct st_536bc0_1 {
    char field_0;
} st_536bc0_1;

int BufferSkipZString__8CRestore(st_536bc0_0 **a0)
{
    st_536bc0_0 *v0;  // eax
    int v1;  // esi
    char *v2;  // edx
    char *v3;  // edx

    if (!*a0)
        return 0;
    v0 = *a0;
    v1 = 0;
    v2 = v0->field_4;
    while (1)
    {
        v3 = v2 + 1;
        if (!*v2 || v1 >= (int)(v0->field_c - v0->field_8))
            break;
        v1 += 1;
        v2 = v3;
    }
    CRestore::BufferSkipBytes(a0, v1 + 1);
    return v1 + 1;
}

