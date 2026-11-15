// KeyValue__11CGibShooterP14KeyValueData_s @0xb3f30 size=1188
typedef struct st_4b3f30_1 {
    char padding_0[108];
    unsigned int field_6c;
    unsigned int field_70;
    char padding_74[8];
    float field_7c;
    float field_80;
    float field_84;
} st_4b3f30_1;

typedef struct st_4b3f30_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4b3f30_0;

unsigned int KeyValue__11CGibShooterP14KeyValueData_s(st_4b3f30_1 *a0, st_4b3f30_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    double v2;  // mm7
    unsigned int v3;  // eax
    double v4;  // mm7
    unsigned int v5;  // eax
    double v6;  // mm7

    if (!strcmp@GLIBC_2.0(a1->field_4, "m_iGibs"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_70 = v0;
        a0->field_6c = v0;
        a1->field_c = 1;
        return v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_flVelocity"))
    {
        v1 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_7c = (float)v2;
        a1->field_c = 1;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_flVariance"))
    {
        v3 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_80 = (float)v4;
        a1->field_c = 1;
        return v3;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "m_flGibLife"))
    {
        v5 = __strtod_internal@GLIBC_2.0(a1->field_8, 0, 0);
        a0->field_84 = (float)v6;
        a1->field_c = 1;
        return v5;
    }
    else
    {
        return CBaseDelay::KeyValue(a0, a1);
    }
}

