// SetThrowAnim__12CPlayerMeleePcR8Activity @0x100ea0 size=879
typedef struct st_500ea0_0 {
    char padding_0[100];
    unsigned int field_64;
} st_500ea0_0;

extern char _GLOBAL_OFFSET_TABLE_;

unsigned int SetThrowAnim__12CPlayerMeleePcR8Activity(st_500ea0_0 *a0, unsigned int a1)
{
    unsigned int v3;  // eax
    st_500ea0_0 *v0;  // [bp-0x12c]
    unsigned int v1;  // [bp-0x108]
    int v2;  // [bp+0x0]

    v1 = 0;
    v3 = a0->field_64 - 1;
    if (v3 <= 5)
    {
        goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * v3] - 0x112bfc)]));
    }
    else
    {
        if (v1)
        {
            v0 = a0;
            v3 = sub_48d400(v2);
        }
        return v3;
    }
}

