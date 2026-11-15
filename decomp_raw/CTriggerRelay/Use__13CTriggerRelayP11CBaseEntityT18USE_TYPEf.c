// Use__13CTriggerRelayP11CBaseEntityT18USE_TYPEf @0x12b000 size=68
typedef struct st_52b000_0 {
    char padding_0[416];
    char field_1a0;
} st_52b000_0;

typedef struct st_52b000_1 {
    struct st_52b000_0 *field_0;
    char padding_4[104];
    int field_6c;
} st_52b000_1;

st_52b000_0 * Use__13CTriggerRelayP11CBaseEntityT18USE_TYPEf(st_52b000_1 *a0)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    CBaseDelay::SUB_UseTargets(a0, a0, a0->field_6c, 0, v0, v1);
    if (!(a0->field_0->field_1a0 & 1))
        return a0->field_0;
    return UTIL_Remove(a0);
}

