// SetEndPos__5CBeamRC6Vector @0xb70f0 size=32
typedef struct st_4b70f0_0 {
    char padding_0[80];
    unsigned int field_50;
    unsigned int field_54;
    unsigned int field_58;
} st_4b70f0_0;

unsigned int SetEndPos__5CBeamRC6Vector(st_4b70f0_0 **a0, unsigned int *a1)
{
    unsigned int *v0;  // ecx
    unsigned int v1;  // eax

    v0 = *a0;
    v0[20] = *a1;
    v0[21] = a1[1];
    v1 = a1[2];
    v0[22] = v1;
    return v1;
}

