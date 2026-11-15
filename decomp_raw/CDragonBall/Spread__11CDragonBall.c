// Spread__11CDragonBall @0xae7e0 size=208
typedef struct st_4ae7e0_0 {
    float field_0;
} st_4ae7e0_0;

extern char SpreadThink__11CDragonBall;
extern st_4ae7e0_0 *gpGlobals;

unsigned int * Spread__11CDragonBall(float idx)
{
    unsigned int *v4;  // edx
    unsigned int *v5;  // ecx
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    sub_48d9a0(idx);
    *(unsigned int *)(*(int *)idx + 272) = 1;
    sub_489390(*(int *)(*(int *)idx + 520), 4, "weapons/db_flying.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    *(unsigned int *)(*(int *)idx + 264) = 6;
    v4 = *(int *)idx;
    v0 = 0;
    v1 = 0;
    v2 = 1000.0f;
    v4[8] = v0;
    v4[9] = v1;
    *(float *)&v4[10] = v2;
    v5 = *(int *)idx;
    *(float *)(*(unsigned int *)&idx + 116) = *(float *)&v5[4];
    *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v2, 0, 0) | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &SpreadThink__11CDragonBall;
    *(float *)&v5[65] = (float)(0.2 + *(float *)gpGlobals);
    return gpGlobals;
}

