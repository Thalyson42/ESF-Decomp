// ObjectCaps__19CMomentaryRotButton @0x98fc0 size=30
typedef struct st_498fc0_0 {
    char padding_0[416];
    char field_1a0;
} st_498fc0_0;

unsigned int ObjectCaps__19CMomentaryRotButton(st_498fc0_0 **a0)
{
    return (!(*a0->field_1a0 & 1) ? 16 : 0);
}

