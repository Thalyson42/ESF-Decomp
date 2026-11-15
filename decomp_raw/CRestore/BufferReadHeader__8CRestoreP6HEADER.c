// BufferReadHeader__8CRestoreP6HEADER @0x136980 size=92
typedef struct st_536980_0 {
    unsigned short field_0;
    unsigned short field_2;
    unsigned int field_4;
} st_536980_0;

int BufferReadHeader__8CRestoreP6HEADER(int a0, st_536980_0 *a1)
{
    a1->field_0 = sub_4894a0(a0);
    a1->field_2 = sub_4894a0(a0);
    a1->field_4 = sub_48cb60(a0);
    return sub_4895b0(a0, a1->field_0);
}

