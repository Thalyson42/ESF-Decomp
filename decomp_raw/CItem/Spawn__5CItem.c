// Spawn__5CItem @0xc8b00 size=260
typedef struct st_4c8b00_1 {
    char padding_0[152];
    unsigned int field_98;
} st_4c8b00_1;

typedef struct st_4c8b00_0 {
    unsigned int field_0;
} st_4c8b00_0;

extern char ItemTouch__5CItemP11CBaseEntity;
extern st_4c8b00_0 *g_616828;
extern st_4c8b00_0 *g_6168b4;
extern st_4c8b00_1 *gpGlobals;

unsigned int Spawn__5CItem(float idx)
{
    unsigned int v10;  // eax
    unsigned int *v11;  // edx
    float v0;  // [bp-0x88]
    float v1;  // [bp-0x80]
    float v2;  // [bp-0x44]
    float v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    float v5;  // [bp-0x24]
    float v6;  // [bp-0x20]
    float v7;  // [bp-0x1c]

    *(unsigned int *)(*(int *)idx + 264) = 6;
    *(unsigned int *)(*(int *)idx + 268) = 1;
    sub_48db50(*(int *)idx, *(int *)idx + 8);
    v5 = 16.0f;
    v6 = 16.0f;
    v7 = 16.0f;
    v2 = -16.0f;
    v3 = -16.0f;
    v4 = 0;
    *(unsigned int *)(*(unsigned int *)&idx + 20) = _INSERT(sub_48a0d0(*(int *)idx, &v2, &v5), 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 24) = &ItemTouch__5CItemP11CBaseEntity;
    v10 = g_616828(*(int *)(*(int *)idx + 520));
    if (v10)
        return v10;
    v11 = *(int *)idx;
    v1 = *(float *)&v11[4];
    v0 = *(float *)&v11[3];
    g_6168b4(4, "Item %s fell out of level at %f,%f,%f", *v11 + gpGlobals->field_98, (unsigned int)(*(float *)&v11[2] >> 0));
    return sub_48cc00(idx);
}

