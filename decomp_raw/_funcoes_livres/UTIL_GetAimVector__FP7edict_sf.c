// UTIL_GetAimVector__FP7edict_sf @0x133320 size=87
typedef struct st_533320_0 {
    unsigned int field_0;
} st_533320_0;

extern st_533320_0 *g_616858;

unsigned int * UTIL_GetAimVector__FP7edict_sf(void)
{
    char v0;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int *idx;  // [bp+0x4]
    unsigned int v4;  // [bp+0x8]
    unsigned int v5;  // [bp+0xc]

    g_616858(v4, v5, &v0);
    *idx = v0;
    idx[1] = v1;
    idx[2] = v2;
    return idx;
}

