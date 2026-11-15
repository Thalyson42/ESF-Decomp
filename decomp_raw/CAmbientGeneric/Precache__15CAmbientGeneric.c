// Precache__15CAmbientGeneric @0x11a9d0 size=255
typedef struct st_51a9d0_2 {
    char padding_0[468];
    unsigned int field_1d4;
} st_51a9d0_2;

typedef struct st_51a9d0_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_51a9d0_0;

typedef struct st_51a9d0_1 {
    unsigned int field_0;
} st_51a9d0_1;

extern st_51a9d0_1 *g_6167c4;
extern st_51a9d0_0 *gpGlobals;

unsigned int * Precache__15CAmbientGeneric(float a0)
{
    char *v3;  // edx
    unsigned int v4;  // ecx
    char *v5;  // edi
    char *v6;  // edi
    st_51a9d0_2 *v7;  // eax
    char *v0;  // [bp-0x18]
    float v1;  // [bp-0xc]

    v3 = gpGlobals->field_98 + *(int *)(*(int *)a0 + 468);
    v0 = v3;
    if (*(int *)(*(int *)a0 + 468))
    {
        v4 = 0xffffffff;
        v5 = v3;
        do
        {
            v6 = v5;
        } while (v4 && (v4 -= 1, v5 = v6 + 1, *v6));
        if (~v4 - 1 > 1 && *v3 != 33)
            g_6167c4(v3);
    }
    sub_48a760(a0);
    v7 = *(int *)a0;
    if (!(v7->padding_0[416] & 16) && *(int *)(*(unsigned int *)&a0 + 208))
        *(unsigned int *)(*(unsigned int *)&a0 + 0xcc) = 1;
    if (!*(int *)(*(unsigned int *)&a0 + 0xcc))
        return v7;
    v1 = (float)((double)*(int *)(*(unsigned int *)&a0 + 180) * 0.01);
    sub_4897b0(*(int *)(*(int *)a0 + 520), *(int *)a0 + 8, v0, v1, *(float *)(*(unsigned int *)&a0 + 100), 0x100, *(int *)(*(unsigned int *)&a0 + 164));
    *(float *)(*(int *)a0 + 260) = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

