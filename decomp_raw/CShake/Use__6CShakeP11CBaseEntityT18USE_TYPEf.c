// Use__6CShakeP11CBaseEntityT18USE_TYPEf @0xb5e30 size=91
typedef struct st_4b5e30_0 {
    char padding_0[8];
    char field_8;
    char padding_9[315];
    float field_144;
    char padding_148[144];
    float field_1d8;
    float field_1dc;
    float field_1e0;
} st_4b5e30_0;

int Use__6CShakeP11CBaseEntityT18USE_TYPEf(st_4b5e30_0 **a0)
{
    st_4b5e30_0 *v0;  // eax

    v0 = *a0;
    return sub_48b7f0(&v0->field_8, v0->field_144, v0->field_1dc, v0->field_1d8, v0->field_1e0);
}

