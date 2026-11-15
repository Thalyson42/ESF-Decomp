// StrikeThink__6CLaser @0xb3340 size=156
typedef struct st_4b3340_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4b3340_1;

typedef struct st_4b3340_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4b3340_0;

extern st_4b3340_0 *gpGlobals;

unsigned int * StrikeThink__6CLaser(float idx)
{
    st_4b3340_1 **v2;  // eax
    unsigned int *v3;  // edx
    char v0;  // [bp-0x44]

    v2 = sub_488440(idx, *(int *)(*(int *)idx + 468) + gpGlobals->field_98);
    if (v2)
    {
        v3 = *v2;
        *(unsigned int *)(*(unsigned int *)&idx + 108) = v3[2];
        *(unsigned int *)(*(unsigned int *)&idx + 112) = v3[3];
        *(unsigned int *)(*(unsigned int *)&idx + 116) = v3[4];
    }
    sub_487b80(*(int *)idx + 8, *(unsigned int *)&idx + 108, 0, 0, &v0);
    sub_489180(idx, &v0);
    *(float *)(*(int *)idx + 260) = (float)(0.1 + gpGlobals->field_0);
    return gpGlobals;
}

