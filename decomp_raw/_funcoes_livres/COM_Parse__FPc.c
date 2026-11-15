// COM_Parse__FPc @0xddd90 size=240
extern char com_token;
extern char g_616b81;

char * COM_Parse__FPc(char *a0)
{
    char *node;  // ecx
    unsigned int iter;  // esi
    unsigned int v2;  // edx
    unsigned int v3;  // edx

    node = a0;
    iter = 0;
    com_token = 0;
    if (!node)
        return NULL;
    while (1)
    {
        while (1)
        {
            v2 = *node;
            if ((int)v2 <= 32)
                break;
            if (v2 != 47 || node[1] != 47)
            {
                switch (v2)
                {
                case 34:
                    node += 1;
                    while (1)
                    {
                        v3 = *node;
                        node += 1;
                        if (v3 == 0x22 || !v3)
                            break;
                        (&com_token)[iter] = v3;
                        iter += 1;
                    }
                case 39: case 40: case 41: case 44: case 123: case 125:
                    com_token = v2;
                    g_616b81 = 0;
                    return node + 1;
                default:
                    do
                    {
                        (&com_token)[iter] = v2;
                        node += 1;
                        iter += 1;
                        v2 = *node;
                    } while (v2 != 123 && v2 != 125 && v2 != 41 && v2 != 40 && v2 != 39 && v2 != 44 && (int)v2 > 32);
                }
                (&com_token)[iter] = 0;
                return node;
            }
            else if (*node && *node != 10)
            {
                do
                {
                    node += 1;
                } while (*node && *node != 10);
            }
        }
        if (!v2)
            break;
        node += 1;
    }
    return NULL;
}

