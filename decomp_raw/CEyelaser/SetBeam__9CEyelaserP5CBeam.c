// SetBeam__9CEyelaserP5CBeam @0xbcc40 size=59
typedef struct st_4bcc40_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4bcc40_0;

int SetBeam__9CEyelaserP5CBeam(unsigned int a0, st_4bcc40_0 **a1)
{
    *a1->field_148 = *a1->field_148 & 240 | 1;
    return CBeam::RelinkBeam(a1);
}

