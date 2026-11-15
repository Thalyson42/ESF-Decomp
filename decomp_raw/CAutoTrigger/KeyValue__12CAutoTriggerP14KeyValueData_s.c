// KeyValue__12CAutoTriggerP14KeyValueData_s @0x12aad0 size=452
typedef struct st_52aad0_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52aad0_0;

typedef struct st_52aad0_1 {
    unsigned int field_0;
} st_52aad0_1;

extern st_52aad0_1 *g_6168cc;

unsigned int KeyValue__12CAutoTriggerP14KeyValueData_s(unsigned int *a0, st_52aad0_0 *a1)
{
    unsigned int v0;  // eax

    if (!sub_488af0(a1->field_4, "globalstate"))
    {
        v0 = g_6168cc(a1->field_8);
        a0[27] = v0;
    }
    else if (!sub_488af0(a1->field_4, "triggerstate"))
    {
        v0 = sub_48b500(a1->field_8, 0, 10, 0);
        switch (v0)
        {
        case 0:
            a0[28] = 0;
            break;
        case 2:
            a0[28] = 3;
            break;
        default:
            a0[28] = 1;
            break;
        }
    }
    else
    {
        return sub_48b920(a0, a1);
    }
    a1->field_c = 1;
    return v0;
}

