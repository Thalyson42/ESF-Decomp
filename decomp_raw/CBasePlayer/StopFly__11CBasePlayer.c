// StopFly__11CBasePlayer @0xf0840 size=165
typedef struct st_4f0840_0 {
    struct st_4f0840_1 *field_0;
    char padding_4[796];
    unsigned int field_320;
    char padding_324[8];
    unsigned int field_32c;
    unsigned int field_330;
    char padding_334[8];
    unsigned int field_33c;
    char padding_340[24];
    unsigned int field_358;
    char padding_35c[8];
    unsigned int field_364;
    char padding_368[20];
    unsigned int field_37c;
    char padding_380[248];
    unsigned int field_478;
    char padding_47c[576];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_4f0840_0;

typedef struct st_4f0840_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[16];
    unsigned int field_11c;
} st_4f0840_1;

unsigned int * StopFly__11CBasePlayer(st_4f0840_0 *a0)
{
    unsigned int *v0;  // eax
    unsigned int *v1;  // eax
    unsigned int *v2;  // eax
    unsigned int *v3;  // eax
    unsigned int *v4;  // eax
    unsigned int *v5;  // eax
    unsigned int *v6;  // eax
    unsigned int *v7;  // eax
    unsigned int *v8;  // eax

    if (a0->field_364)
    {
        return v8;
    }
    else if (!a0->field_320)
    {
        return v7;
    }
    else if (!a0->field_330)
    {
        if (a0->field_37c && !a0->field_478)
            return v0;
        if (a0->field_33c)
        {
            return v5;
        }
        else if (a0->field_770)
        {
            return v4;
        }
        else if (a0->field_358)
        {
            return v3;
        }
        else if (!a0->field_6bc)
        {
            if (a0->field_32c)
                sub_4895a0(a0);
            a0->field_320 = 0;
            a0->field_0->field_11c = 0x3f800000;
            v1 = a0->field_0;
            v1[66] = 3;
            return v1;
        }
        else
        {
            return v2;
        }
    }
    else
    {
        return v6;
    }
}

