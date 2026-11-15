// Use__7CSpriteP11CBaseEntityT18USE_TYPEf @0xb3d70 size=102
typedef struct st_4b3d70_0 {
    char padding_0[280];
    unsigned int field_118;
} st_4b3d70_0;

unsigned int Use__7CSpriteP11CBaseEntityT18USE_TYPEf(st_4b3d70_0 **a0, unsigned int a1, unsigned int a2, int a3)
{
    int v0;  // esi
    unsigned int v1;  // eax

    v0 = *a0->field_118 != 128;
    v1 = sub_48ab90(a0, a3, v0);
    if (!v1)
        return v1;
    return (!v0 ? sub_487b90(a0) : sub_48df90(a0));
}

