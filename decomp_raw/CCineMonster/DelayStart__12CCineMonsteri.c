// DelayStart__12CCineMonsteri @0x115b30 size=320
typedef struct st_515b30_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_515b30_0;

typedef struct st_515b30_3 {
    char padding_0[708];
    int field_2c4;
    float field_2c8;
} st_515b30_3;

typedef struct st_515b30_1 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_515b30_1;

typedef struct st_515b30_2 {
    unsigned int field_0;
} st_515b30_2;

extern st_515b30_2 *g_6167f8;
extern st_515b30_2 *g_6168d8;
extern st_515b30_1 *gpGlobals;

unsigned int * DelayStart__12CCineMonsteri(st_515b30_0 **a0, unsigned int a1)
{
    unsigned int *v3;  // eax
    unsigned int v4;  // edi
    st_515b30_3 *v5;  // edx
    unsigned int *v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]

    v2 = *a0->field_1cc + gpGlobals->field_98;
    v1 = "targetname";
    v0 = NULL;
    while (1)
    {
        v3 = g_6167f8(v0, v1, v2);
        v0 = v3;
        v4 = 0;
        if (v0)
        {
            v3 = g_6168d8(v0);
            if (v3)
                goto LABEL_515ba5;
        }
        v4 = 1;
LABEL_515ba5:
        if (v4)
            break;
        if (!sub_488af0(*(!v0 ? NULL : v0 + 32) + gpGlobals->field_98, "scripted_sequence"))
        {
            v5 = sub_48c6d0((!v0 ? 0 : v0 + 32));
            if (a1)
            {
                v5->field_2c4 = v5->field_2c4 + 1;
            }
            else
            {
                v5->field_2c4 = v5->field_2c4 - 1;
                if (v5->field_2c4 <= NULL)
                    v5->field_2c8 = (float)(0.05 + gpGlobals->field_0);
            }
        }
        v2 = *a0->field_1cc + gpGlobals->field_98;
        v1 = "targetname";
    }
    return v3;
}

