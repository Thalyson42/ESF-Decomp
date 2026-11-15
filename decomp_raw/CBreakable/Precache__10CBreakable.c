// Precache__10CBreakable @0xc1ed0 size=534
typedef struct st_4c1ed0_0 {
    char padding_0[108];
    int field_6c;
    char padding_70[4];
    unsigned int field_74;
    char padding_78[4];
    unsigned int field_7c;
    unsigned int field_80;
} st_4c1ed0_0;

typedef struct st_4c1ed0_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4c1ed0_1;

typedef struct st_4c1ed0_2 {
    unsigned int field_0;
} st_4c1ed0_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4c1ed0_2 *g_engfuncs;
extern st_4c1ed0_1 *gpGlobals;

unsigned int Precache__10CBreakable(st_4c1ed0_0 *a0)
{
    unsigned int v0;  // edi
    unsigned int v1;  // eax

    if ((unsigned int)a0->field_6c <= 8)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_6c] - 1383388)]));
    }
    else
    {
        sub_48d5e0(a0->field_6c);
        if (a0->field_7c)
            v0 = gpGlobals->field_98 + a0->field_7c;
        v1 = g_engfuncs(v0);
        a0->field_74 = v1;
        if (!a0->field_80)
            return v1;
        return sub_488de0(a0->field_80 + gpGlobals->field_98);
    }
}

