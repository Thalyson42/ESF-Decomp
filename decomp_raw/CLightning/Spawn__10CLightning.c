// Spawn__10CLightning @0xb03a0 size=427
typedef struct st_4b03a0_0 {
    float field_0;
} st_4b03a0_0;

extern char ToggleUse__10CLightningP11CBaseEntityT18USE_TYPEf;
extern char StrikeUse__10CLightningP11CBaseEntityT18USE_TYPEf;
extern char StrikeThink__10CLightning;
extern char DamageThink__10CLightning;
extern char SUB_Remove__11CBaseEntity;
extern st_4b03a0_0 *gpGlobals;

unsigned int Spawn__10CLightning(float idx)
{
    unsigned int v1;  // eax
    unsigned int v2;  // edx
    unsigned int *v11;  // eax
    char v3;  // al
    unsigned int *v4;  // ecx
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int *v7;  // edx
    unsigned int *v8;  // eax

    if (!*(int *)(*(unsigned int *)&idx + 140))
    {
        *(unsigned short *)&v1 = 0;
        *(unsigned int *)(*(unsigned int *)&idx + 12) = v1 | 0xffff0000;
        *(char **)(*(unsigned int *)&idx + 16) = &SUB_Remove__11CBaseEntity;
    }
    else
    {
        *(unsigned int *)(*(int *)idx + 268) = 0;
        (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 12))(idx);
        *(float *)(*(int *)idx + 484) = *(float *)gpGlobals;
        v2 = 0;
        v3 = 0;
        if (*(float *)(*(unsigned int *)&idx + 112) == 0.0f)
        {
            v3 = !(*(char *)(*(int *)idx + 416) & 8);
            v2 = !(*(char *)(*(int *)idx + 416) & 8);
        }
        if (v2)
        {
            *(unsigned int *)(*(unsigned int *)&idx + 12) = 0;
            *(unsigned int *)(*(unsigned int *)&idx + 16) = 0;
            v4 = *(int *)idx;
            v5 = _INSERT(CONCAT(v3, 0), 0, 0);
            if (0.0 < *(float *)&v4[120])
            {
                v6 = _INSERT(v5, 0, 0);
                *(unsigned int *)(*(unsigned int *)&idx + 12) = v6 | 0xffff0000;
                *(char **)(*(unsigned int *)&idx + 16) = &DamageThink__10CLightning;
                *(float *)&v4[65] = (float)(0.1 + *(float *)gpGlobals);
            }
            v7 = *(int *)idx;
            if (v7[115])
            {
                if (!((char)v7[104] & 1))
                {
                    v7[70] = 128;
                    *(unsigned int *)(*(unsigned int *)&idx + 100) = 0;
                    v8 = *(int *)idx;
                    v8[65] = 0;
                }
                else
                {
                    *(unsigned int *)(*(unsigned int *)&idx + 100) = 1;
                }
                *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(v8, 0, 0) | 0xffff0000;
                *(char **)(*(unsigned int *)&idx + 32) = &ToggleUse__10CLightningP11CBaseEntityT18USE_TYPEf;
            }
        }
        else
        {
            *(unsigned int *)(*(unsigned int *)&idx + 100) = 0;
            if (*(int *)(*(int *)idx + 460))
            {
                *(unsigned int *)(*(unsigned int *)&idx + 28) = _INSERT(*(int *)idx, 0, 0) | 0xffff0000;
                *(char **)(*(unsigned int *)&idx + 32) = &StrikeUse__10CLightningP11CBaseEntityT18USE_TYPEf;
            }
            v11 = *(int *)idx;
            if (!v11[115] || (char)v11[104] & 1)
            {
                *(unsigned int *)(*(unsigned int *)&idx + 12) = _INSERT(v11, 0, 0) | 0xffff0000;
                *(char **)(*(unsigned int *)&idx + 16) = &StrikeThink__10CLightning;
                *(float *)(*(int *)idx + 260) = (float)(1.0 + *(float *)gpGlobals);
            }
        }
    }
    return v1 | 0xffff0000;
}

