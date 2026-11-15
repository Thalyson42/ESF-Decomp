// ShowMenu__5NMenuv @0x16e110 size=600
typedef struct st_56e110_2 {
    char padding_0[124];
    struct st_56e110_3 *field_7c;
} st_56e110_2;

typedef struct st_56e110_3 {
    struct st_56e110_1 *field_0;
} st_56e110_3;

typedef struct st_56e110_1 {
    char padding_0[520];
    unsigned int field_208;
} st_56e110_1;

typedef struct st_56e110_4 {
    char field_0;
} st_56e110_4;

typedef struct st_56e110_0 {
    unsigned int field_0;
} st_56e110_0;

extern unsigned int gmsgShowMenu;
extern st_56e110_0 *g_616878;
extern st_56e110_0 *g_61687c;
extern st_56e110_0 *g_616880;
extern st_56e110_0 *g_616884;
extern st_56e110_0 *g_616888;
extern st_56e110_0 *g_616898;
extern st_56e110_0 *g_6168d4;
extern st_56e110_0 *g_6168ec;
extern st_56e110_0 *g_61698c;
extern st_56e110_2 *g_62468c;
extern st_56e110_4 *_5NMenu.CurrentMenuText;
extern unsigned int _5NMenu.CurrentKeySlots;

unsigned int ShowMenu__5NMenuv(void)
{
    st_56e110_2 *v13;  // eax
    st_56e110_1 **v14;  // eax
    st_56e110_1 **v15;  // edi
    unsigned int v16;  // eax
    char *v17;  // edi
    unsigned int v18;  // ecx
    char *v19;  // edi
    char *v20;  // edx
    int v21;  // ecx
    char *v22;  // edi
    int v0;  // [bp-0x168]
    int v1;  // [bp-0x164]
    unsigned int v2;  // [bp-0x15c]
    unsigned int v3;  // [bp-0x158]
    unsigned int v4;  // [bp-0x154]
    char *v5;  // [bp-0x148]
    char v6;  // [bp-0x144]
    char v7;  // [bp-0x143]
    char v8;  // [bp-0xc4]
    char v9;  // [bp-0xa4]
    char v10;  // [bp-0xa3]
    char v11;  // [bp-0x24]

    if (!g_61698c(v2, v3, v4))
    {
        if (!g_61698c() && !(v13 = g_62468c, !g_62468c && !(v13 = g_6168d4(0), v13)))
            v14 = v13->field_7c;
        else
            v14 = NULL;
        v15 = v14;
        *(unsigned short *)&v1 = 0;
        *(unsigned short *)&v0 = 0;
        v16 = sub_489a70(v15, v0, v1);
        if (!(char)v16)
            return v16;
        if (!gmsgShowMenu)
            gmsgShowMenu = g_6168ec("ShowMenu", 0xffffffff);
        g_616878(1, gmsgShowMenu, 0, *v15->field_208);
        g_616888(_5NMenu.CurrentKeySlots);
        g_616884(0xffffffff);
        g_616880(0);
        g_616898(_5NMenu.CurrentMenuText);
        return g_61687c();
    }
    else
    {
        v17 = _5NMenu.CurrentMenuText;
        v18 = 0xffffffff;
        do
        {
            v19 = v17;
        } while (v18 && (v18 -= 1, v17 = v19 + 1, *v19));
        if (~v18 - 1 > 128)
        {
            v9 = 0;
            sub_48d0e0(&v10, 0, 129);
            v6 = 0;
            sub_48d0e0(&v7, 0, 129);
            v5 = &v9;
            sub_48d360(&v9, _5NMenu.CurrentMenuText, 128);
            v20 = _5NMenu.CurrentMenuText;
            v21 = -0x1;
            do
            {
                v22 = v20;
            } while (v21 && (v21 -= 1, v20 = v22 + 1, *v22));
            sub_48d360(&v6, _5NMenu.CurrentMenuText + 129, ~v21 - 129);
            v11 = 0;
            v8 = 0;
            sub_488f70(v5, 1, 0);
            sub_488f70(&v6, 1, 0);
        }
        else
        {
            sub_488f70(_5NMenu.CurrentMenuText, 1, 0);
        }
        return sub_488f70("\n\nTo make a choice type esf_bot menuselect X where X stands for the choice number\n", 1, 0);
    }
}

