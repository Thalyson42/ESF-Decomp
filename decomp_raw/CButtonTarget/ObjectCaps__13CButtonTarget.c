// ObjectCaps__13CButtonTarget @0x98ef0 size=29
typedef struct st_498ef0_0 {
    char padding_0[416];
    char field_1a0;
} st_498ef0_0;

unsigned int ObjectCaps__13CButtonTarget(st_498ef0_0 **a0)
{
    return (!(*a0->field_1a0 & 1) ? 0 : 8);
}

