// IsAttack__FP7edict_s @0x17cb50 size=267
typedef struct st_57cb50_0 {
    char padding_0[128];
    unsigned int field_80;
} st_57cb50_0;

char IsAttack__FP7edict_s(st_57cb50_0 *a0)
{
    char v0;  // [bp-0x5]

    if (a0 && !(char)IsNull(a0) && a0->field_80)
    {
        v0 = 0;
        if ((char)IsBeamAttack(a0) || (char)IsNonBeamAttack(a0) || (char)IsKiBall(a0) || (char)IsOtherAttack(a0))
            v0 = 1;
        return v0;
    }
    return 0;
}

