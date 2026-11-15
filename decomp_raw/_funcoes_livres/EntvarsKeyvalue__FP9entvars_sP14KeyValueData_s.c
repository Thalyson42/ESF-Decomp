// EntvarsKeyvalue__FP9entvars_sP14KeyValueData_s @0x135a70 size=788
typedef struct st_535a70_1 {
    char padding_0[4];
    int field_4;
    char padding_8[4];
    unsigned int field_c;
} st_535a70_1;

typedef struct st_535a70_0 {
    unsigned int field_0;
    int field_4;
} st_535a70_0;

typedef struct st_535a70_2 {
    unsigned int field_0;
} st_535a70_2;

extern unsigned int gEntvarsDescription[4];
extern char _GLOBAL_OFFSET_TABLE_;
extern st_535a70_2 *g_engfuncs.pfnAlertMessage;

unsigned int EntvarsKeyvalue__FP9entvars_sP14KeyValueData_s(unsigned int a0, st_535a70_1 *a1)
{
    unsigned int v0;  // edi
    st_535a70_0 *v1;  // esi
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v0 = 0;
    while (1)
    {
        v1 = &gEntvarsDescription[4 * v0];
        v2 = strcasecmp@GLIBC_2.0(v1->field_4, a1->field_4);
        if (!v2)
            break;
        v0 += 1;
        if (v0 > 0x55)
            return v2;
    }
    if (v1->field_0 > 0x11)
    {
        v3 = g_engfuncs.pfnAlertMessage(4, "Bad field in entity!!\n");
        a1->field_c = 1;
        return v3;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v1->field_0] - 909324)]));
}

