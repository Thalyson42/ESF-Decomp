// EntsInit__5CBeamii @0xaff00 size=117
typedef struct st_4aff00_0 {
    char padding_0[272];
    unsigned int field_110;
    char padding_114[20];
    unsigned int field_128;
    char padding_12c[28];
    unsigned int field_148;
} st_4aff00_0;

int EntsInit__5CBeamii(st_4aff00_0 **a0, int a1, int a2)
{
    *a0->field_148 = *a0->field_148 & 240 | 2;
    CBeam::SetStartEntity(a0, a1);
    CBeam::SetEndEntity(a0, a2);
    *a0->field_128 = *a0->field_128 & 0xfff;
    *a0->field_110 = *a0->field_110 & 0xfff;
    return CBeam::RelinkBeam(a0);
}

