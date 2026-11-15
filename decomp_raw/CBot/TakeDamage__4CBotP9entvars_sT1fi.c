// TakeDamage__4CBotP9entvars_sT1fi @0x174c60 size=117
typedef struct st_574c60_0 {
    float field_0;
} st_574c60_0;

extern st_574c60_0 *gpGlobals;

unsigned int TakeDamage__4CBotP9entvars_sT1fi(unsigned int *a0, int a1, int a2, float a3, int a4)
{
    unsigned int v3;  // eax
    int v0;  // [bp-0xc]
    unsigned short v1;  // [bp-0x8]
    unsigned short v2;  // [bp-0x6]

    v3 = sub_488550(a0, a1, a2, a3, a4);
    if (v3)
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)a3;
        a0[687] = v0;
        *(float *)&a0[686] = *(float *)gpGlobals;
    }
    return v3;
}

