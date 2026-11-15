// ObjectCaps__11CBaseButton @0x98f90 size=41
typedef struct st_498f90_0 {
    char padding_0[364];
    float field_16c;
} st_498f90_0;

unsigned int ObjectCaps__11CBaseButton(st_498f90_0 **a0)
{
    unsigned int v0;  // edx

    v0 = 0;
    if (*a0->field_16c == 0.0f)
        v0 = 8;
    return v0;
}

