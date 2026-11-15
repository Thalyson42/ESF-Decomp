// IsInWorld__11CBaseEntity @0x9d830 size=303
unsigned int IsInWorld__11CBaseEntity(unsigned int *a0)
{
    if (4096.0 > *(float *)(*a0 + 8) && 4096.0 > *(float *)(*a0 + 12) && 4096.0 > *(float *)(*a0 + 16) && -4096.0f < *(float *)(*a0 + 8) && -4096.0f < *(float *)(*a0 + 12) && -4096.0f < *(float *)(*a0 + 16) && 2000.0 > *(float *)(*a0 + 32) && 2000.0 > *(float *)(*a0 + 36) && 2000.0 > *(float *)(*a0 + 40) && -2000.0f < *(float *)(*a0 + 32) && -2000.0f < *(float *)(*a0 + 36) && -2000.0f < *(float *)(*a0 + 40))
        return 1;
    return 0;
}

