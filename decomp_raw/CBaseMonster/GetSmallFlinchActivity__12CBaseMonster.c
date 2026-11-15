// GetSmallFlinchActivity__12CBaseMonster @0xa4b40 size=229
extern char _GLOBAL_OFFSET_TABLE_;
extern float g_vecAttackDir;
extern float g_616784;
extern float g_616788;

unsigned int GetSmallFlinchActivity__12CBaseMonster(float a0)
{
    float v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    float v2;  // [bp-0x1c]

    sub_48a800(*(int *)a0 + 80);
    v0 = (float)(-1.0 * g_vecAttackDir);
    v1 = (float)(-1.0 * g_616784);
    v2 = (float)(-1.0 * g_616788);
    if ((unsigned int)*(int *)(*(unsigned int *)&a0 + 380) > 7)
        return 26;
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *(int *)(*(unsigned int *)&a0 + 380)] - 1503020)]));
}

