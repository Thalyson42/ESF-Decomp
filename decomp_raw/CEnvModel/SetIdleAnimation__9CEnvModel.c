// SetIdleAnimation__9CEnvModel @0xb8fe0 size=176
typedef struct st_4b8fe0_0 {
    char padding_0[296];
    unsigned int field_128;
    unsigned int field_12c;
    unsigned int field_130;
} st_4b8fe0_0;

typedef struct st_4b8fe0_1 {
    unsigned int field_0;
} st_4b8fe0_1;

extern st_4b8fe0_1 *g_61692c;

unsigned int SetIdleAnimation__9CEnvModel(st_4b8fe0_0 **a0)
{
    unsigned int v1;  // edi
    double v2;  // mm7
    unsigned int v0;  // [bp-0x18]

    v1 = sub_48afe0(a0, "idle");
    v0 = sub_48afe0(a0, "idle2");
    if (!v1)
        return v0;
    *a0->field_128 = v1;
    if (v0)
    {
        g_61692c(0, 0x3f800000);
        if (v2 > 0.5)
            *a0->field_128 = v0;
    }
    *a0->field_12c = 0;
    *a0->field_130 = 0;
    return sub_488850(a0);
}

