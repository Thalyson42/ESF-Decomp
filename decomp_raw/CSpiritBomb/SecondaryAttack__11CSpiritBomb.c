// SecondaryAttack__11CSpiritBomb @0x1219c0 size=606
typedef struct st_5219c0_0 {
    struct st_5219c0_1 *field_0;
    char padding_4[800];
    unsigned int field_324;
    char padding_328[12];
    unsigned int field_334;
    unsigned int field_338;
    char padding_33c[1048];
    unsigned int field_754;
} st_5219c0_0;

typedef struct st_5219c0_1 {
    char padding_0[332];
    unsigned int field_14c;
    unsigned int field_150;
    unsigned int field_154;
    unsigned int field_158;
    unsigned int field_15c;
} st_5219c0_1;

double SecondaryAttack__11CSpiritBomb(float idx)
{
    st_5219c0_0 *v6;  // eax
    unsigned int *v7;  // edx
    double v8;  // mm7
    double v9;  // mm7
    unsigned int *v10;  // ecx
    int v11;  // eax
    double v12;  // mm0
    double v13;  // mm7
    unsigned int v0;  // [bp-0x38]
    int v1;  // [bp-0x28]
    float v2;  // [bp-0x24]
    float v3;  // [bp-0x20]
    float v4;  // [bp-0x1c]

    if (*(int *)(*(unsigned int *)&idx + 0xcc))
        return v13;
    if (!*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
    {
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 820) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 824) = 1;
        *(unsigned int *)(*(unsigned int *)&idx + 208) = 1;
        *(unsigned int *)(*(int *)(*(unsigned int *)&idx + 128) + 1876) = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 196) = 0;
        CBasePlayer::EmitClassSound(*(int *)(*(unsigned int *)&idx + 128), "spiritbomb2_charge.wav");
        v6 = *(int *)(*(unsigned int *)&idx + 128);
        if (!v6->field_324)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 216) = 1;
            v7 = v6->field_0;
            v2 = 255.0f;
            v3 = 255.0f;
            v4 = 255.0f;
            *(float *)&v7[84] = v2;
            *(float *)&v7[0x55] = v3;
            *(float *)&v7[86] = v4;
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 332) = 0;
            *(unsigned int *)(*(int *)*(int *)(*(unsigned int *)&idx + 128) + 348) = 19;
        }
    }
    else if (!CBasePlayer::UseKi(*(int *)(*(unsigned int *)&idx + 128), 0))
    {
        if (*(int *)(*(int *)(*(unsigned int *)&idx + 128) + 820))
        {
            CSpiritBomb::Shoot2(idx);
            return v8;
        }
        return v9;
    }
    else
    {
        if (*(int *)(*(unsigned int *)&idx + 196) <= 44)
        {
            if (*(int *)(*(unsigned int *)&idx + 196) == 15)
            {
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 352))(idx);
            }
            else if (*(int *)(*(unsigned int *)&idx + 196) > 15)
            {
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx);
                if (!*(int *)(*(unsigned int *)&idx + 216))
                    goto LABEL_521bc0;
                v10 = *(int *)*(int *)(*(unsigned int *)&idx + 128);
                v0 = (*(int *)(*(unsigned int *)&idx + 196) - 15) * 35;
                v11 = 35 - v0 / 30;
                goto LABEL_521bb4;
            }
            else if (*(int *)(*(unsigned int *)&idx + 216))
            {
                v10 = *(int *)*(int *)(*(unsigned int *)&idx + 128);
                v11 = *(int *)(*(unsigned int *)&idx + 196) * 7 / 3;
LABEL_521bb4:
                v1 = v11;
                *(float *)&v10[83] = (float)v1;
            }
LABEL_521bc0:
            *(unsigned int *)(*(unsigned int *)&idx + 196) = *(int *)(*(unsigned int *)&idx + 196) + 1;
            CBasePlayer::DrawChargeBar(*(int *)(*(unsigned int *)&idx + 128), *(int *)(*(unsigned int *)&idx + 196) * 20 / 9);
        }
    }
    UTIL_WeaponTimeBase();
    *(float *)(*(unsigned int *)&idx + 160) = (float)(v12 + 0.2);
    return 0.2;
}

