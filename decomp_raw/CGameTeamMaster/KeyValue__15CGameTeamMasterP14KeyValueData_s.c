// KeyValue__15CGameTeamMasterP14KeyValueData_s @0xcff00 size=660
typedef struct st_4cff00_0 {
    char padding_0[4];
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4cff00_0;

unsigned int KeyValue__15CGameTeamMasterP14KeyValueData_s(unsigned int *a0, st_4cff00_0 *a1)
{
    unsigned int v0;  // eax

    if (!sub_488af0(a1->field_4, "teamindex"))
    {
        v0 = sub_48b500(a1->field_8, 0, 10, 0);
        a0[26] = v0;
    }
    else if (!sub_488af0(a1->field_4, "triggerstate"))
    {
        v0 = sub_48b500(a1->field_8, 0, 10, 0);
        switch (v0)
        {
        case 0:
            a0[27] = 0;
            break;
        case 2:
            a0[27] = 3;
            break;
        default:
            a0[27] = 1;
            break;
        }
    }
    else
    {
        return sub_489590(a0, a1);
    }
    a1->field_c = 1;
    return v0;
}

