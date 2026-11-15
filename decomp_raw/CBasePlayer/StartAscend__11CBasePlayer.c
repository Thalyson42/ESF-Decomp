// StartAscend__11CBasePlayer @0xf0f80 size=1039
typedef struct st_4f0f80_0 {
    float field_0;
    float field_4;
    float field_8;
    unsigned int field_c;
} st_4f0f80_0;

typedef struct st_4f0f80_1 {
    float field_0;
} st_4f0f80_1;

typedef struct st_4f0f80_2 {
    unsigned int field_0;
} st_4f0f80_2;

extern st_4f0f80_0 g_vecAuraColor;
extern st_4f0f80_2 *g_engfuncs.pfnIndexOfEdict;
extern st_4f0f80_1 *gpGlobals;

unsigned int StartAscend__11CBasePlayer(float idx)
{
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    st_4f0f80_0 *v18;  // edx
    unsigned int v19;  // eax
    double v20;  // mm7
    unsigned int *v21;  // edx
    unsigned int *v22;  // eax
    float v0;  // [bp-0xac]
    int v1;  // [bp-0xac]
    char *v2;  // [bp-0x98]
    float v3;  // [bp-0x70]
    float v4;  // [bp-0x6c]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    unsigned int v7;  // [bp-0x60]
    unsigned int v8;  // [bp-0x48]
    unsigned int v9;  // [bp-0x44]
    unsigned int v10;  // [bp-0x40]
    float v11;  // [bp-0x28]
    float v12;  // [bp-0x24]
    float v13;  // [bp-0x20]
    int v14;  // [bp-0x8]

    if (*(char *)(*(int *)idx + 423) & 4)
    {
        return v19;
    }
    else if (5.0f > *(float *)(*(int *)idx + 352))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 868))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 820))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 816))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 804))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 812))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 832))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 1904))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 892))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 1144))
    {
        return v19;
    }
    else if (*(int *)(*(unsigned int *)&idx + 1724))
    {
        return v19;
    }
    else if ((*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 140))(idx))
    {
        if (*(int *)(*(unsigned int *)&idx + 828) && !*(int *)(*(unsigned int *)&idx + 852))
            return v16;
        if (*(int *)(*(unsigned int *)&idx + 848))
        {
            return v19;
        }
        else if (100.0f <= *(float *)(*(int *)idx + 608))
        {
            v14 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 40))(*(int *)(*(unsigned int *)&idx + 1892));
            v4 = (float)v14;
            if ((double)*(int *)(*(unsigned int *)&idx + 1860) < v4)
                return v19;
            v17 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 28))(*(int *)(*(unsigned int *)&idx + 1892));
            *(unsigned int *)(*(unsigned int *)&idx + 1896) = v17;
            if (!v17)
                return v19;
            v18 = &(&g_vecAuraColor.field_0)[3 * (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1892) + 4) + 56))(*(int *)(*(unsigned int *)&idx + 1892))];
            v11 = v18->field_0;
            v12 = v18->field_4;
            v13 = v18->field_8;
            v14 = (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1896) + 4) + 40))(*(int *)(*(unsigned int *)&idx + 1896));
            v3 = (float)v14;
            if ((double)*(int *)(*(unsigned int *)&idx + 1860) >= v3 && (*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1896) + 4) + 32))(*(int *)(*(unsigned int *)&idx + 1896)))
            {
                CBasePlayer::Ascend(idx);
                v0 = idx;
                CBasePlayer::TransformFX(v0, -1.0f);
                v1 = _INSERT(v0, 0, 0);
                v19 = CPlayerMelee::SetAnimPriority(*(unsigned int *)&idx + 896, 1, CPlayerMelee::AddAnimation(*(unsigned int *)&idx + 896, v1, *(float *)gpGlobals, 1, "change_finish"));
                return v19;
            }
            *(unsigned int *)(*(unsigned int *)&idx + 1904) = 1;
            if (!(*(char *)(*(int *)idx + 421) & 2) && !*(int *)(*(unsigned int *)&idx + 800))
                CBasePlayer::StartFly(idx);
            *(unsigned int *)(*(unsigned int *)&idx + 1876) = 0;
            v20 = (v3 - (double)*(int *)(*(unsigned int *)&idx + 1860)) * 10.0 / (v3 - v4);
            *(float *)(*(unsigned int *)&idx + 1908) = (float)v20;
            if (v20 >= 9.0 || !(*(int *)(*(int *)(*(int *)(*(unsigned int *)&idx + 1896) + 4) + 32))(*(int *)(*(unsigned int *)&idx + 1896)) || !*(int *)(*(unsigned int *)&idx + 1740))
            {
                *(float *)(*(unsigned int *)&idx + 1908) = 10.0f;
                if (!*(int *)(*(unsigned int *)&idx + 1740))
                    *(unsigned int *)(*(unsigned int *)&idx + 1740) = 1;
                if (*(int *)(*(unsigned int *)&idx + 828))
                    goto LABEL_4f12d9;
                *(unsigned int *)(*(unsigned int *)&idx + 1408) = 3;
            }
            else if (0.0 < *(float *)(*(unsigned int *)&idx + 1908) && 1.0 >= *(float *)(*(unsigned int *)&idx + 1908))
            {
                *(float *)(*(unsigned int *)&idx + 1908) = 1.0f;
                *(unsigned int *)(*(unsigned int *)&idx + 1408) = 1;
            }
            else if (1.0 < *(float *)(*(unsigned int *)&idx + 1908))
            {
                if (*(float *)(*(unsigned int *)&idx + 1908) >= 9.0f)
                    goto LABEL_4f12e5;
LABEL_4f12d9:
                *(unsigned int *)(*(unsigned int *)&idx + 1408) = 2;
            }
            else
            {
LABEL_4f12e5:
                *(unsigned int *)(*(unsigned int *)&idx + 1408) = 0;
            }
            CBasePlayer::TransformFX(idx, *(float *)(*(unsigned int *)&idx + 1908));
            CPlayerMelee::RemoveAllAnims(*(unsigned int *)&idx + 896);
            v21 = *(int *)idx;
            v22 = v21 + 20;
            *(float *)&v8 = *(float *)&v21[20];
            *(float *)&v9 = *(float *)&v22[1];
            *(float *)&v10 = *(float *)&v22[2];
            v8 = 0;
            v5 = 0;
            *(float *)&v6 = *(float *)&v22[1];
            *(float *)&v7 = *(float *)&v22[2];
            v2 = &v5;
            UTIL_Model_FixAngles(g_engfuncs.pfnIndexOfEdict(v21[130]));
            *(float *)(*(unsigned int *)&idx + 1908) = *(float *)(*(unsigned int *)&idx + 1908) + *(float *)gpGlobals;
            return v19;
        }
        else
        {
            return v19;
        }
    }
    else
    {
        return v19;
    }
}

