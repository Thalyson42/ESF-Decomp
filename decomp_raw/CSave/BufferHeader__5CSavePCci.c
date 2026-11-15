// BufferHeader__5CSavePCci @0x1362d0 size=120
typedef struct st_5362d0_0 {
    unsigned int field_0;
} st_5362d0_0;

extern st_5362d0_0 *g_6168b4;

int BufferHeader__5CSavePCci(int a0, int a1, unsigned int a2)
{
    unsigned short v0;  // [bp-0x6]

    v0 = sub_48b290(a0, a1);
    if ((int)a2 > 0x10000)
        g_6168b4(4, "CSave :: BufferHeader() size parameter exceeds 'short'!");
    sub_488670(a0, &a2, 2);
    return sub_488670(a0, &v0, 2);
}

