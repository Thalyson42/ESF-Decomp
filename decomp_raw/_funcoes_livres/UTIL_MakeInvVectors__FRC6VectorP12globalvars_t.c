// UTIL_MakeInvVectors__FRC6VectorP12globalvars_t @0x131ec0 size=141
typedef struct st_531ec0_0 {
    unsigned int field_0;
} st_531ec0_0;

extern st_531ec0_0 *g_engfuncs.pfnMakeVectors;

float UTIL_MakeInvVectors__FRC6VectorP12globalvars_t(unsigned int a0, unsigned int *a1)
{
    unsigned int *v3;  // eax
    unsigned int v4;  // 128
    unsigned int v5;  // 128
    float v6;  // 128
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    g_engfuncs.pfnMakeVectors(a0);
    v3 = a1 + 16;
    v0 = (float)(-1.0 * *(float *)&a1[16]);
    v1 = (float)(-1.0 * *(float *)&v3[1]);
    v2 = (float)(-1.0 * *(float *)&v3[2]);
    *(float *)&a1[16] = v0;
    *(float *)&a1[0x11] = v1;
    *(float *)&a1[18] = v2;
    v4 = *&a1[11];
    *(float *)&a1[11] = *(float *)&a1[16];
    a1[16] = v4;
    v5 = *&a1[12];
    *(float *)&a1[12] = *(float *)&a1[13];
    a1[13] = v5;
    v6 = *(float *)&a1[18];
    *(float *)&a1[18] = *(float *)&a1[14];
    *(float *)&a1[14] = v6;
    return v2;
}

