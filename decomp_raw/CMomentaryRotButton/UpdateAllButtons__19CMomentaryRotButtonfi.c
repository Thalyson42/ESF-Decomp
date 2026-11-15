// UpdateAllButtons__19CMomentaryRotButtonfi @0x98200 size=258
typedef struct st_498200_0 {
    char padding_0[456];
    unsigned int field_1c8;
} st_498200_0;

typedef struct st_498200_1 {
    char padding_0[152];
    unsigned int field_98;
} st_498200_1;

typedef struct st_498200_2 {
    unsigned int field_0;
} st_498200_2;

extern st_498200_2 *g_6167f8;
extern st_498200_2 *g_6168d8;
extern st_498200_1 *gpGlobals;

unsigned int * UpdateAllButtons__19CMomentaryRotButtonfi(st_498200_0 **a0, int a1, unsigned int a2)
{
    unsigned int *v1;  // edi
    unsigned int *v2;  // eax
    int v3;  // eax
    unsigned int v0;  // [bp-0x8]

    v1 = NULL;
    while (1)
    {
        v2 = g_6167f8(v1, "target", *a0->field_1c8 + gpGlobals->field_98);
        v1 = v2;
        v0 = 0;
        if (!v1 || (v2 = g_6168d8(v1), !v2))
            v0 = 1;
        if (v0)
            break;
        if (!sub_488af0(*(!v1 ? NULL : v1 + 32) + gpGlobals->field_98, "momentary_rot_button"))
        {
            v3 = (!v1 ? 0 : v1[31]);
            if (v3)
            {
                if (a2)
                    sub_48adf0(v3, a1);
                else
                    sub_48c7e0(v3, a1);
            }
        }
    }
    return v2;
}

