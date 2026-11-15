// Spawn__15CTriggerCounter @0x12d2a0 size=75
typedef struct st_52d2a0_0 {
    char padding_0[28];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[168];
    unsigned int field_cc;
} st_52d2a0_0;

extern char CounterUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;

short Spawn__15CTriggerCounter(st_52d2a0_0 *a0)
{
    unsigned int v0;  // eax

    *(float *)&a0->padding_24[104] = -1.0f;
    if (!a0->field_cc)
        a0->field_cc = 2;
    *(unsigned short *)&v0 = 0;
    a0->field_1c = v0 | 0xffff0000;
    a0->field_20 = &CounterUse__12CBaseTriggerP11CBaseEntityT18USE_TYPEf;
    return v0;
}

