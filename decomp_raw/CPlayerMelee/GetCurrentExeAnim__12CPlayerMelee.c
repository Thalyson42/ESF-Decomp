// GetCurrentExeAnim__12CPlayerMelee @0x1004b0 size=95
typedef struct st_5004b0_1 {
    char padding_0[132];
    struct st_5004b0_0 *field_84;
} st_5004b0_1;

typedef struct st_5004b0_0 {
    char padding_0[652];
    float field_28c;
    char padding_290[4];
    unsigned int field_294;
    char padding_298[12];
    struct st_5004b0_0 *field_2a4;
} st_5004b0_0;

typedef struct st_5004b0_2 {
    char padding_0[652];
    unsigned int field_28c;
    char padding_290[4];
    unsigned int field_294;
    char padding_298[12];
    struct st_5004b0_2 *field_2a4;
} st_5004b0_2;

st_5004b0_2 * GetCurrentExeAnim__12CPlayerMelee(st_5004b0_1 *a0)
{
    double v0;  // mm7
    st_5004b0_0 *v1;  // edx
    st_5004b0_2 *v2;  // ecx
    st_5004b0_0 *v3;  // edx

    v0 = -1.0;
    v1 = a0->field_84;
    v2 = NULL;
    if (!a0->field_84)
        return NULL;
    do
    {
        v3 = v1;
        if ((!v2 || v0 < v3->field_28c) && v3->field_294)
        {
            v0 = v3->field_28c;
            v2 = v3;
        }
    } while ((v1 = v3->field_2a4, v3->field_2a4));
    return v2;
}

