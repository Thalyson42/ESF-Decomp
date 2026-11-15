// HandleExeAttack__12CPlayerMelee @0x1037a0 size=309
typedef struct st_5037a0_0 {
    char padding_0[660];
    unsigned int field_294;
} st_5037a0_0;

typedef struct st_5037a0_2 {
    float field_0;
} st_5037a0_2;

typedef struct st_5037a0_1 {
    unsigned int field_0;
} st_5037a0_1;

extern st_5037a0_1 *g_engfuncs.pfnAlertMessage;
extern st_5037a0_2 *gpGlobals;

unsigned int HandleExeAttack__12CPlayerMelee(float idx)
{
    st_5037a0_0 *v1;  // eax
    unsigned int v2;  // edx
    unsigned int *v3;  // eax
    unsigned int v4;  // eax
    unsigned int v5;  // esi
    unsigned int *v6;  // edx
    unsigned int *v7;  // edx

    v1 = CPlayerMelee::GetCurrentAnim(idx);
    if (!v1)
    {
        v2 = "No pAnim!\n";
    }
    else if (!v1->field_294)
    {
        v2 = "Non execute anim!\n";
    }
    else
    {
        v3 = *(int *)(*(unsigned int *)&idx + 380);
        if (!v3[16])
        {
            if (v3[0x11])
                goto LABEL_50385e;
            if (*(float *)&v3[13] + *(float *)&v3[14] < *(float *)gpGlobals)
            {
                v4 = CPlayerMelee::EmitDamage(idx);
                if (!*(int *)(*(unsigned int *)&idx + 324))
                    return v4;
            }
        }
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 380) + 0x44))
            goto LABEL_5038b3;
LABEL_50385e:
        v5 = 0;
        v6 = *(int *)(*(unsigned int *)&idx + 380);
        if (NULL < *(int *)(*(int *)(*(unsigned int *)&idx + 380) + 40))
        {
            do
            {
                v7 = &v6[6 * v5 + 22];
                if (!v7[3] && v7[4] && *(float *)&v7[1] < *(float *)gpGlobals)
                    CPlayerMelee::EmitComboDamage(idx, v7);
            } while ((v5 += 1, v6 = *(int *)(*(unsigned int *)&idx + 380), (int)v5 < *(int *)(*(int *)(*(unsigned int *)&idx + 380) + 40)));
        }
LABEL_5038b3:
        return CPlayerMelee::SetBlockingDirections(idx);
    }
    g_engfuncs.pfnAlertMessage(1, v2);
    return CPlayerMelee::StopMelee(idx);
}

