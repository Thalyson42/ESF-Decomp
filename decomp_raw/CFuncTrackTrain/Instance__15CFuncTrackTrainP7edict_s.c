// Instance__15CFuncTrackTrainP7edict_s @0xec540 size=99
typedef struct st_4ec540_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ec540_0;

extern st_4ec540_0 *gpGlobals;

unsigned int Instance__15CFuncTrackTrainP7edict_s(unsigned int *a0)
{
    return (!sub_488af0(*(!a0 ? NULL : a0 + 32) + gpGlobals->field_98, "func_tracktrain") ? (!a0 ? 0 : a0[31]) : 0);
}

