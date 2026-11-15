// IsDormant__11CBaseEntity @0x9d810 size=23
typedef struct st_49d810_0 {
    char padding_0[420];
    unsigned int field_1a4;
} st_49d810_0;

unsigned int IsDormant__11CBaseEntity(st_49d810_0 **a0)
{
    return *a0->field_1a4 & 0x80000000;
}

