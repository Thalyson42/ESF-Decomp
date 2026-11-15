// KeyValue__13CTriggerRelayP14KeyValueData_s @0x12ae70 size=372
typedef struct st_52ae70_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_52ae70_0;

typedef struct st_52ae70_1 {
    char padding_0[108];
    unsigned int field_6c;
} st_52ae70_1;

unsigned int KeyValue__13CTriggerRelayP14KeyValueData_s(st_52ae70_1 *a0, st_52ae70_0 *a1)
{
    unsigned int v0;  // eax

    if (sub_488af0(a1->field_4, "triggerstate"))
        return sub_48b920(a0, a1);
    v0 = sub_48b500(a1->field_8, 0, 10, 0);
    switch (v0)
    {
    case 0:
        a0->field_6c = 0;
        break;
    case 2:
        a0->field_6c = 3;
        break;
    default:
        a0->field_6c = 1;
        break;
    }
    a1->field_c = 1;
    return v0;
}

