// CreateSkillData__11CBotManager @0x140cc0 size=2206
typedef struct st_540cc0_0 {
    unsigned int field_0;
} st_540cc0_0;

extern st_540cc0_0 *g_616904;

int CreateSkillData__11CBotManager(float a0)
{
    double v14;  // mm7
    char *v15;  // edi
    unsigned int v16;  // eax
    unsigned int v17;  // edi
    unsigned int idx;  // eax
    float v19;  // edx
    int v0;  // [bp-0x24c]
    char *v1;  // [bp-0x224]
    char *v2;  // [bp-0x220]
    float v3;  // [bp-0x21c]
    unsigned int v4;  // [bp-0x218]
    int v5;  // [bp-0x214]
    int v6;  // [bp-0x210]
    unsigned short v7;  // [bp-0x20c]
    unsigned short v8;  // [bp-0x20a]
    char v9;  // [bp-0x204]
    char v10;  // [bp-0x204]
    char v11;  // [bp-0x104]
    char v12;  // [bp-0x103]

    sub_48b260(a0);
    v11 = 0;
    sub_48d0e0(&v12, 0, 0xff);
    v4 = 0xffffffff;
    sub_489050(&v11, "skill.cfg", 0);
    v5 = sub_48d440(&v11, "r");
    g_616904("Reading skill.cfg file... ");
    if (!v5)
        return g_616904("file not found, default settings will be used\n");
    do
    {
        v15 = NULL;
        v10 = 0;
        v0 = v5;
        while (1)
        {
            v16 = sub_487f00(v0);
            if (v16 != 32)
                break;
            v0 = v5;
        }
        if (v16 == 0xffffffff)
            goto LABEL_540e30;
        switch (v16)
        {
        case 10:
LABEL_540e30:
            if (v16 != 13)
                goto LABEL_540e47;
        case 13:
LABEL_540e35:
            v16 = sub_487f00(v5);
LABEL_540e47:
            if (v16 == 0xffffffff)
            {
                sub_48c560(v5);
                v5 = 0;
            }
            *(char *)(v15 + &v10) = 0;
            v17 = 0;
            v2 = NULL;
            switch (v10)
            {
            case 32:
LABEL_540ea7:
                (&v10)[v17] = 0;
                v2 = &(&v9)[1 + v17];
                break;
            case 0:
LABEL_540e9d:
                if ((&v10)[v17] == 32)
                    goto LABEL_540ea7;
                else
                    goto LABEL_540ebb;
            default:
                do
                {
                    v17 += 1;
                    if ((&v10)[v17] == 32)
                        goto LABEL_540ea7;
                } while ((&v10)[v17]);
                goto LABEL_540e9d;
            }
LABEL_540ebb:
            if (v10 != 35 && v10)
            {
                if (!sub_48cac0(&v10, "[SKILL1]"))
                {
                    v4 = 0;
                }
                else if (!sub_48cac0(&v10, "[SKILL2]"))
                {
                    v4 = 1;
                }
                else if (!sub_48cac0(&v10, "[SKILL3]"))
                {
                    v4 = 2;
                }
                else if (!sub_48cac0(&v10, "[SKILL4]"))
                {
                    v4 = 3;
                }
                else if (!sub_48cac0(&v10, "[SKILL5]"))
                {
                    v4 = 4;
                }
                if (!v2 || !*v2 || v4 == 0xffffffff)
                    break;
                sub_487fc0(v2, 0, 0);
                v3 = (float)v14;
                if (!sub_48cac0(&v10, "min_general_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3952);
                }
                else if (!sub_48cac0(&v10, "max_general_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3956);
                }
                else if (!sub_48cac0(&v10, "min_x_aim_speed"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3960);
                }
                else if (!sub_48cac0(&v10, "max_x_aim_speed"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3964);
                }
                else if (!sub_48cac0(&v10, "min_y_aim_speed"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3968);
                }
                else if (!sub_48cac0(&v10, "max_y_aim_speed"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3972);
                }
                else if (!sub_48cac0(&v10, "min_x_aim_offset"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3976);
                }
                else if (!sub_48cac0(&v10, "max_x_aim_offset"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3980);
                }
                else if (!sub_48cac0(&v10, "min_y_aim_offset"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3984);
                }
                else if (!sub_48cac0(&v10, "max_y_aim_offset"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3988);
                }
                else if (!sub_48cac0(&v10, "min_attack_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3992);
                }
                else if (!sub_48cac0(&v10, "max_attack_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 3996);
                }
                else if (!sub_48cac0(&v10, "min_beam_explode_distance"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 4008);
                }
                else if (!sub_48cac0(&v10, "min_enemy_search_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 4000);
                }
                else if (!sub_48cac0(&v10, "max_enemy_search_delay"))
                {
                    idx = v4 * 0x11;
                    v19 = __int_as_float(*(unsigned int *)&a0 + 4004);
                }
                else if (!sub_48cac0(&v10, "random_combo_button_percent"))
                {
                    v14 = v3;
                    v8 = __fnstcw();
                    v7 = v8 | 0xc00;
                    v6 = (int)v14;
                    *(unsigned short *)(*(unsigned int *)&a0 + v4 * 0x44 + 4012) = v6;
                    break;
                }
                else if (sub_48cac0(&v10, "uses_turbo"))
                {
                    v14 = 0.0;
                    *(char *)(*(unsigned int *)&a0 + v4 * 0x44 + 4014) = v3 != 0.0f;
                    break;
                }
                else if (sub_48cac0(&v10, "uses_meleecombos"))
                {
                    v14 = 0.0;
                    *(char *)(*(unsigned int *)&a0 + v4 * 0x44 + 4015) = v3 != 0.0f;
                    break;
                }
                else if (sub_48cac0(&v10, "uses_chainswoop"))
                {
                    v14 = 0.0;
                    *(char *)(*(unsigned int *)&a0 + v4 * 0x44 + 4016) = v3 != 0.0f;
                    break;
                }
                v14 = v3;
                *(float *)(__float_as_int(v19) + idx * 4) = (float)v14;
                break;
            }
            break;
        default:
            v1 = &v10;
            do
            {
                if (v16 == 9)
                    v16 = 32;
                *(char *)(v15 + v1) = v16;
                v16 = sub_487f00(v5);
                if (*(char *)(v15 + v1) == 32 && v16 == 32)
                {
                    do
                    {
                        v16 = sub_487f00(v5);
                    } while (*(char *)(v15 + &v10) == 32 && v16 == 32);
                }
                v15 += 1;
                if (v16 == 0xffffffff)
                    break;
                if (v16 == 13)
                    goto LABEL_540e35;
            } while (v16 != 10);
            goto LABEL_540e30;
        }
    } while ((v9 = v10, v5));
    return g_616904("done\n");
}

