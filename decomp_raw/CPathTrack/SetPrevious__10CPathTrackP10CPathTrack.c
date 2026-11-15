// SetPrevious__10CPathTrackP10CPathTrack @0xe71a0 size=85
typedef struct st_4e71a0_2 {
    struct st_4e71a0_0 *field_0;
} st_4e71a0_2;

typedef struct st_4e71a0_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_4e71a0_0;

typedef struct st_4e71a0_1 {
    char padding_0[104];
    unsigned int field_68;
    char padding_6c[4];
    struct st_4e71a0_2 *field_70;
} st_4e71a0_1;

typedef struct st_4e71a0_3 {
    char padding_0[152];
    unsigned int field_98;
} st_4e71a0_3;

extern st_4e71a0_3 *gpGlobals;

unsigned int SetPrevious__10CPathTrackP10CPathTrack(st_4e71a0_1 *a0, st_4e71a0_0 **a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a1)
        return v1;
    v0 = sub_488af0(*a1->field_1cc + gpGlobals->field_98, gpGlobals->field_98 + a0->field_68);
    if (!v0)
        return v0;
    a0->field_70 = a1;
    return v0;
}

