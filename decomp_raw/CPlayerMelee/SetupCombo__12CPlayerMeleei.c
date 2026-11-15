// SetupCombo__12CPlayerMeleei @0x104fd0 size=598
typedef struct st_504fd0_0 {
    unsigned int field_0;
} st_504fd0_0;

extern st_504fd0_0 *g_engfuncs.pfnAlertMessage;

unsigned int * SetupCombo__12CPlayerMeleei(int a0, int a1)
{
    unsigned int *v5;  // esi
    float v0;  // [bp-0x134], Other Possible Types: unsigned int
    float v1;  // [bp-0x130]
    unsigned int v2;  // [bp-0x12c]
    float v3;  // [bp-0x108]
    char v4;  // [bp-0x104]

    CPlayerMelee::GetAnimForCombo(a0, a1, &v4);
    v5 = CPlayerMelee::CreateExeMove(a0, 1, a1, 0, 0, 0, 2, &v4);
    v5[0x11] = 1;
    v5[21] = 2;
    if (v5[9] == 1)
    {
        CPlayerMelee::AddExeCombo(a0, v5, 0x40000000, 0.07500000298023224f, 0);
        CPlayerMelee::AddExeCombo(a0, v5, 0x40000000, 0.2750000059604645f, 0);
        v1 = 0.4749999940395355f;
        CPlayerMelee::AddExeCombo(a0, v5, 0x40000000, v1, 0);
        strncpy(&v1, "ff&?", 4);
        CPlayerMelee::AddExeCombo(a0, v5, 0x40000000, v1, 0);
        CPlayerMelee::AddExeCombo(a0, v5, 0x40000000, 0.8500000238418579f, 0);
        CPlayerMelee::AddExeCombo(a0, v5, 0x3f800000, 1.0499999523162842f, 0);
        v2 = 0;
        v1 = 1.350000023841858f;
        v0 = 0x3f800000;
    }
    else if (v5[9] == 2)
    {
        v1 = 0.44999998807907104f;
        CPlayerMelee::AddExeCombo(a0, v5, 2.0f, v1, 0);
        strncpy(&v1, "ff&?", 4);
        CPlayerMelee::AddExeCombo(a0, v5, 3.0f, v1, 0);
        v3 = 4.0f;
        CPlayerMelee::AddExeCombo(a0, v5, 4.0f, 1.2000000476837158f, 0);
        v2 = 0;
        v1 = 1.399999976158142f;
        v0 = v3;
    }
    else
    {
        g_engfuncs.pfnAlertMessage(1, "Removing invalid combo move!\n");
        __builtin_delete(v5);
        return NULL;
    }
    CPlayerMelee::AddExeCombo(a0, v5);
    CPlayerMelee::MeleeText(a0, 2, 0);
    return v5;
}

