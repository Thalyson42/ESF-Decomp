// FIdleSpeak__12CTalkMonster @0x126490 size=1062
typedef struct st_526490_3 {
    char padding_0[140];
    struct st_526490_2 *field_8c;
    char padding_90[16];
    struct st_526490_2 *field_a0;
} st_526490_3;

typedef struct st_526490_6 {
    char padding_0[352];
    float field_160;
} st_526490_6;

typedef struct st_526490_2 {
    unsigned int field_0;
} st_526490_2;

typedef struct st_526490_0 {
    char padding_0[417];
    char field_1a1;
} st_526490_0;

typedef struct st_526490_7 {
    char padding_0[432];
    float field_1b0;
} st_526490_7;

typedef struct st_526490_8 {
    char padding_0[108];
    struct st_526490_2 *field_6c;
    char padding_70[396];
    struct st_526490_2 *field_1fc;
} st_526490_8;

typedef struct st_526490_1 {
    struct st_526490_0 *field_0;
    char padding_4[728];
    unsigned int field_2dc;
    unsigned int field_2e0;
} st_526490_1;

typedef struct st_526490_9 {
    char padding_0[96];
    struct st_526490_8 *field_60;
    char padding_64[680];
    unsigned int field_30c;
} st_526490_9;

typedef struct st_526490_5 {
    char padding_0[272];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[400];
    char field_2a8;
    char padding_2a9[103];
    unsigned int field_310;
    unsigned int field_314;
} st_526490_5;

typedef struct st_526490_4 {
    char padding_0[96];
    struct st_526490_3 *field_60;
} st_526490_4;

extern unsigned int _12CTalkMonster.g_talkWaitTime;
extern st_526490_2 *g_engfuncs.pfnRandomLong;
extern st_526490_2 *g_engfuncs.pfnRandomFloat;

double FIdleSpeak__12CTalkMonster(float idx)
{
    st_526490_1 *v5;  // edx
    double v6;  // mm7
    st_526490_7 **v15;  // eax
    unsigned int v16;  // esi
    st_526490_6 **v17;  // eax
    st_526490_7 **v18;  // eax
    st_526490_9 *v19;  // esi
    unsigned int *v20;  // eax
    unsigned int v21;  // 128
    int v22;  // eax
    unsigned int v7;  // edi
    st_526490_4 *v8;  // esi
    st_526490_5 *v9;  // ecx
    unsigned int v10;  // edx
    st_526490_6 **v11;  // eax
    st_526490_7 **v12;  // eax
    unsigned int v13;  // esi
    st_526490_6 **v14;  // eax
    float v0;  // [bp-0x38]
    float v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    if (CTalkMonster::FOkToSpeak(idx))
    {
        v5 = (st_526490_1 *)idx;
        if (v5->field_0->field_1a1 & 1)
        {
            v3 = v5->field_2dc;
            v2 = v5->field_2e0;
            v0 = 5.199999809265137f;
            v6 = 4.800000190734863;
        }
        else
        {
            v3 = *(int *)(*(unsigned int *)&idx + 700);
            v2 = *(int *)(*(unsigned int *)&idx + 696);
            v0 = 3.200000047683716f;
            v6 = 2.799999952316284;
        }
        g_engfuncs.pfnRandomFloat((float)v6);
        v1 = (float)v6;
        CTalkMonster::GetVoicePitch(idx);
        v7 = *(unsigned int *)&idx + 272;
        v8 = EHANDLE::__opP11CBaseEntity(v7);
        if (v8 && v8->field_60->field_a0(v8) && v8->field_60->field_8c(v8))
        {
            v9 = (st_526490_5 *)idx;
            v10 = v9->field_114;
            v9->field_310 = v9->field_110;
            v9->field_314 = v10;
            if (!(v9->field_2a8 & 4))
            {
                v11 = EHANDLE::__rf(v7);
                v12 = EHANDLE::__rf(v7);
                v6 = *v12->field_1b0 * 0.125;
                if (v6 >= *v11->field_160)
                {
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 748), v1, 0x3f800000, 2.0f);
                    *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) | 4;
                    return 2.0;
                }
            }
            if (!(*(char *)(*(unsigned int *)&idx + 680) & 2))
            {
                v13 = *(unsigned int *)&idx + 272;
                v14 = EHANDLE::__rf(v13);
                v15 = EHANDLE::__rf(v13);
                v6 = *v15->field_1b0 * 0.25;
                if (v6 >= *v14->field_160)
                {
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 744), v1, 0x3f800000, 2.0f);
                    *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) | 2;
                    return 2.0;
                }
            }
            if (!(*(char *)(*(unsigned int *)&idx + 680) & 1))
            {
                v16 = *(unsigned int *)&idx + 272;
                v17 = EHANDLE::__rf(v16);
                v18 = EHANDLE::__rf(v16);
                v6 = *v18->field_1b0 * 0.5;
                if (v6 >= *v17->field_160)
                {
                    (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, *(int *)(*(unsigned int *)&idx + 740), v1, 0x3f800000, 2.0f);
                    *(char *)(*(unsigned int *)&idx + 680) = *(char *)(*(unsigned int *)&idx + 680) | 1;
                    return 2.0;
                }
            }
        }
        v19 = CTalkMonster::FindNearestFriend(idx, 0);
        if (v19 && !v19->field_60->field_6c(v19) && (int)g_engfuncs.pfnRandomLong(0, 99) <= 74)
        {
            (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, v2, v1, 0x3f800000, 2.0f);
            EHANDLE::__as(*(unsigned int *)&idx + 784, v19);
            v19->field_60->field_1fc(v19, idx);
            v20 = (unsigned int *)idx;
            v21 = *&v20[195];
            v19->field_30c = v21;
            v20[171] = v20[171] + 1;
            return __int_as_float(v21);
        }
        if (g_engfuncs.pfnRandomLong(0, 1))
        {
            v22 = CTalkMonster::FindNearestFriend(idx, 1);
            if (v22)
            {
                EHANDLE::__as(*(unsigned int *)&idx + 784, v22);
                (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 360))(idx, v3, v1, 0x3f800000, 2.0f);
                *(unsigned int *)(*(unsigned int *)&idx + 684) = *(int *)(*(unsigned int *)&idx + 684) + 1;
                return 2.0;
            }
        }
        CTalkMonster::Talk(idx, 0);
        _12CTalkMonster.g_talkWaitTime = 0;
    }
    return v6;
}

