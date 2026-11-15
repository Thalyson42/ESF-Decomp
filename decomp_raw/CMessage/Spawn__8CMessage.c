// Spawn__8CMessage @0xb62c0 size=222
extern char _GLOBAL_OFFSET_TABLE_;

int Spawn__8CMessage(float a0)
{
    unsigned int *v1;  // eax
    unsigned int *v2;  // eax
    unsigned int *v3;  // edx
    unsigned int v4;  // eax
    unsigned int v5;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    *(unsigned int *)(*(int *)a0 + 268) = 0;
    v1 = *(int *)a0;
    *(char *)v1 = *(char *)v1 + (char)v1;
    if ((unsigned int)*(int *)(*(int *)a0 + 388) <= 3)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * *(int *)(*(int *)a0 + 388)] - 1431484)]));
    }
    else
    {
        *(float *)(*(int *)a0 + 504) = 2.0f;
        v2 = *(int *)a0;
        v2[97] = 0;
        v3 = *(int *)a0;
        v4 = _INSERT(v2, 0, 0);
        v5 = _INSERT(v4, 1, (isnan(*(float *)&v3[81]) ? 5 : 0.0 < *(float *)&v3[81]));
        if (0.0 < *(float *)&v3[81])
            return v5;
        v3[81] = 0x3f800000;
        return v5;
    }
}

