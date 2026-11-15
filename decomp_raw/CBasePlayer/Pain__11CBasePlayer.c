// Pain__11CBasePlayer @0xefb60 size=106
typedef struct st_4efb60_0 {
    char padding_0[1220];
    unsigned int field_4c4;
} st_4efb60_0;

typedef struct st_4efb60_1 {
    unsigned int field_0;
} st_4efb60_1;

extern st_4efb60_1 *g_616928;

int Pain__11CBasePlayer(st_4efb60_0 *a0)
{
    unsigned int v2;  // eax
    char v0;  // [bp-0x104]

    if (a0->field_4c4)
        return v2;
    sub_48d990(&v0, "pain%d.wav", g_616928(1, 4));
    return sub_48d4f0(a0, &v0);
}

