// ObjectCaps__9CBaseDoor @0xadac0 size=30
typedef struct st_4adac0_0 {
    char padding_0[417];
    char field_1a1;
} st_4adac0_0;

unsigned int ObjectCaps__9CBaseDoor(st_4adac0_0 **a0)
{
    return (!(*a0->field_1a1 & 1) ? 0 : 8);
}

