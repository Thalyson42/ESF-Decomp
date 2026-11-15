// Spawn__7CSprite @0xb3790 size=267
typedef struct st_4b3790_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4b3790_0;

typedef struct st_4b3790_1 {
    unsigned int field_0;
} st_4b3790_1;

extern st_4b3790_1 *g_6167c8;
extern st_4b3790_1 *g_6167d0;
extern st_4b3790_0 *gpGlobals;

int Spawn__7CSprite(float a0)
{
    unsigned int *v2;  // edx
    unsigned int *v3;  // eax
    int v0;  // [bp-0x8]

    *(unsigned int *)(*(int *)a0 + 268) = 0;
    *(unsigned int *)(*(int *)a0 + 264) = 0;
    *(unsigned int *)(*(int *)a0 + 280) = 0;
    *(unsigned int *)(*(int *)a0 + 304) = 0;
    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    g_6167c8(*(int *)(*(int *)a0 + 520), *(int *)(*(int *)a0 + 184) + gpGlobals->field_98);
    v0 = g_6167d0(*(int *)(*(int *)a0 + 180));
    *(float *)(*(unsigned int *)&a0 + 104) = (float)((double)v0 - 1.0);
    if (*(int *)(*(int *)a0 + 460) && !(*(char *)(*(int *)a0 + 416) & 1))
        sub_48df90(a0);
    else
        sub_487b90(a0);
    v2 = *(int *)a0;
    if (*(float *)&v2[21] != 0.0f && *(float *)&v2[22] == 0.0f)
    {
        *(float *)&v2[22] = *(float *)&v2[21];
        v3 = *(int *)a0;
        *(float *)&v3[21] = 0.0f;
        return v3;
    }
    return v3;
}

