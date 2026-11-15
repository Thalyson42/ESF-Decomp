// GetCurrentAnim__12CPlayerMelee @0x100420 size=134
typedef struct st_500420_0 {
    float field_0;
} st_500420_0;

extern st_500420_0 *gpGlobals;

unsigned int GetCurrentAnim__12CPlayerMelee(float a0)
{
    double v1;  // mm7
    unsigned int *v2;  // edx
    unsigned int v3;  // ecx
    unsigned int *v4;  // edx
    unsigned int v5;  // 120
    unsigned int v6;  // fc3210

    if (*(int *)(*(unsigned int *)&a0 + 324) && *(int *)(*(unsigned int *)&a0 + 284) == 7)
        return CPlayerMelee::GetCurrentExeAnim(a0);
    v1 = 0.0;
    v2 = *(int *)(*(unsigned int *)&a0 + 132);
    v3 = 0;
    if (*(int *)(*(unsigned int *)&a0 + 132))
    {
        do
        {
            v4 = v2;
            v5 = *&v4[163];
            if (__int_as_float(v5) > v1 && !(v6 = (isunordered(__int_as_float(v5), *(float *)gpGlobals) ? 0x4500 : __int_as_float(v5) == *(float *)gpGlobals ? 0x4000 : __int_as_float(v5) < *(float *)gpGlobals ? 0x100 : 0), (isunordered(__int_as_float(v5), *(float *)gpGlobals) ? 0x44 : __int_as_float(v5) == *(float *)gpGlobals ? 63 : __int_as_float(v5) < *(float *)gpGlobals ? 0 : 0xff) >= 64))
            {
                v1 = __int_as_float(v5);
                v3 = v4;
            }
        } while ((v2 = v4[169], v4[169]));
    }
    return v3;
}

