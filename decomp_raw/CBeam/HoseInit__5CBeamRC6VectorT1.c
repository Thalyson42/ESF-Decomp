// HoseInit__5CBeamRC6VectorT1 @0xafdf0 size=132
typedef struct st_4afdf0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[60];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
    char padding_5c[180];
    unsigned int field_110;
    char padding_114[20];
    unsigned int field_128;
    char padding_12c[28];
    unsigned int field_148;
} st_4afdf0_0;

int HoseInit__5CBeamRC6VectorT1(st_4afdf0_0 **a0, unsigned int *a1, unsigned int *a2)
{
    st_4afdf0_0 *v0;  // edx
    st_4afdf0_0 *v1;  // edx

    *a0->field_148 = *a0->field_148 & 240 | 3;
    v0 = *a0;
    v0->field_8 = *a1;
    v0->field_c = a1[1];
    v0->field_10 = a1[2];
    v1 = *a0;
    v1->field_50 = *a2;
    v1->field_54 = a2[1];
    v1->field_58 = a2[2];
    *a0->field_128 = *a0->field_128 & 0xfff;
    *a0->field_110 = *a0->field_110 & 0xfff;
    return sub_48bc90(a0);
}

