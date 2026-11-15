// __opP11CBaseEntity__7EHANDLE @0x9cd80 size=49
typedef struct st_49cd80_0 {
    char padding_0[124];
    unsigned int field_7c;
} st_49cd80_0;

unsigned int __opP11CBaseEntity__7EHANDLE(int a0)
{
    st_49cd80_0 *v0;  // eax

    v0 = EHANDLE::Get(a0);
    return (!v0 ? 0 : v0->field_7c);
}

