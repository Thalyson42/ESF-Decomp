// SetPowerhitAnim__12CPlayerMeleeG6Vectori @0x10c110 size=375
typedef struct st_50c110_0 {
    float field_0;
} st_50c110_0;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_50c110_0 *gpGlobals;

int SetPowerhitAnim__12CPlayerMeleeG6Vectori(int a0, float *a1, unsigned int a2)
{
    int v0;  // [bp-0x168]
    char v5[256];  // [bp-0x104]

    if (a2 == 0xffffffff)
        a2 = 4;
    strcpy(v5, "blow_");
    if (a2 > 5)
    {
        strcat@GLIBC_2.0(v5, (0.45 <= a1[2] ? "up" : -0.45 >= a1[2] ? "down" : "kick_front"));
        *(unsigned short *)&v0 = 0;
        return CPlayerMelee::AddAnimation(a0, v0, *(float *)gpGlobals, 1, v5);
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a2] - 1079660)]));
}

