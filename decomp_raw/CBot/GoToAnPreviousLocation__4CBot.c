// GoToAnPreviousLocation__4CBot @0x171790 size=186
typedef struct st_571790_0 {
    float field_0;
} st_571790_0;

extern st_571790_0 *gpGlobals;

unsigned int GoToAnPreviousLocation__4CBot(float a0)
{
    unsigned int v6;  // esi
    unsigned int *v7;  // eax
    int v8;  // esi
    unsigned int v9;  // eax
    int v0;  // [bp-0x38]
    int v1;  // [bp-0x38]
    float v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x30]
    unsigned int v4;  // [bp-0x2c]

    v0 = 4;
    do
    {
        v1 = v0;
        v6 = v1 * 16;
        if (*(float *)gpGlobals - 15.0 < *(float *)(v6 + *(unsigned int *)&a0 + 1760) && (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 228))(a0, *(unsigned int *)&a0 + v6 + 1748))
        {
            v7 = *(unsigned int *)&a0 + v6 + 1748;
            v2 = *(float *)v7;
            *(float *)&v3 = *(float *)&v7[1];
            *(float *)&v4 = *(float *)&v7[2];
            v8 = UTIL_EntDir(a0, &v2);
            CBot::ResetMoveSpeed(a0);
            v9 = CBot::SetMoveDir(a0, v8);
        }
    } while ((v0 = v1 - 1, v1 - 1 >= 0));
    return v9;
}

