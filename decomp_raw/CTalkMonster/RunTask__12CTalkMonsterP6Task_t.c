// RunTask__12CTalkMonsterP6Task_t @0x125170 size=1308
extern char _GLOBAL_OFFSET_TABLE_;

int RunTask__12CTalkMonsterP6Task_t(int a0, unsigned int *a1)
{
    int v0;  // esi
    unsigned int *v1;  // eax

    if (*a1 - 89 <= 15)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *a1] - 977552)]));
    }
    else
    {
        if (CTalkMonster::IsTalking(a0) && !(v0 = a0 + 784, !EHANDLE::__opi(v0)))
        {
            v1 = EHANDLE::__rf(v0);
            CTalkMonster::IdleHeadTurn(a0, *v1 + 8);
        }
        else
        {
            CBaseAnimating::SetBoneController(a0, 0, 0);
        }
        return CBaseMonster::RunTask(a0, a1);
    }
}

