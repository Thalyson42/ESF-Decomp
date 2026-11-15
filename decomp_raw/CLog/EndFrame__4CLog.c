// EndFrame__4CLog @0x16dc30 size=54
typedef struct st_56dc30_0 {
    char padding_0[1];
    char field_1;
    char padding_2[2];
    int field_4;
} st_56dc30_0;

unsigned int EndFrame__4CLog(st_56dc30_0 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_4)
        v0 = fclose@GLIBC_2.1(a0->field_4);
    a0->field_1 = 0;
    return v0;
}

