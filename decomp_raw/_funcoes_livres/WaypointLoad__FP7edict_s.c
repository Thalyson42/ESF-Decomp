// WaypointLoad__FP7edict_s @0x189d80 size=1029
typedef struct st_589d80_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[136];
    unsigned int field_98;
} st_589d80_0;

extern char g_waypoint_paths;
extern st_589d80_0 *gpGlobals;
extern char waypoints;
extern int num_waypoints;

char WaypointLoad__FP7edict_s(int a0)
{
    char *v19;  // esi
    char *v20;  // edi
    unsigned int v29;  // 4109
    int i;  // esi
    int iter;  // edi
    int k;  // esi
    unsigned int v21;  // ecx
    unsigned int v22;  // cc_op
    unsigned int v23;  // cc_dep1
    unsigned int v24;  // cc_dep2
    unsigned int v25;  // eax
    char *v26;  // esi
    char *v27;  // edi
    unsigned int v28;  // 4101
    int v0;  // [bp-0x52c]
    int v1;  // [bp-0x4fc]
    int v2;  // [bp-0x4f8]
    st_589d80_0 **v3;  // [bp-0x4f4]
    char v4;  // [bp-0x4ed]
    int v5;  // [bp-0x4ec]
    char v6;  // [bp-0x4e8], Other Possible Types: unsigned short
    char v7;  // [bp-0x4e6], Other Possible Types: unsigned short
    char v8;  // [bp-0x4e4]
    char v9;  // [bp-0x484]
    char v10;  // [bp-0x47d]
    unsigned int v11;  // [bp-0x47c]
    int v12;  // [bp-0x474]
    char v13;  // [bp-0x470]
    char v14;  // [bp-0x451]
    char v15;  // [bp-0x444]
    char v16;  // [bp-0x244]
    char v17;  // [bp-0x144]
    char v18;  // [bp-0x44]

    v3 = &gpGlobals;
    sub_48e110(&v18, gpGlobals->field_c + gpGlobals->field_98);
    sub_48c150(&v18, ".ESF_wpt");
    v2 = "waypoints";
    sub_489050(&v17, "waypoints", &v18);
    v1 = "rb";
    v5 = sub_48d440(&v17, "rb");
    v4 = 0;
    if (!v5)
    {
        v4 = 1;
        sub_48e110(&v18, *v3->field_c + *v3->field_98);
        sub_48c150(&v18, ".wpt");
        sub_489050(&v17, v2, &v18);
        v5 = sub_48d440(&v17, v1);
        if (v5)
            goto LABEL_589e7d;
        if (a0)
        {
            sub_48d990(&v8, "Waypoint file %s does not exist!\n", &v17);
            sub_489e90(a0 + 128, 1, &v8, 0, 0, 0, 0);
        }
    }
    else
    {
LABEL_589e7d:
        v19 = &v9;
        sub_48a160(&v9, 52, 1, v5);
        v10 = 0;
        v20 = "HPB_bot";
        v21 = 8;
        v22 = 15;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        do
        {
            v26 = v19;
            v27 = v20;
            if (!v21)
                break;
            v21 -= 1;
            v22 = 4;
            v23 = *v26;
            v24 = *v27;
            v20 = v27 + 1;
            v19 = v26 + 1;
        } while (*v26 == *v27);
        v28 = _ccall(4, v22, v23, v24, 0);
        if (!(v28 & 1))
        {
            v29 = _ccall(v22, v23, v24, 0);
            v25 = -(v29 & 1) | 1;
        }
        if (v25)
        {
            if (a0)
            {
                sub_48d990(&v8, "%s is not a ESF bot waypoint file!\n", &v17);
                sub_489e90(a0 + 128, 1, &v8, 0, 0, 0, 0);
            }
            v0 = v5;
        }
        else if (v11 != 4)
        {
            if (a0)
                sub_489e90(a0 + 128, 1, "Incompatible ESF bot waypoint file version!\nWaypoints not loaded!\n", 0, 0, 0, 0);
            v0 = v5;
        }
        else
        {
            v14 = 0;
            if (!sub_488af0(&v13, gpGlobals->field_c + gpGlobals->field_98))
            {
                sub_48d180();
                i = 0;
                if (0 < v12)
                {
                    do
                    {
                        sub_48a160(&(&waypoints)[16 * i], 16, 1, v5);
                        num_waypoints = num_waypoints + 1;
                        i += 1;
                    } while (i < v12);
                }
                iter = 0;
                while (iter < num_waypoints)
                {
                    sub_48a160(&v7, 2, 1, v5);
                    k = 0;
                    if ((short)v7 > 0)
                    {
                        do
                        {
                            sub_48a160(&v6, 2, 1, v5);
                            sub_48bc80((short)iter, v6);
                            k += 1;
                        } while (k < v7);
                        iter += 1;
                    }
                    else
                    {
                        iter += 1;
                    }
                }
                g_waypoint_paths = 1;
                sub_48c560(v5);
                if (v4)
                {
                    sub_48e110(&v18, gpGlobals->field_c + gpGlobals->field_98);
                    sub_48c150(&v18, ".ESF_wpt");
                    sub_489050(&v16, "waypoints", &v18);
                    sub_48d990(&v15, "/bin/mv -f %s %s", &v17, &v16);
                    sub_489ac0(&v15);
                }
                sub_487cd0();
                return 1;
            }
            if (a0)
            {
                sub_48d990(&v8, "%s ESF bot waypoints are not for this map!\n", &v17);
                sub_489e90(a0 + 128, 1, &v8, 0, 0, 0, 0);
            }
            v0 = v5;
        }
        sub_48c560(v5);
    }
    return 0;
}

