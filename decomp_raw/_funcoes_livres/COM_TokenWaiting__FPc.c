// COM_TokenWaiting__FPc @0xdde80 size=102
unsigned int COM_TokenWaiting__FPc(char *i)
{
    for (; *i && *i != 10; i += 1)
    {
        if (!sub_488b30(*i) || sub_489680(*i))
            return 1;
    }
    return 0;
}

