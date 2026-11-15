// BeamCreate__5CBeamPCci @0xafc30 size=86
typedef struct st_4afc30_0 {
    unsigned int field_0;
} st_4afc30_0;

typedef struct st_4afc30_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4afc30_1;

extern st_4afc30_1 *gpGlobals;

st_4afc30_0 ** BeamCreate__5CBeamPCci(int a0, int a1)
{
    st_4afc30_0 **v0;  // edi

    v0 = sub_48a470(0);
    *(char **)*v0 = -1 * gpGlobals->field_98 + 5887624;
    sub_48af10(v0, a0, a1);
    return v0;
}

