// Spawn__10CFurniture @0x1170b0 size=247
typedef struct st_5170b0_0 {
    char padding_0[152];
    unsigned int field_98;
} st_5170b0_0;

typedef struct st_5170b0_1 {
    unsigned int field_0;
} st_5170b0_1;

extern st_5170b0_1 *g_engfuncs;
extern st_5170b0_1 *g_6167c8;
extern st_5170b0_0 *gpGlobals;

int Spawn__10CFurniture(float a0)
{
    g_engfuncs(*(int *)(*(int *)a0 + 184) + gpGlobals->field_98);
    g_6167c8(*(int *)(*(int *)a0 + 520), *(int *)(*(int *)a0 + 184) + gpGlobals->field_98);
    *(unsigned int *)(*(int *)a0 + 264) = 0;
    *(unsigned int *)(*(int *)a0 + 268) = 2;
    *(float *)(*(int *)a0 + 352) = 80000.0f;
    *(float *)(*(int *)a0 + 364) = 2.0f;
    *(unsigned int *)(*(int *)a0 + 280) = 0;
    *(unsigned int *)(*(int *)a0 + 176) = 0;
    *(unsigned int *)(*(int *)a0 + 296) = 0;
    *(unsigned int *)(*(int *)a0 + 304) = 0;
    sub_488850(a0);
    *(unsigned int *)(*(int *)a0 + 304) = 0;
    return (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 260))(a0);
}

