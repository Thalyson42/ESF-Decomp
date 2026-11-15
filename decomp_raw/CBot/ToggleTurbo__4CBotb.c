// ToggleTurbo__4CBotb @0x13d870 size=73
typedef struct st_53d870_0 {
    char padding_0[804];
    unsigned int field_324;
} st_53d870_0;

st_53d870_0 * ToggleTurbo__4CBotb(st_53d870_0 *a0, char a1)
{
    if (!a1)
    {
        return sub_48dbc0(a0);
    }
    else if (!a0->field_324)
    {
        return sub_487d00(a0);
    }
    else
    {
        return a0;
    }
}

