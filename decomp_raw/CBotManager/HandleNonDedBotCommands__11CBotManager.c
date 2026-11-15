// HandleNonDedBotCommands__11CBotManager @0x166680 size=1980
typedef struct st_566680_5 {
    char padding_0[124];
    struct st_566680_6 *field_7c;
} st_566680_5;

typedef struct st_566680_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_566680_4;

typedef struct st_566680_3 {
    char padding_0[20];
    struct st_566680_0 *field_14;
} st_566680_3;

typedef struct st_566680_0 {
    unsigned int field_0;
} st_566680_0;

typedef struct st_566680_6 {
    struct st_566680_4 *field_0;
} st_566680_6;

typedef struct st_566680_2 {
    char padding_0[548];
    unsigned int field_224;
} st_566680_2;

typedef struct st_566680_1 {
    char padding_0[40];
    float field_28;
    float field_2c;
    float field_30;
} st_566680_1;

extern char DrawDBSpots;
extern char g_waypoint_on;
extern char g_auto_waypoint;
extern char g_path_waypoint;
extern st_566680_0 *g_6168a4;
extern st_566680_0 *g_6168d4;
extern st_566680_0 *g_61690c;
extern st_566680_0 *g_61698c;
extern st_566680_1 *gpGlobals;
extern unsigned int cout;
extern st_566680_3 *g_625f80;

char * HandleNonDedBotCommands__11CBotManager(float idx)
{
    st_566680_5 *v19;  // eax
    st_566680_4 **v20;  // eax
    unsigned int v29;  // eax
    char *v31;  // eax
    char *v32;  // eax
    double v33;  // mm0
    char *v34;  // eax
    char *v21;  // eax
    int v22;  // edi
    unsigned int *v23;  // edx
    unsigned int *v24;  // edx
    double v25;  // mm5
    double v26;  // mm5
    char *v27;  // eax
    char *v28;  // eax
    unsigned int v0;  // [bp-0xdc]
    unsigned int v1;  // [bp-0xd8]
    unsigned int v2;  // [bp-0xcc]
    unsigned int v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xc4]
    int v5;  // [bp-0xac]
    st_566680_4 **v6;  // [bp-0xa8]
    char v7;  // [bp-0xa4]
    st_566680_2 *v8;  // [bp-0x74]
    float v9;  // [bp-0x64]
    float v10;  // [bp-0x60]
    float v11;  // [bp-0x5c]
    float v12;  // [bp-0x44]
    float v13;  // [bp-0x40]
    float v14;  // [bp-0x3c]
    unsigned int v15;  // [bp-0x24]
    unsigned int v16;  // [bp-0x20]
    float v17;  // [bp-0x1c]

    if (!g_61698c(v2, v3, v4) && !(v19 = *(int *)(*(unsigned int *)&idx + 12), !*(int *)(*(unsigned int *)&idx + 12) && !(v19 = g_6168d4(0), v19)))
        v20 = v19->field_7c;
    else
        v20 = NULL;
    v6 = v20;
    if (!v20)
        return v20;
    v21 = sub_48b140(v20);
    if ((char)v21)
        return v21;
    v5 = g_61690c(0);
    v22 = g_61690c(1);
    g_61690c(2);
    g_61690c(3);
    g_61690c(4);
    g_61690c(5);
    *(char *)(*(unsigned int *)&idx + 3397) = 1;
    if (!sub_488af0(v5, "killbotinfront"))
    {
        sub_48a800(&(*v6)[5].field_10);
        v23 = &*v6->field_8;
        *(float *)&v15 = *(float *)&*v6->field_8;
        *(float *)&v16 = *(float *)&v23[1];
        v17 = *(float *)&v23[2];
        v24 = &gpGlobals->field_28;
        v25 = 10000.0 * gpGlobals->field_28;
        v9 = (float)v25;
        v26 = 10000.0 * *(float *)&v24[1];
        v10 = (float)v26;
        v11 = (float)(10000.0 * *(float *)&v24[2]);
        v12 = (float)(v25 + *(float *)&v15);
        v13 = (float)(v26 + *(float *)&v16);
        v14 = v17 + v11;
        sub_488460(&v15, &v12, 0, 1, *(int *)&(*v6)[26].padding_0[0], &v7);
        v27 = sub_48b960(v8);
        if ((char)v27)
            return v27;
        v28 = v8->field_224 & 8200;
        if (v28 != 0x2008)
            return v28;
        return sub_48d240(v8);
    }
    else
    {
        if (!sub_488af0(v5, "waypoint"))
        {
            if (!sub_488af0(v22, "on"))
            {
                g_waypoint_on = 1;
                goto LABEL_566a2b;
            }
            else if (!sub_488af0(v22, "off"))
            {
                g_waypoint_on = 0;
LABEL_566a40:
                v29 = "waypoints are OFF\n";
            }
            else
            {
                if (!sub_488af0(v22, "add"))
                {
                    if (g_waypoint_on)
                        return sub_48af70(*(int *)&(*v6)[26].padding_0[0]);
                    g_waypoint_on = 1;
                    return sub_48af70(*(int *)&(*v6)[26].padding_0[0]);
                }
                if (!sub_488af0(v22, "delete"))
                {
                    if (g_waypoint_on)
                        return sub_48a460(*(int *)&(*v6)[26].padding_0[0]);
                    g_waypoint_on = 1;
                    return sub_48a460(*(int *)&(*v6)[26].padding_0[0]);
                }
                if (!sub_488af0(v22, "save"))
                {
                    sub_48cab0();
                    v29 = "waypoints saved\n";
                }
                else if (!sub_488af0(v22, "load"))
                {
                    v29 = (!(char)sub_48b810(*(int *)&(*v6)[26].padding_0[0]) ? "Error loading waypoints for this map\n" : "waypoints loaded\n");
                }
                else
                {
                    if (!sub_488af0(v22, "info"))
                        return sub_48a4f0(*(int *)&(*v6)[26].padding_0[0]);
                    if (!g_waypoint_on)
                        goto LABEL_566a40;
LABEL_566a2b:
                    v29 = "waypoints are ON\n";
                }
            }
        }
        else
        {
            if (!sub_488af0(v5, "autowaypoint"))
            {
                if (!sub_488af0(v22, "on"))
                {
                    g_auto_waypoint = 1;
                    g_waypoint_on = 1;
                }
                else
                {
                    if (!sub_488af0(v22, "off"))
                        g_auto_waypoint = 0;
                }
                g_625f80->field_14(&cout, "autowaypoint is ");
                if (g_auto_waypoint)
                {
                    v1 = "ON\n";
                    v0 = &cout;
                    return g_625f80->field_14(v0, v1);
                }
                v29 = "OFF\n";
            }
            else if (sub_488af0(v5, "pathwaypoint"))
            {
                v32 = sub_488af0(v5, "dbgatherspot");
                if (v32)
                {
                    *(char *)(*(unsigned int *)&idx + 3397) = 0;
                    return v32;
                }
                g_6168a4("mp_gamemode");
                if (v33 != 2.0)
                {
                    v29 = "Error: Cannot use dragonball commands when CPDB mode is off!\n";
                }
                else
                {
                    if (!sub_488af0(v22, "on"))
                    {
                        g_625f80->field_14(&cout, "DB gather spots are being drawed\n");
                        DrawDBSpots = 1;
                        return &DrawDBSpots;
                    }
                    if (!sub_488af0(v22, "off"))
                    {
                        g_625f80->field_14(&cout, "DB gather spots are not being drawed\n");
                        DrawDBSpots = 0;
                        return &DrawDBSpots;
                    }
                    if (!sub_488af0(v22, "add"))
                    {
                        g_625f80->field_14(&cout, "Adding dragonball gather spot...\n");
                        return sub_487de0(idx);
                    }
                    if (!sub_488af0(v22, "delete"))
                    {
                        g_625f80->field_14(&cout, "Deleting dragonball gather spot...\n");
                        return sub_4893a0(idx);
                    }
                    if (!sub_488af0(v22, "save"))
                        return sub_489b70(idx);
                    v34 = sub_488af0(v22, "load");
                    if (v34)
                        return v34;
                    return sub_48d0a0(idx);
                }
            }
            else if (!sub_488af0(v22, "on"))
            {
                g_path_waypoint = 1;
                g_waypoint_on = 1;
                v29 = "pathwaypoint is ON\n";
            }
            else if (!sub_488af0(v22, "off"))
            {
                g_path_waypoint = 0;
                v29 = "pathwaypoint is OFF\n";
            }
            else
            {
                if (!sub_488af0(v22, "create1"))
                {
                    v1 = 1;
                }
                else if (!sub_488af0(v22, "create2"))
                {
                    v1 = 2;
                }
                else
                {
                    if (!sub_488af0(v22, "remove1"))
                    {
                        v1 = 1;
                    }
                    else
                    {
                        v31 = sub_488af0(v22, "remove2");
                        if (v31)
                            return v31;
                        v1 = 2;
                    }
                    return sub_48bcf0(*(int *)&(*v6)[26].padding_0[0]);
                }
                return sub_48a7f0(*(int *)&(*v6)[26].padding_0[0]);
            }
        }
        v1 = v29;
        v0 = &cout;
        return g_625f80->field_14(v0, v1);
    }
}

