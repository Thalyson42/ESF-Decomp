// ReportAIState__12CBaseMonster @0xd8fe0 size=806
typedef struct st_4d8fe0_6 {
    char padding_0[108];
    unsigned int field_6c;
    unsigned int field_70;
    char padding_74[4];
    unsigned int field_78;
    char padding_7c[8];
    struct st_4d8fe0_5 *field_84;
} st_4d8fe0_6;

typedef struct st_4d8fe0_5 {
    char padding_0[16];
    unsigned int field_10;
} st_4d8fe0_5;

typedef struct st_4d8fe0_3 {
    char padding_0[96];
    struct st_4d8fe0_1 *field_60;
    char padding_64[268];
    unsigned int field_170;
} st_4d8fe0_3;

typedef struct st_4d8fe0_2 {
    unsigned int field_0;
} st_4d8fe0_2;

typedef struct st_4d8fe0_4 {
    char padding_0[176];
    float field_b0;
    char padding_b4[172];
    float field_160;
    char padding_164[60];
    char field_1a0;
} st_4d8fe0_4;

typedef struct st_4d8fe0_1 {
    char padding_0[108];
    struct st_4d8fe0_2 *field_6c;
} st_4d8fe0_1;

typedef struct st_4d8fe0_0 {
    float field_0;
    char padding_4[148];
    unsigned int field_98;
} st_4d8fe0_0;

extern unsigned int activity_map[4];
extern unsigned int g_5b52a4[4];
extern unsigned int pStateNames.1183[4];
extern st_4d8fe0_2 *g_6168b4;
extern st_4d8fe0_0 *gpGlobals;

int ReportAIState__12CBaseMonster(float idx)
{
    unsigned int v5;  // edx
    unsigned int v6;  // esi
    st_4d8fe0_4 **v15;  // edi
    unsigned int v7;  // eax
    unsigned int *v8;  // edx
    unsigned int *v9;  // eax
    st_4d8fe0_6 *v10;  // edi
    st_4d8fe0_2 **v11;  // eax
    st_4d8fe0_3 *v12;  // edi
    unsigned int *v13;  // eax
    unsigned int v14;  // eax
    float v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    float v3;  // [bp-0x34]

    *(unsigned int *)&v3 = *(int *)*(int *)idx + gpGlobals->field_98;
    g_6168b4(1, "%s: ", *(unsigned int *)&v3);
    if ((unsigned int)*(int *)(*(unsigned int *)&idx + 384) <= 7)
    {
        *(unsigned int *)&v3 = pStateNames.1183[*(int *)(*(unsigned int *)&idx + 384)];
        g_6168b4(1, "State: %s, ", *(unsigned int *)&v3);
    }
    v5 = 0;
    while (1)
    {
        v6 = v5 * 8;
        if (!*(int *)(v6 + (char *)&activity_map[0]))
            break;
        if (*(int *)(v6 + (char *)&activity_map[0]) != *(int *)(*(unsigned int *)&idx + 372))
        {
            v5 += 1;
        }
        else
        {
            *(int *)&v3 = *(int *)(v6 + (char *)&g_5b52a4[0]);
            g_6168b4(1, "Activity %s, ", *(unsigned int *)&v3);
            break;
        }
    }
    if (*(int *)(*(unsigned int *)&idx + 396))
    {
        v7 = *(int *)(*(int *)(*(unsigned int *)&idx + 396) + 16);
        if (!*(int *)(*(int *)(*(unsigned int *)&idx + 396) + 16))
            v7 = "Unknown";
        *(unsigned int *)&v3 = v7;
        g_6168b4(1, "Schedule %s, ", *(unsigned int *)&v3);
        v8 = sub_48bbb0(idx);
        if (!v8)
            goto LABEL_4d912e;
        *(unsigned int *)&v3 = CONCAT(*(int *)(*(unsigned int *)&idx + 400), *v8);
        v2 = "Task %d (#%d), ";
        v1 = 1;
        v9 = g_6168b4;
    }
    else
    {
        v2 = "No Schedule, ";
        v1 = 1;
        v9 = g_6168b4;
    }
    v9(v1, v2);
LABEL_4d912e:
    v10 = *(unsigned int *)&idx + 264;
    if (sub_48d8b0(v10))
    {
        v11 = sub_489fd0(v10);
        g_6168b4(1, "\nEnemy is %s", *(int *)*v11 + gpGlobals->field_98);
    }
    else
    {
        g_6168b4(1, "No enemy");
    }
    v12 = (st_4d8fe0_3 *)idx;
    if (v12->field_60->field_6c(v12))
    {
        g_6168b4(1, " Moving ");
        if (*(float *)&v12->field_170 > gpGlobals->field_0)
        {
            v3 = *(float *)&v12->field_170 - gpGlobals->field_0;
            v2 = ": Stopped for %.2f. ";
            v1 = 1;
            v13 = g_6168b4;
        }
        else
        {
            v14 = (*(int *)(*(int *)(*(unsigned int *)&idx + 96) + 304))(idx);
            if (*(int *)(*(unsigned int *)&idx + 376) != v14)
                goto LABEL_4d9247;
            v2 = ": In stopped anim. ";
            v1 = 1;
            v13 = g_6168b4;
        }
        v13(v1, v2, *(unsigned int *)&v3);
    }
LABEL_4d9247:
    g_6168b4(1, "\n");
    v15 = (st_4d8fe0_4 **)idx;
    v0 = *v15->field_160;
    g_6168b4(1, "Yaw speed:%3.1f,Health: %3.1f\n", (unsigned int)(*v15->field_b0 >> 0));
    if (*v15->field_1a0 & 16)
        g_6168b4(1, " PRISONER! ");
    if (*(char *)(*(int *)idx + 417) & 1)
        g_6168b4(1, " Pre-Disaster! ");
    return g_6168b4(1, "\n");
}

