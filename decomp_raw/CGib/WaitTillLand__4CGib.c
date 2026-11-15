// WaitTillLand__4CGib @0xa50d0 size=290
typedef struct st_4a50d0_0 {
    float field_0;
} st_4a50d0_0;

extern char SUB_StartFadeOut__11CBaseEntity;
extern float g_vecZero;
extern float g_vecZero+4;
extern float g_vecZero+8;
extern st_4a50d0_0 *gpGlobals;

unsigned int * WaitTillLand__4CGib(float idx)
{
    unsigned int *v1;  // ecx
    unsigned int v2;  // edi
    float v3;  // 128
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax

    if (!(*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 156))(idx))
        return UTIL_Remove(idx);
    v1 = *(int *)idx + 32;
    v2 = 0;
    if (g_vecZero == *(float *)(*(int *)idx + 32) && g_vecZero+4 == *(float *)&v1[1])
    {
        v3 = *(float *)&v1[2];
        *((char *)&v4 + 1) = (isunordered(g_vecZero+8, v3) ? 69 : g_vecZero+8 == v3 ? 64 : g_vecZero+8 < v3);
        v5 = _INSERT(v4, 0, g_vecZero+8 == v3);
        v2 = g_vecZero+8 == v3;
    }
    if (!v2)
    {
        *(float *)(*(int *)idx + 260) = (float)(0.5 + *(float *)gpGlobals);
        return gpGlobals;
    }
    v6 = _INSERT(v5, 0, 0);
    *(unsigned int *)(*(unsigned int *)&idx + 12) = v6 | 0xffff0000;
    *(char **)(*(unsigned int *)&idx + 16) = &SUB_StartFadeOut__11CBaseEntity;
    *(unsigned int *)(*(int *)idx + 264) = 0;
    *(float *)(*(int *)idx + 16) = (float)(*(float *)(*(int *)idx + 16) + 10.0);
    *(float *)(*(int *)idx + 260) = *(float *)gpGlobals + *(float *)(*(unsigned int *)&idx + 692);
    if (*(int *)(*(unsigned int *)&idx + 680) == 0xffffffff)
        return gpGlobals;
    return CSoundEnt::InsertSound(16, *(int *)idx + 8, 384, 25.0f);
}

