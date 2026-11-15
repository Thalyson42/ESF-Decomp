// MakeAvoidSwoopTask__4CBot @0x181620 size=168
typedef struct st_581620_0 {
    unsigned int field_0;
} st_581620_0;

extern st_581620_0 *g_616928;

char MakeAvoidSwoopTask__4CBot(int a0)
{
    unsigned int v1;  // eax
    unsigned short v2;  // ax
    int v0;  // [bp-0x28], Other Possible Types: unsigned int

    v0 = 1;
    v1 = g_616928(0, v0);
    *(unsigned short *)&v0 = _INSERT(v1, 0, v1 != 0);
    v2 = sub_48a7b0(a0, v0);
    if (v2 == 8)
        return sub_488720(a0, 3);
    if ((short)v2 <= 8)
    {
        if (v2 == 2)
        {
            v0 = 0;
        }
        else if (v2 == 4)
        {
            v0 = 1;
        }
        else
        {
            return v2;
        }
    }
    else
    {
        if (v2 == 32)
        {
            v0 = 4;
        }
        else if (v2 == 64)
        {
            v0 = 5;
        }
        else
        {
            return v2;
        }
    }
    return sub_488720(a0);
}

