// EntIsInFieldOfView__FP11CBaseEntityT0 @0x17ecd0 size=55
typedef struct st_57ecd0_0 {
    char padding_0[520];
    int field_208;
} st_57ecd0_0;

int EntIsInFieldOfView__FP11CBaseEntityT0(st_57ecd0_0 **a0, unsigned int *a1)
{
    return FInViewCone(*a1 + 8, *a0->field_208);
}

