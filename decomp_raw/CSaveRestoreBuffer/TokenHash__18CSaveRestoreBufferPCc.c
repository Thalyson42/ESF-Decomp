// TokenHash__18CSaveRestoreBufferPCc @0x135490 size=212
typedef struct st_535490_0 {
    char padding_0[20];
    unsigned int field_14;
    struct st_535490_1 *field_18;
} st_535490_0;

typedef struct st_535490_1 {
    int field_0;
} st_535490_1;

extern st_535490_1 *g_engfuncs.pfnAlertMessage;

unsigned int TokenHash__18CSaveRestoreBufferPCc(st_535490_0 **a0, int a1)
{
    unsigned int v3;  // eax
    st_535490_0 *v4;  // edi
    unsigned int i;  // edi
    unsigned int idx;  // esi
    st_535490_0 *v0;  // [bp-0x10]
    st_535490_0 *v1;  // [bp-0xc]
    unsigned short v2;  // [bp-0x6]

    v3 = CSaveRestoreBuffer::HashString(a0, a1);
    v4 = *a0;
    v0 = v4;
    v1 = v4;
    v2 = v3 % v4->field_14;
    i = 0;
    if (0 < (int)v0->field_14)
    {
        do
        {
            idx = i + v2;
            if ((int)idx >= (int)v1->field_14)
                idx -= v1->field_14;
            if (!*(int *)&*a0->field_18[idx] || !strcmp@GLIBC_2.0(a1, *(int *)&*a0->field_18[idx]))
            {
                *(int *)&*a0->field_18[idx] = a1;
                return (unsigned short)idx;
            }
            i += 1;
            v1 = *a0;
        } while ((int)i < (int)*a0->field_14);
    }
    g_engfuncs.pfnAlertMessage(4, "CSaveRestoreBuffer :: TokenHash() is COMPLETELY FULL!");
    return 0;
}

