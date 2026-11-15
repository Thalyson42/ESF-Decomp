// Holster__9CEyelaseri @0xbcda0 size=71
typedef struct st_4bcda0_0 {
    char padding_0[196];
    int field_c4;
    int field_c8;
    char padding_cc[8];
    char field_d4;
} st_4bcda0_0;

unsigned int Holster__9CEyelaseri(st_4bcda0_0 *a0)
{
    unsigned int v0;  // eax

    CEyelaser::DestroyLaser(a0, a0->field_c4);
    v0 = CEyelaser::DestroyLaser(a0, a0->field_c8);
    a0->field_d4 = 0;
    return v0;
}

