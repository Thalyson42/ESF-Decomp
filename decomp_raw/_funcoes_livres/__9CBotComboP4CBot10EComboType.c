// __9CBotComboP4CBot10EComboType @0x15c9e0 size=33749
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int * __9CBotComboP4CBot10EComboType(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    memset(ptr, 0, 12);
    ptr[3] = a1;
    ptr[4] = 0;
    ptr[5] = 33;
    if (a2 > 37)
    {
        ptr[4] = 2;
        return ptr;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a2] - 749724)]));
}

