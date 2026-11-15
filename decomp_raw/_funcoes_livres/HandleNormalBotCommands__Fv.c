// HandleNormalBotCommands__Fv @0x166e40 size=12359
typedef struct st_566e40_4 {
    char padding_0[164];
    struct st_566e40_0 *field_a4;
} st_566e40_4;

typedef struct st_566e40_1 {
    char padding_0[20];
    struct st_566e40_0 *field_14;
} st_566e40_1;

typedef struct st_566e40_0 {
    unsigned int field_0;
} st_566e40_0;

typedef struct st_566e40_6 {
    struct st_566e40_3 *field_0;
    char padding_4[92];
    struct st_566e40_4 *field_60;
    char padding_64[4092];
    unsigned short field_1060;
} st_566e40_6;

typedef struct st_566e40_2 {
    char padding_0[512];
    struct st_566e40_1 *field_200;
} st_566e40_2;

typedef struct st_566e40_3 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[98];
    unsigned int field_208;
} st_566e40_3;

typedef struct st_566e40_5 {
    struct st_566e40_3 *field_0;
    char padding_4[92];
    struct st_566e40_4 *field_60;
} st_566e40_5;

typedef struct st_566e40_7 {
    char padding_0[96];
    struct st_566e40_0 *field_60;
} st_566e40_7;

typedef struct st_566e40_8 {
    char padding_0[68];
    struct st_566e40_7 *field_44;
} st_566e40_8;

extern st_566e40_8 *g_pGameRules;
extern unsigned int g_teamplay;
extern st_566e40_0 *g_61690c;
extern st_566e40_0 *g_61698c;
extern st_566e40_3 BotManager;
extern char g_6253c5;
extern int g_6253c6;
extern int g_6253c7;
extern int g_6253c8;
extern int g_6253c9;
extern int g_6253ca;
extern int g_6253cb;
extern int g_6253cc;
extern int g_6253cd;
extern st_566e40_2 cout;
extern st_566e40_1 *g_625f80;

st_566e40_3 * HandleNormalBotCommands__Fv(void)
{
    unsigned int v24;  // esi
    char *v25;  // edi
    char *v34;  // ecx
    st_566e40_3 *v35;  // eax
    int v36;  // eax
    st_566e40_3 *v37;  // eax
    st_566e40_3 *v38;  // eax
    st_566e40_3 *v39;  // eax
    st_566e40_3 *v40;  // eax
    st_566e40_3 *v41;  // eax
    st_566e40_3 *v42;  // eax
    st_566e40_3 *v43;  // eax
    char *v26;  // esi
    st_566e40_3 *v44;  // eax
    int v45;  // eax
    unsigned int v46;  // eax
    st_566e40_3 *v47;  // eax
    st_566e40_3 *v48;  // eax
    st_566e40_3 *v49;  // eax
    st_566e40_3 *v50;  // eax
    st_566e40_3 *v51;  // eax
    st_566e40_3 *v52;  // eax
    st_566e40_3 *v53;  // eax
    short v27;  // ax
    st_566e40_3 *v54;  // eax
    st_566e40_3 *v55;  // eax
    st_566e40_3 *v56;  // eax
    st_566e40_3 *v57;  // eax
    st_566e40_3 *v58;  // eax
    st_566e40_3 *v59;  // eax
    st_566e40_3 *v60;  // eax
    st_566e40_3 *v61;  // eax
    st_566e40_3 *v62;  // eax
    st_566e40_2 *v63;  // ecx
    char *v28;  // edx
    st_566e40_3 *v64;  // eax
    st_566e40_3 *v65;  // eax
    st_566e40_3 *v66;  // eax
    st_566e40_5 *v67;  // esi
    st_566e40_3 *v68;  // eax
    st_566e40_3 *v69;  // eax
    st_566e40_6 *v70;  // esi
    unsigned short v71;  // di
    st_566e40_3 *v72;  // eax
    st_566e40_3 *v73;  // eax
    char *v29;  // ecx
    st_566e40_5 *v74;  // esi
    st_566e40_3 *v75;  // eax
    st_566e40_3 *v76;  // eax
    char *v30;  // eax
    short v31;  // si
    char *v32;  // eax
    char *v33;  // edx
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x64]
    int v2;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x54]
    unsigned int v4;  // [bp-0x4c]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    char v7;  // [bp-0x2f]
    char v8;  // [bp-0x2e]
    char v9;  // [bp-0x2d]
    st_566e40_2 *v10;  // [bp-0x2c]
    char *v11;  // [bp-0x28]
    short v12;  // [bp-0x24]
    short v13;  // [bp-0x22]
    char *v14;  // [bp-0x20]
    short v15;  // [bp-0x1c]
    short v16;  // [bp-0x1a]
    short v17;  // [bp-0x18]
    short v18;  // [bp-0x16]
    char *v19;  // [bp-0x14]
    char *v20;  // [bp-0x10]
    char *v21;  // [bp-0xc]
    int v22;  // [bp-0x8]

    v24 = g_61698c(v4, v5, v6) != 0;
    v22 = g_61690c(v24);
    v25 = g_61690c(v24 + 1);
    v21 = g_61690c(v24 + 2);
    v20 = g_61690c(v24 + 3);
    v19 = g_61690c(v24 + 4);
    v26 = g_61690c(v24 + 5);
    g_6253c5 = 1;
    if (!sub_488af0(v22, "addbot"))
    {
        v18 = -0x1;
        v27 = v18;
        v17 = v27;
        v16 = v27;
        v15 = v27;
        v14 = NULL;
        if (v20)
        {
            v28 = v20;
            if (*v28 && *v28 != 42)
                v14 = v28;
        }
        if (v25 && *v25 && *v25 != 42)
        {
            if (g_teamplay)
                v18 = sub_48b500(v25, 0, 10, 0);
            else
                v18 = -0x1;
        }
        if (v21)
        {
            v29 = v21;
            if (*v29 && *v29 != 42)
                v17 = sub_48b500(v29, 0, 10, 0);
        }
        if (v19)
        {
            v30 = v19;
            if (*v30 && *v30 != 42)
                v16 = sub_48b500(v30, 0, 10, 0);
        }
        if (v26 && *v26 && *v26 != 42)
            v15 = sub_48b500(v26, 0, 10, 0);
        return sub_4892c0(&BotManager.padding_0[0], v18, v17, v14, v16, v15);
    }
    else
    {
        if (!sub_488af0(v22, "addsbot"))
        {
            if (!g_teamplay)
            {
                g_625f80->field_14(&cout.padding_0[0], "Cannot create Super Bots in free fight!\n");
                goto LABEL_569e70;
            }
            else
            {
                v31 = -0x1;
                v13 = -0x1;
                v12 = -0x1;
                v11 = NULL;
                if (v19)
                {
                    v32 = v19;
                    if (*v32 && *v32 != 42)
                        v11 = v32;
                }
                if (v25 && *v25 && *v25 != 42)
                    v12 = sub_48b500(v25, 0, 10, 0);
                if (v21)
                {
                    v33 = v21;
                    if (*v33 && *v33 != 42)
                        v31 = sub_48b500(v33, 0, 10, 0);
                }
                if (v20)
                {
                    v34 = v20;
                    if (*v34 && *v34 != 42)
                        v13 = sub_48b500(v34, 0, 10, 0);
                }
                return sub_48e120(&BotManager.padding_0[0], v31, v11, v13, v12);
            }
        }
        v35 = sub_488af0(v22, "idlebots");
        if (v35)
        {
            v37 = sub_488af0(v22, "botsmove");
            if (!v37)
            {
                if (v25)
                {
                    if (*v25)
                    {
                        v3 = sub_48b500(v25, 0, 10, 0, "botsmove") != 0;
                        v36 = &g_6253c8;
                    }
                    else
                    {
                        return v37;
                    }
                }
                else
                {
                    return v37;
                }
            }
            else
            {
                v38 = sub_488af0(v22, "botsusediscs");
                if (!v38)
                {
                    if (v25)
                    {
                        if (*v25)
                        {
                            v3 = sub_48b500(v25, 0, 10, 0, "botsusediscs") != 0;
                            v36 = &g_6253c9;
                        }
                        else
                        {
                            return v38;
                        }
                    }
                    else
                    {
                        return v38;
                    }
                }
                else
                {
                    v39 = sub_488af0(v22, "shouldbotschat");
                    if (!v39)
                    {
                        if (v25)
                        {
                            if (*v25)
                            {
                                v3 = sub_48b500(v25, 0, 10, 0, "shouldbotschat") != 0;
                                v36 = &g_6253cd;
                            }
                            else
                            {
                                return v39;
                            }
                        }
                        else
                        {
                            return v39;
                        }
                    }
                    else
                    {
                        v40 = sub_488af0(v22, "bot_balanceteams");
                        if (!v40)
                        {
                            if (v25)
                            {
                                if (*v25)
                                {
                                    v3 = sub_48b500(v25, 0, 10, 0, "bot_balanceteams") != 0;
                                    v36 = &g_6253cc;
                                }
                                else
                                {
                                    return v40;
                                }
                            }
                            else
                            {
                                return v40;
                            }
                        }
                        else
                        {
                            v41 = sub_488af0(v22, "observer");
                            if (!v41)
                            {
                                if (v25)
                                {
                                    if (*v25)
                                    {
                                        v3 = sub_48b500(v25, 0, 10, 0, "observer") != 0;
                                        v36 = &g_6253ca;
                                    }
                                    else
                                    {
                                        return v41;
                                    }
                                }
                                else
                                {
                                    return v41;
                                }
                            }
                            else
                            {
                                v42 = sub_488af0(v22, "botsshoot");
                                if (!v42)
                                {
                                    if (v25)
                                    {
                                        if (*v25)
                                        {
                                            v3 = sub_48b500(v25, 0, 10, 0, "botsshoot") != 0;
                                            v36 = &g_6253c7;
                                        }
                                        else
                                        {
                                            return v42;
                                        }
                                    }
                                    else
                                    {
                                        return v42;
                                    }
                                }
                                else
                                {
                                    v43 = sub_488af0(v22, "botssearchenemies");
                                    if (!v43)
                                    {
                                        if (v25)
                                        {
                                            if (*v25)
                                            {
                                                v3 = sub_48b500(v25, 0, 10, 0, "botssearchenemies") != 0;
                                                v36 = &g_6253c6;
                                            }
                                            else
                                            {
                                                return v43;
                                            }
                                        }
                                        else
                                        {
                                            return v43;
                                        }
                                    }
                                    else
                                    {
                                        v44 = sub_488af0(v22, "bot_aggression_level");
                                        if (!v44)
                                        {
                                            if (!v25)
                                                return v44;
                                            if (!*v25)
                                                return v44;
                                            if (!sub_488af0(v25, "defensive"))
                                            {
                                                v45 = 2;
                                            }
                                            else
                                            {
                                                if (!sub_488af0(v25, "normal"))
                                                {
                                                    v45 = 1;
                                                }
                                                else
                                                {
                                                    if (sub_488af0(v25, "aggressive"))
                                                    {
                                                        v46 = "Invalid aggression level\n";
                                                        goto LABEL_569c08;
                                                    }
                                                    else
                                                    {
                                                        v45 = 0;
                                                    }
                                                }
                                            }
                                            return sub_48be30(&BotManager.padding_0[0], v45);
                                        }
                                        else
                                        {
                                            v47 = sub_488af0(v22, "botskill");
                                            if (!v47)
                                            {
                                                if (v25)
                                                {
                                                    if (*v25)
                                                        return sub_48d3f0(&BotManager.padding_0[0], (short)sub_48b500(v25, 0, 10, 0));
                                                    return v47;
                                                }
                                                else
                                                {
                                                    return v47;
                                                }
                                            }
                                            v48 = sub_488af0(v22, "bot_chat_percent");
                                            if (!v48)
                                            {
                                                if (v25)
                                                {
                                                    if (*v25)
                                                    {
                                                        v3 = (short)sub_48b500(v25, 0, 10, 0, "chat_percent");
                                                        v2 = 25;
                                                    }
                                                    else
                                                    {
                                                        return v48;
                                                    }
                                                }
                                                else
                                                {
                                                    return v48;
                                                }
                                            }
                                            else
                                            {
                                                v49 = sub_488af0(v22, "bot_taunt_percent");
                                                if (!v49)
                                                {
                                                    if (v25)
                                                    {
                                                        if (*v25)
                                                        {
                                                            v3 = (short)sub_48b500(v25, 0, 10, 0, "taunt_percent");
                                                            v2 = 27;
                                                        }
                                                        else
                                                        {
                                                            return v49;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        return v49;
                                                    }
                                                }
                                                else
                                                {
                                                    v50 = sub_488af0(v22, "bot_whine_percent");
                                                    if (!v50)
                                                    {
                                                        if (v25)
                                                        {
                                                            if (*v25)
                                                            {
                                                                v3 = (short)sub_48b500(v25, 0, 10, 0, "whine_percent");
                                                                v2 = 29;
                                                            }
                                                            else
                                                            {
                                                                return v50;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            return v50;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v51 = sub_488af0(v22, "bot_chat_tag_percent");
                                                        if (!v51)
                                                        {
                                                            if (v25)
                                                            {
                                                                if (*v25)
                                                                {
                                                                    v3 = (short)sub_48b500(v25, 0, 10, 0, "chat_tag_percent");
                                                                    v2 = 31;
                                                                }
                                                                else
                                                                {
                                                                    return v51;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                return v51;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v52 = sub_488af0(v22, "bot_chat_drop_percent");
                                                            if (!v52)
                                                            {
                                                                if (v25)
                                                                {
                                                                    if (*v25)
                                                                    {
                                                                        v3 = (short)sub_48b500(v25, 0, 10, 0, "chat_drop_percent");
                                                                        v2 = 33;
                                                                    }
                                                                    else
                                                                    {
                                                                        return v52;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    return v52;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                v53 = sub_488af0(v22, "bot_chat_swap_percent");
                                                                if (!v53)
                                                                {
                                                                    if (v25)
                                                                    {
                                                                        if (*v25)
                                                                        {
                                                                            v3 = (short)sub_48b500(v25, 0, 10, 0, "chat_swap_percent");
                                                                            v2 = 35;
                                                                        }
                                                                        else
                                                                        {
                                                                            return v53;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        return v53;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    v54 = sub_488af0(v22, "bot_chat_lower_percent");
                                                                    if (!v54)
                                                                    {
                                                                        if (v25)
                                                                        {
                                                                            if (*v25)
                                                                            {
                                                                                v3 = (short)sub_48b500(v25, 0, 10, 0, "chat_lower_percent");
                                                                                v2 = 37;
                                                                            }
                                                                            else
                                                                            {
                                                                                return v54;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            return v54;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        v55 = sub_488af0(v22, "bot_melee_percent");
                                                                        if (!v55)
                                                                        {
                                                                            if (v25)
                                                                            {
                                                                                if (*v25)
                                                                                {
                                                                                    v3 = (short)sub_48b500(v25, 0, 10, 0, "melee_percent");
                                                                                    v2 = 1;
                                                                                }
                                                                                else
                                                                                {
                                                                                    return v55;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                return v55;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            v56 = sub_488af0(v22, "bot_meleecombo_percent");
                                                                            if (!v56)
                                                                            {
                                                                                if (v25)
                                                                                {
                                                                                    if (*v25)
                                                                                    {
                                                                                        v3 = (short)sub_48b500(v25, 0, 10, 0, "meleecombo_percent");
                                                                                        v2 = 21;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        return v56;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    return v56;
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                v57 = sub_488af0(v22, "bot_meleekick_percent");
                                                                                if (!v57)
                                                                                {
                                                                                    if (v25)
                                                                                    {
                                                                                        if (*v25)
                                                                                        {
                                                                                            v3 = (short)sub_48b500(v25, 0, 10, 0, "meleekick_percent");
                                                                                            v2 = 23;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            return v57;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        return v57;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    v58 = sub_488af0(v22, "bot_teleport_percent");
                                                                                    if (!v58)
                                                                                    {
                                                                                        if (v25)
                                                                                        {
                                                                                            if (*v25)
                                                                                            {
                                                                                                v3 = (short)sub_48b500(v25, 0, 10, 0, "teleport_percent");
                                                                                                v2 = 39;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                return v58;
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            return v58;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        v59 = sub_488af0(v22, "bot_swoop_percent");
                                                                                        if (!v59)
                                                                                        {
                                                                                            if (v25)
                                                                                            {
                                                                                                if (*v25)
                                                                                                {
                                                                                                    v3 = (short)sub_48b500(v25, 0, 10, 0, "swoop_percent");
                                                                                                    v2 = 41;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    return v59;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                return v59;
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            v60 = sub_488af0(v22, "bot_block_percent");
                                                                                            if (!v60)
                                                                                            {
                                                                                                if (v25)
                                                                                                {
                                                                                                    if (*v25)
                                                                                                    {
                                                                                                        v3 = (short)sub_48b500(v25, 0, 10, 0, "block_percent");
                                                                                                        v2 = 0x33;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        return v60;
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    return v60;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                v61 = sub_488af0(v22, "bot_fly_percent");
                                                                                                if (!v61)
                                                                                                {
                                                                                                    if (v25)
                                                                                                    {
                                                                                                        if (*v25)
                                                                                                        {
                                                                                                            v3 = (short)sub_48b500(v25, 0, 10, 0, "fly_percent");
                                                                                                            v2 = 45;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            return v61;
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        return v61;
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    v62 = sub_488af0(v22, "sbot_laser_percent");
                                                                                                    if (!v62)
                                                                                                    {
                                                                                                        if (v25)
                                                                                                        {
                                                                                                            if (*v25)
                                                                                                                return sub_48df00(&BotManager.padding_0[0], (short)sub_48b500(v25, 0, 10, 0));
                                                                                                            return v62;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            return v62;
                                                                                                        }
                                                                                                    }
                                                                                                    if (!sub_488af0(v22, "restorebotpersonalities"))
                                                                                                        return sub_48ae40(&BotManager.padding_0[0]);
                                                                                                    if (!sub_488af0(v22, "bot_fill"))
                                                                                                    {
                                                                                                        if (v25 && *v25)
                                                                                                        {
                                                                                                            if (!sub_488af0(v25, "full"))
                                                                                                            {
                                                                                                                sub_48d520(&BotManager.padding_0[0]);
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                if (g_teamplay)
                                                                                                                {
                                                                                                                    if (!sub_488af0(v25, "half_good"))
                                                                                                                    {
                                                                                                                        v2 = 1;
                                                                                                                        goto LABEL_56962c;
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                        if (!sub_488af0(v25, "half_evil"))
                                                                                                                        {
                                                                                                                            v2 = 2;
LABEL_56962c:
                                                                                                                            return sub_488ee0(&BotManager.padding_0[0]);
                                                                                                                        }
                                                                                                                        if (!sub_488af0(v25, "full_good"))
                                                                                                                        {
                                                                                                                            v2 = 1;
                                                                                                                            goto LABEL_56967c;
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            if (!sub_488af0(v25, "full_evil"))
                                                                                                                            {
                                                                                                                                v2 = 2;
LABEL_56967c:
                                                                                                                                return sub_4889a0(&BotManager.padding_0[0]);
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                        v10 = &cout.padding_0[0];
                                                                                                        g_625f80->field_14(v10, "Fill arguments:\n\n");
                                                                                                        v10->field_200->field_14(v10, "\"full\" : fills the whole server with bots\n\n");
                                                                                                        v10->field_200->field_14(v10, "Teamplay only arguments:\n\n");
                                                                                                        v10->field_200->field_14(v10, "\"half_good\" : fills half team good with bots\n");
                                                                                                        v10->field_200->field_14(v10, "\"half_evil\" : fills half team evil with bots\n");
                                                                                                        v10->field_200->field_14(v10, "\"full_good\" : fills team good with bots\n");
                                                                                                        v46 = "\"full_evil\" : fills team evil with bots\n";
                                                                                                        v63 = v10;
                                                                                                        goto LABEL_569c0b;
                                                                                                    }
                                                                                                    v64 = sub_488af0(v22, "min_bots");
                                                                                                    if (!v64)
                                                                                                    {
                                                                                                        if (v25)
                                                                                                        {
                                                                                                            if (*v25)
                                                                                                                return sub_48dfa0(&BotManager.padding_0[0], (short)sub_48b500(v25, 0, 10, 0));
                                                                                                            return v64;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            return v64;
                                                                                                        }
                                                                                                    }
                                                                                                    v65 = sub_488af0(v22, "max_bots");
                                                                                                    if (!v65)
                                                                                                    {
                                                                                                        if (v25)
                                                                                                        {
                                                                                                            if (*v25)
                                                                                                                return sub_48a3f0(&BotManager.padding_0[0], (short)sub_48b500(v25, 0, 10, 0));
                                                                                                            return v65;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            return v65;
                                                                                                        }
                                                                                                    }
                                                                                                    v66 = sub_488af0(v22, "killbot");
                                                                                                    if (!v66)
                                                                                                    {
                                                                                                        if (!v25)
                                                                                                            return v66;
                                                                                                        if (*v25)
                                                                                                        {
                                                                                                            v67 = sub_48a5b0(v25);
                                                                                                            *(unsigned short *)&v1 = 1;
                                                                                                            *(unsigned short *)&v0 = 1;
                                                                                                            if ((char)sub_489a70(v67, v0, v1))
                                                                                                            {
                                                                                                                v9 = 0;
                                                                                                                v68 = v67->field_60->field_a4(v67);
                                                                                                                if (!v68)
                                                                                                                {
                                                                                                                    v68 = v67->field_0;
                                                                                                                    v9 = (v68->field_1a5 & 32) != 0;
                                                                                                                }
                                                                                                                if (!v9)
                                                                                                                    return v68;
                                                                                                                return sub_48d240(v67->field_0->field_208);
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            return v66;
                                                                                                        }
                                                                                                        goto LABEL_569bfc;
                                                                                                    }
                                                                                                    v69 = sub_488af0(v22, "botteam");
                                                                                                    if (!v69)
                                                                                                    {
                                                                                                        if (!v25)
                                                                                                            return v69;
                                                                                                        if (!*v25)
                                                                                                            return v69;
                                                                                                        if (!v21)
                                                                                                            return v69;
                                                                                                        if (!*v21)
                                                                                                            return v69;
                                                                                                        if (!g_teamplay)
                                                                                                        {
                                                                                                            v46 = "Error, no teamplay\n";
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            v70 = sub_48a5b0(v25);
                                                                                                            *(unsigned short *)&v1 = 1;
                                                                                                            *(unsigned short *)&v0 = 1;
                                                                                                            if (!(char)sub_489a70(v70, v0, v1))
                                                                                                                goto LABEL_569bfc;
                                                                                                            if (!sub_488af0(v21, "good"))
                                                                                                            {
                                                                                                                v71 = 1;
                                                                                                                goto LABEL_569b35;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                if (sub_488af0(v21, "evil"))
                                                                                                                {
                                                                                                                    v46 = "Error, invalid team\n";
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    v71 = 2;
LABEL_569b35:
                                                                                                                    v8 = 0;
                                                                                                                    v72 = v70->field_60->field_a4(v70);
                                                                                                                    if (!v72)
                                                                                                                    {
                                                                                                                        v72 = v70->field_0;
                                                                                                                        v8 = (v72->field_1a5 & 32) != 0;
                                                                                                                    }
                                                                                                                    if (!v8)
                                                                                                                        return v72;
                                                                                                                    v70->field_1060 = v71;
                                                                                                                    return g_pGameRules->field_44->field_60(g_pGameRules, v70, "jointeam");
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        v73 = sub_488af0(v22, "botclass");
                                                                                                        if (!v73)
                                                                                                        {
                                                                                                            if (v25)
                                                                                                            {
                                                                                                                if (*v25)
                                                                                                                {
                                                                                                                    if (v21)
                                                                                                                    {
                                                                                                                        if (*v21)
                                                                                                                        {
                                                                                                                            v74 = sub_48a5b0(v25);
                                                                                                                            *(unsigned short *)&v1 = 1;
                                                                                                                            *(unsigned short *)&v0 = 1;
                                                                                                                            if ((char)sub_489a70(v74, v0, v1))
                                                                                                                            {
                                                                                                                                v7 = 0;
                                                                                                                                v75 = v74->field_60->field_a4(v74);
                                                                                                                                if (!v75)
                                                                                                                                {
                                                                                                                                    v75 = v74->field_0;
                                                                                                                                    v7 = (v75->field_1a5 & 32) != 0;
                                                                                                                                }
                                                                                                                                if (!v7)
                                                                                                                                    return v75;
                                                                                                                                return sub_48af30(v74, v21);
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            return v73;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                        return v73;
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    return v73;
                                                                                                                }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                return v73;
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            v2 = "botkicklast";
                                                                                                            if (!sub_488af0(v22, v2))
                                                                                                            {
                                                                                                                *(unsigned short *)&v2 = 1;
                                                                                                                return sub_48b870(&BotManager.padding_0[0], v2);
                                                                                                            }
                                                                                                            if (!sub_488af0(v22, "botkickall"))
                                                                                                            {
                                                                                                                v2 = 0xffffffff;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                if (!sub_488af0(v22, "botkickallgood"))
                                                                                                                {
                                                                                                                    v2 = 1;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    if (!sub_488af0(v22, "botkickallevil"))
                                                                                                                    {
                                                                                                                        v2 = 2;
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                        if (!sub_488af0(v22, "bot_menu"))
                                                                                                                            return sub_489ce0(-0x1);
                                                                                                                        v76 = sub_488af0(v22, "menuselect");
                                                                                                                        if (!v76)
                                                                                                                        {
                                                                                                                            if (v25)
                                                                                                                            {
                                                                                                                                if (*v25)
                                                                                                                                    return sub_489ce0(sub_48b500(v25, 0, 10, 0));
                                                                                                                                return v76;
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                                return v76;
                                                                                                                            }
                                                                                                                        }
LABEL_569e70:
                                                                                                                        g_6253c5 = 0;
                                                                                                                        return &BotManager.padding_0[0];
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                            return sub_488aa0(&BotManager.padding_0[0]);
                                                                                                        }
LABEL_569bfc:
                                                                                                        v46 = "Error, invalid bot\n";
                                                                                                    }
                                                                                                    v63 = &cout.padding_0[0];
LABEL_569c08:
LABEL_569c0b:
                                                                                                    return v63->field_200->field_14(v63, v46);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            return sub_489f90(&BotManager.padding_0[0]);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (!v25)
        {
            return v35;
        }
        else if (*v25)
        {
            v3 = sub_48b500(v25, 0, 10, 0, "idlebots") != 0;
            v36 = &g_6253cb;
        }
        else
        {
            return v35;
        }
        return sub_48c390(&BotManager.padding_0[0], v36);
    }
}

