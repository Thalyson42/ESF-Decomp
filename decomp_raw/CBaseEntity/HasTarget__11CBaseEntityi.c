// HasTarget__11CBaseEntityi @0x9ded0 size=76
typedef struct st_49ded0_1 {
    char padding_0[460];
    unsigned int field_1cc;
} st_49ded0_1;

typedef struct st_49ded0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_49ded0_0;

extern st_49ded0_0 *gpGlobals;

char HasTarget__11CBaseEntityi(st_49ded0_1 **a0, unsigned int a1)
{
    return !sub_488af0(a1 + gpGlobals->field_98, gpGlobals->field_98 + *a0->field_1cc);
}

