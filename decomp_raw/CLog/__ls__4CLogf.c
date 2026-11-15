// __ls__4CLogf @0x16d820 size=199
typedef struct st_56d820_0 {
    char padding_0[1];
    char field_1;
    char padding_2[2];
    int field_4;
} st_56d820_0;

st_56d820_0 * __ls__4CLogf(st_56d820_0 *a0, float a1)
{
    int v2;  // edx
    char v0;  // [bp-0x104]
    char v1;  // [bp-0x103]

    if (!a0->field_1)
    {
        a0->field_1 = 1;
        v0 = 0;
        memset@GLIBC_2.0(&v1, 0, 0xff);
        BuildBotFileName(&v0, "bot_log.txt", 0);
        v2 = fopen@GLIBC_2.1(&v0, "a");
        a0->field_4 = v2;
        fprintf@GLIBC_2.0(v2, "\n----------------------------------------------------------\n\n");
    }
    if (a0->field_4)
    {
        fprintf@GLIBC_2.0(a0->field_4, "%f", (unsigned int)(a1 >> 0));
        fflush@GLIBC_2.0(a0->field_4);
    }
    return a0;
}

