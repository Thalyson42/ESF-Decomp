// SetStartPos__5CBeamRC6Vector @0xb70d0 size=32
typedef struct st_4b70d0_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4b70d0_0;

unsigned int SetStartPos__5CBeamRC6Vector(st_4b70d0_0 **a0, unsigned int *a1)
{
    unsigned int *v0;  // ecx
    unsigned int v1;  // eax

    v0 = *a0;
    v0[2] = *a1;
    v0[3] = a1[1];
    v1 = a1[2];
    v0[4] = v1;
    return v1;
}

