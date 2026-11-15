// Spawn__10CWorldItem @0xc89e0 size=276
typedef struct st_4c89e0_1 {
    char padding_0[416];
    unsigned int field_1a0;
    char padding_1a4[36];
    unsigned int field_1c8;
    unsigned int field_1cc;
    char padding_1d0[56];
    unsigned int field_208;
} st_4c89e0_1;

typedef struct st_4c89e0_0 {
    struct st_4c89e0_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_4c89e0_0;

typedef struct st_4c89e0_5 {
    unsigned int field_0;
} st_4c89e0_5;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4c89e0_5 *g_616818;
extern st_4c89e0_5 *g_6168b4;

int Spawn__10CWorldItem(st_4c89e0_0 *a0)
{
    uint192_t v0;  // [bp-0x30], Other Possible Types: uint160_t
    unsigned int v1;  // [bp+0x0]
    unsigned int v2;  // [bp+0x8]

    esp = (char *)&v0 + 20;
    if (a0->field_64 - 42 > 3)
    {
        v0 = _INSERT(*(uint160_t *)((void*)&v0 + 12), 12, a0->field_64);
        *(char **)((char *)&v0 + 8) = "unable to create world_item %d\n";
        *(unsigned int *)((char *)&v0 + 4) = 1;
        g_6168b4(v1, a0, v2);
        esp = (char *)&v0 + 16;
        *(unsigned int *)(esp - 16) = a0->field_0->field_208;
        return g_616818(v1);
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_64] - 1356148)]));
}

