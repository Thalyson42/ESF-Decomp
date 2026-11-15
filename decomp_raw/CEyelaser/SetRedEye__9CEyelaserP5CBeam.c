// SetRedEye__9CEyelaserP5CBeam @0xbcc00 size=59
typedef struct st_4bcc00_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4bcc00_0;

int SetRedEye__9CEyelaserP5CBeam(unsigned int a0, st_4bcc00_0 **a1)
{
    *a1->field_148 = *a1->field_148 & 240 | 2;
    return CBeam::RelinkBeam(a1);
}

