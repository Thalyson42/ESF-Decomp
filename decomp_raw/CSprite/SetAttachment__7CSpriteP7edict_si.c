// SetAttachment__7CSpriteP7edict_si @0xb6e60 size=100
typedef struct st_4b6e60_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[4];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[124];
    unsigned int field_194;
} st_4b6e60_0;

typedef struct st_4b6e60_1 {
    unsigned int field_0;
} st_4b6e60_1;

extern st_4b6e60_1 *g_6168dc;

unsigned int * SetAttachment__7CSpriteP7edict_si(st_4b6e60_0 **a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // eax
    unsigned int *v1;  // eax
    unsigned int *v2;  // eax

    if (!a1)
        return v2;
    v0 = g_6168dc(a1);
    *a0->field_110 = v0;
    *a0->field_114 = a2;
    *a0->field_194 = a1;
    v1 = *a0;
    v1[66] = 12;
    return v1;
}

