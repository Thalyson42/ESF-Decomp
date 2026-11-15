// COM_TokenWaiting__FPc @0xdde80 size=102
unsigned int COM_TokenWaiting__FPc(char *i)
{
    for (; *i && *i != 10; i += 1)
    {
        if (!isspace@GLIBC_2.0(*i) || isalnum@GLIBC_2.0(*i))
            return 1;
    }
    return 0;
}

