// KeyValue__4CFogP14KeyValueData_s @0xbf1d0 size=1463
typedef struct st_4bf1d0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4bf1d0_0;

typedef struct st_4bf1d0_1 {
    char padding_0[100];
    unsigned int field_64;
    unsigned int field_68;
    unsigned int field_6c;
    float field_70;
    float field_74;
} st_4bf1d0_1;

unsigned int KeyValue__4CFogP14KeyValueData_s(st_4bf1d0_1 *a0, st_4bf1d0_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    double v4;  // mm7
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    double v7;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "m_iColorR"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_64 = v0;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_iColorG"))
    {
        v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_68 = v1;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_iColorB"))
    {
        v2 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_6c = v2;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_flNear"))
    {
        v3 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_74 = (float)v4;
        return v3;
    }
    else
    {
        v5 = strcmp@GLIBC_2.0(a1->field_4, "m_flFar");
        if (v5)
        {
            a1->field_c = 0;
            return v5;
        }
        v6 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_70 = (float)v7;
        return v6;
    }
}

