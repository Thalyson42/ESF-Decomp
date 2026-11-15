// BlobThink__5CBlob @0xcafd0 size=193
typedef struct st_4cafd0_0 {
    float field_0;
} st_4cafd0_0;

extern st_4cafd0_0 *gpGlobals;

unsigned int * BlobThink__5CBlob(float a0)
{
    unsigned int *v8;  // eax
    unsigned int *v9;  // edx
    float v0;  // [bp-0x60]
    float v1;  // [bp-0x5c]
    unsigned int v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x54]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]

    if (*(float *)gpGlobals - 7.0 <= *(float *)(*(unsigned int *)&a0 + 104))
    {
        v8 = *(int *)a0;
        v9 = v8 + 2;
        *(float *)&v4 = *(float *)&v8[2];
        *(float *)&v5 = *(float *)&v9[1];
        *(float *)&v6 = *(float *)&v9[2];
        v3 = 0x4000000;
        v2 = 0;
        v1 = (float)*(int *)(*(unsigned int *)&a0 + 100);
        v0 = (float)(*(float *)&v8[120] * 0.5);
        RadiusDamage(&v4, *(int *)a0, (!v8[0x66] ? 0 : v8[0x66] + 128));
        *(float *)(*(int *)a0 + 260) = (float)(0.25 + *(float *)gpGlobals);
        return gpGlobals;
    }
    return CBlob::Remove(a0);
}

