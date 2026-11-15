// EntityIndex__18CSaveRestoreBufferi @0x1352a0 size=66
typedef struct st_5352a0_0 {
    unsigned int field_0;
} st_5352a0_0;

extern st_5352a0_0 *g_engfuncs.pfnPEntityOfEntOffset;

int EntityIndex__18CSaveRestoreBufferi(int a0, unsigned int a1)
{
    return CSaveRestoreBuffer::EntityIndex(a0, g_engfuncs.pfnPEntityOfEntOffset(a1));
}

