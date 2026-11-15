// PointEntInit__5CBeamRC6Vectori @0xafe80 size=126
typedef struct st_4afe80_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[252];
    unsigned int field_110;
    char padding_114[20];
    unsigned int field_128;
    char padding_12c[28];
    unsigned int field_148;
} st_4afe80_0;

int PointEntInit__5CBeamRC6Vectori(st_4afe80_0 **a0, unsigned int *a1, int a2)
{
    st_4afe80_0 *v0;  // edx

    *a0->field_148 = *a0->field_148 & 240 | 1;
    v0 = *a0;
    v0->field_8 = *a1;
    v0->field_c = a1[1];
    v0->field_10 = a1[2];
    CBeam::SetEndEntity(a0, a2);
    *a0->field_128 = *a0->field_128 & 0xfff;
    *a0->field_110 = *a0->field_110 & 0xfff;
    return CBeam::RelinkBeam(a0);
}

