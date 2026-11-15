// DeaccelerateToss__12CPlayerMelee @0x1018a0 size=103
typedef struct st_5018a0_0 {
    float field_0;
} st_5018a0_0;

extern st_5018a0_0 *gpGlobals;

int DeaccelerateToss__12CPlayerMelee(unsigned int *a0)
{
    float v0;  // 128
    float v1;  // 128

    v0 = *(float *)gpGlobals - *(float *)&a0[44];
    *(float *)&a0[44] = *(float *)gpGlobals;
    v1 = *(float *)&a0[2] - v0 * *(float *)&a0[4];
    *(float *)&a0[2] = v1;
    if (0.0 > v1)
        *(float *)&a0[2] = 0.0f;
    return *(float *)&a0[2] < *(float *)&a0[3];
}

