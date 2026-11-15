// SetSwoopAnim__6CSwoopPcR8Activity @0x124790 size=256
typedef struct st_524790_0 {
    unsigned int field_0;
    unsigned short field_4;
    char field_6;
} st_524790_0;

extern char _GLOBAL_OFFSET_TABLE_;

unsigned int SetSwoopAnim__6CSwoopPcR8Activity(unsigned int *a0, st_524790_0 *a1, unsigned int *a2)
{
    unsigned int v0;  // eax

    a1->field_0 = 1869576051;
    a1->field_4 = 24432;
    a1->field_6 = 0;
    if (*a0 > 5)
    {
        v0 = strcat@GLIBC_2.0(a1, "forward");
        *a2 = 99;
        return v0;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *a0] - 979708)]));
}

