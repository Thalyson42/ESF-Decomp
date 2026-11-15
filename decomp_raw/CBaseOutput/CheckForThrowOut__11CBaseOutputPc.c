// CheckForThrowOut__11CBaseOutputPc @0x16d3d0 size=95
typedef struct st_56d3d0_0 {
    char padding_0[12];
    struct st_56d3d0_1 *field_c;
} st_56d3d0_0;

typedef struct st_56d3d0_1 {
    unsigned int field_0;
} st_56d3d0_1;

typedef struct st_56d3d0_2 {
    char field_0;
    char field_1;
    char padding_2[510];
    struct st_56d3d0_0 *field_200;
} st_56d3d0_2;

int CheckForThrowOut__11CBaseOutputPc(st_56d3d0_2 *a0, char *a1)
{
    st_56d3d0_2 *v0;  // esi
    unsigned int v1;  // ecx
    st_56d3d0_2 *v2;  // edi
    st_56d3d0_2 *v3;  // edi
    unsigned int v4;  // ecx
    char *v5;  // edi
    int v6;  // eax

    v0 = a0;
    v1 = 0xffffffff;
    v2 = v0;
    do
    {
        v3 = v2;
    } while (v1 && (v1 -= 1, v2 = &v3->field_1, v3->field_0));
    v4 = 0xffffffff;
    do
    {
        v5 = a1;
    } while (v4 && (v4 -= 1, a1 = v5 + 1, *v5));
    v6 = (short)~v1 + (short)~v4 - 2;
    if (v6 > 0x1ff)
        v6 = v0->field_200->field_c(v0);
    return v6;
}

