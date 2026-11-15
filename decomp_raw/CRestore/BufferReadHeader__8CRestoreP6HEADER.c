// BufferReadHeader__8CRestoreP6HEADER @0x136980 size=92
typedef struct st_536980_0 {
    unsigned short field_0;
    unsigned short field_2;
    unsigned int field_4;
} st_536980_0;

int BufferReadHeader__8CRestoreP6HEADER(int a0, st_536980_0 *a1)
{
    a1->field_0 = CRestore::ReadShort(a0);
    a1->field_2 = CRestore::ReadShort(a0);
    a1->field_4 = CRestore::BufferPointer(a0);
    return CRestore::BufferSkipBytes(a0, a1->field_0);
}

