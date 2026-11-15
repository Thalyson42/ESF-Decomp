// FadeMonster__12CBaseMonster @0xa4650 size=136
typedef struct st_4a4650_0 {
    float field_0;
} st_4a4650_0;

extern unsigned int g_vecZero;
extern unsigned int g_vecZero+4;
extern unsigned int g_vecZero+8;
extern st_4a4650_0 *gpGlobals;

int FadeMonster__12CBaseMonster(float a0)
{
    unsigned int *v1;  // edx
    unsigned int *v2;  // edx

    *(unsigned int *)(*(int *)a0 + 312) = 0;
    v1 = *(int *)a0;
    v1[8] = g_vecZero;
    v1[9] = g_vecZero+4;
    v1[10] = g_vecZero+8;
    *(unsigned int *)(*(int *)a0 + 264) = 0;
    v2 = *(int *)a0;
    v2[23] = g_vecZero;
    v2[24] = g_vecZero+4;
    v2[25] = g_vecZero+8;
    *(float *)(*(int *)a0 + 308) = *(float *)gpGlobals;
    *(char *)(*(int *)a0 + 280) = *(char *)(*(int *)a0 + 280) | 32;
    return CBaseEntity::SUB_StartFadeOut(a0);
}

