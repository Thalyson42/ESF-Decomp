// IsNull__FP7edict_s @0x179a70 size=202
typedef struct st_579a70_0 {
    unsigned int field_0;
    char padding_4[547];
    char field_227;
} st_579a70_0;

typedef struct st_579a70_1 {
    unsigned int field_0;
} st_579a70_1;

extern st_579a70_1 *g_engfuncs.pfnEntOffsetOfPEntity;

char IsNull__FP7edict_s(st_579a70_0 *a0)
{
    if (a0 && g_engfuncs.pfnEntOffsetOfPEntity(a0) && !a0->field_0 && !(a0->field_227 & 64))
        return 0;
    return 1;
}

