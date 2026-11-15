// Precache__14CBasePlatTrain @0xe8870 size=710
typedef struct st_4e8870_0 {
    struct st_4e8870_1 *field_0;
    char padding_4[256];
    char field_104;
    char field_105;
} st_4e8870_0;

typedef struct st_4e8870_1 {
    char padding_0[488];
    unsigned int field_1e8;
    unsigned int field_1ec;
} st_4e8870_1;

typedef struct st_4e8870_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4e8870_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4e8870_2 *gpGlobals;

unsigned int Precache__14CBasePlatTrain(st_4e8870_0 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_104 <= 13)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_104] - 1225260)]));
    }
    else
    {
        a0->field_0->field_1e8 = -1 * gpGlobals->field_98 + 5915451;
        if (a0->field_105 > 8)
        {
            v0 = -1 * gpGlobals->field_98 + 5915451;
            a0->field_0->field_1ec = v0;
            return v0;
        }
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_105] - 1224860)]));
    }
}

