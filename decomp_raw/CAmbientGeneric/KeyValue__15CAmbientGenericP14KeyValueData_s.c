// KeyValue__15CAmbientGenericP14KeyValueData_s @0x11b3f0 size=4259
typedef struct st_51b3f0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_51b3f0_0;

typedef struct st_51b3f0_1 {
    char padding_0[104];
    unsigned int field_68;
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    char padding_7c[4];
    int field_80;
    int field_84;
    int field_88;
    unsigned int field_8c;
    int field_90;
    int field_94;
    int field_98;
    int field_9c;
    char padding_a0[8];
    unsigned int field_a8;
    unsigned int field_ac;
    char padding_b0[8];
    unsigned int field_b8;
    unsigned int field_bc;
} st_51b3f0_1;

unsigned int KeyValue__15CAmbientGenericP14KeyValueData_s(st_51b3f0_1 *a0, st_51b3f0_0 *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    int v3;  // eax
    int v4;  // eax
    int v5;  // eax
    int v6;  // eax
    int v7;  // eax
    unsigned int v8;  // eax

    if (!strcmp@GLIBC_2.0(a1->field_4, "preset"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_68 = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "pitch"))
    {
        v1 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_6c = v1;
        a1->field_c = 1;
        if (a0->field_6c > 0xff)
            a0->field_6c = 0xff;
        if (a0->field_6c >= 0)
            return v1;
        a0->field_6c = 0;
        return v1;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "pitchstart"))
    {
        v2 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_70 = v2;
        a1->field_c = 1;
        if (a0->field_70 > 0xff)
            a0->field_70 = 0xff;
        if (a0->field_70 >= 0)
            return v2;
        a0->field_70 = 0;
        return v2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "spinup"))
    {
        v3 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_74 = v3;
        if (v3 > 100)
            a0->field_74 = 100;
        if (a0->field_74 < 0)
            a0->field_74 = 0;
        if (a0->field_74 > 0)
            a0->field_74 = (101 - a0->field_74) * 64;
        v0 = a0->field_74;
        a0->field_a8 = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "spindown"))
    {
        v4 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_78 = v4;
        if (v4 > 100)
            a0->field_78 = 100;
        if (a0->field_78 < 0)
            a0->field_78 = 0;
        if (a0->field_78 > 0)
            a0->field_78 = (101 - a0->field_78) * 64;
        v0 = a0->field_78;
        a0->field_ac = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "volstart"))
    {
        v5 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_80 = v5;
        if (v5 > 10)
            a0->field_80 = 10;
        if (a0->field_80 < 0)
            a0->field_80 = 0;
        v0 = a0->field_80 * 10;
        a0->field_80 = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "fadein"))
    {
        v6 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_84 = v6;
        if (v6 > 100)
            a0->field_84 = 100;
        if (a0->field_84 < 0)
            a0->field_84 = 0;
        if (a0->field_84 > 0)
            a0->field_84 = (101 - a0->field_84) * 64;
        v0 = a0->field_84;
        a0->field_b8 = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "fadeout"))
    {
        v7 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_88 = v7;
        if (v7 > 100)
            a0->field_88 = 100;
        if (a0->field_88 < 0)
            a0->field_88 = 0;
        if (a0->field_88 > 0)
            a0->field_88 = (101 - a0->field_88) * 64;
        v0 = a0->field_88;
        a0->field_bc = v0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "lfotype"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_8c = v0;
        if ((int)v0 > 4)
            a0->field_8c = 2;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "lforate"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_90 = v0;
        if ((int)v0 > 1000)
            a0->field_90 = 1000;
        if (a0->field_90 < 0)
            a0->field_90 = 0;
        a0->field_90 = a0->field_90 * 0x100;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "lfomodpitch"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_94 = v0;
        if ((int)v0 > 100)
            a0->field_94 = 100;
        if (a0->field_94 < 0)
            a0->field_94 = 0;
    }
    else if (!strcmp@GLIBC_2.0(a1->field_4, "lfomodvol"))
    {
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_98 = v0;
        if ((int)v0 > 100)
            a0->field_98 = 100;
        if (a0->field_98 < 0)
            a0->field_98 = 0;
    }
    else
    {
        v8 = strcmp@GLIBC_2.0(a1->field_4, "cspinup");
        if (v8)
        {
            a1->field_c = 0;
            return v8;
        }
        v0 = __strtol_internal@GLIBC_2.0(a1->field_8, 0, 10, 0);
        a0->field_9c = v0;
        if ((int)v0 > 100)
            a0->field_9c = 100;
        if (a0->field_9c < 0)
            a0->field_9c = 0;
    }
    a1->field_c = 1;
    return v0;
}

