// SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf @0x98d40 size=58
typedef struct st_498d40_0 {
    char padding_0[12];
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[8];
    unsigned int field_1c;
    unsigned int field_20;
} st_498d40_0;

extern char SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf;

short SparkStop__9CEnvSparkP11CBaseEntityT18USE_TYPEf(st_498d40_0 *a0)
{
    unsigned int v0;  // eax

    *(unsigned short *)&v0 = 0;
    a0->field_1c = v0 | 0xffff0000;
    a0->field_20 = &SparkStart__9CEnvSparkP11CBaseEntityT18USE_TYPEf;
    a0->field_c = 0;
    a0->field_10 = 0;
    return v0;
}

