// Rotate__13CFuncRotating @0x927e0 size=44
typedef struct st_4927e0_0 {
    char padding_0[256];
    float field_100;
    float field_104;
} st_4927e0_0;

unsigned int * Rotate__13CFuncRotating(st_4927e0_0 **a0)
{
    float *v0;  // eax

    v0 = *a0;
    v0[65] = (float)(v0[64] + 10.0);
    return v0;
}

