// Instance__10CPathTrackP7edict_s @0xe77a0 size=99
typedef struct st_4e77a0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4e77a0_0;

extern st_4e77a0_0 *gpGlobals;

unsigned int Instance__10CPathTrackP7edict_s(unsigned int *a0)
{
    return (!strcmp@GLIBC_2.0(*(!a0 ? NULL : a0 + 32) + gpGlobals->field_98, "path_track") ? (!a0 ? 0 : a0[31]) : 0);
}

