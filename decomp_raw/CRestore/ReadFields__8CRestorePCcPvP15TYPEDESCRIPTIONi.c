// ReadFields__8CRestorePCcPvP15TYPEDESCRIPTIONi @0x136820 size=342
typedef struct st_536820_0 {
    char padding_0[24];
    struct st_536820_1 *field_18;
} st_536820_0;

typedef struct st_536820_1 {
    int field_0;
} st_536820_1;

typedef struct st_536820_2 {
    struct st_536820_0 *field_0;
    unsigned int field_4;
} st_536820_2;

extern unsigned int gSizes[4];

unsigned int ReadFields__8CRestorePCcPvP15TYPEDESCRIPTIONi(st_536820_2 *a0, int a1, int a2, unsigned int *a3, int a4)
{
    unsigned short v5;  // ax
    unsigned int v6;  // esi
    unsigned int v7;  // esi
    int i;  // [bp-0x14]
    int v1;  // [bp-0x10]
    char v2;  // [bp-0xc], Other Possible Types: unsigned short
    unsigned short v3;  // [bp-0xa]
    int v4;  // [bp-0x8]

    CRestore::ReadShort(a0);
    v5 = CRestore::ReadShort(a0);
    if (v5 != (unsigned short)CSaveRestoreBuffer::TokenHash(a0, a1))
    {
        CSaveRestoreBuffer::BufferRewind(a0, 4);
        return 0;
    }
    i = CRestore::ReadInt(a0);
    v1 = 0;
    v6 = 0;
    if (v1 < a4)
    {
        do
        {
            if (!a0->field_4 || !(*((char *)&a3[3 + 4 * (unsigned short)v6] + 2) & 1))
                memset@GLIBC_2.0(a2 + a3[2 + 4 * (unsigned short)v6], 0, gSizes[a3[4 * (unsigned short)v6]] * (short)a3[3 + 4 * (unsigned short)v6]);
        } while ((v6 += 1, (unsigned short)v6 < a4));
    }
    v7 = 0;
    if (i <= 0)
        return 1;
    do
    {
        CRestore::BufferReadHeader(a0, &v2);
        v1 = CRestore::ReadField(a0, a2, a3, a4, v1, v2, *(int *)&a0->field_0->field_18[v3], v4);
        v1 += 1;
        v7 += 1;
    } while ((unsigned short)v7 < i);
    return 1;
}

