// ForceCorrectModels__11CBasePlayer @0xf9ff0 size=302
typedef struct st_4f9ff0_3 {
    char padding_0[1892];
    struct st_4f9ff0_2 *field_764;
} st_4f9ff0_3;

typedef struct st_4f9ff0_1 {
    unsigned int field_0;
} st_4f9ff0_1;

typedef struct st_4f9ff0_0 {
    char padding_0[60];
    struct st_4f9ff0_1 *field_3c;
} st_4f9ff0_0;

typedef struct st_4f9ff0_2 {
    char padding_0[4];
    struct st_4f9ff0_0 *field_4;
} st_4f9ff0_2;

extern int g_5a4bfc;

unsigned int ForceCorrectModels__11CBasePlayer(st_4f9ff0_3 *a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    int iter;  // esi
    char v0;  // [bp-0x105]
    char v1;  // [bp-0x104]
    char v2;  // [bp-0xc4]
    char v3;  // [bp-0x84]

    strncpy@GLIBC_2.0(&v3, &a0->padding_0[1440], 128);
    v4 = strcasecmp@GLIBC_2.0(&v3, "models/player.mdl");
    if (!v4)
        return v4;
    v5 = strcasecmp@GLIBC_2.0(&v3, &g_5a4bfc);
    if (!v5)
        return v5;
    v0 = 0;
    v6 = sscanf@GLIBC_2.0(&v3, "models/player/%*s/%s.mdl", &v2);
    iter = 0;
    while (iter <= 19 && (v6 = strcasecmp@GLIBC_2.0(32 * iter + 5922208, &g_5a4bfc), v6))
    {
        if (!strcasecmp@GLIBC_2.0(32 * iter + 5922208, &v3))
        {
            v0 = 1;
            iter += 1;
        }
        else
        {
            iter += 1;
        }
    }
    if (!v0)
    {
        return v6;
    }
    else if (a0->field_764)
    {
        strcpy@GLIBC_2.0(&v1, a0->field_764->field_4->field_3c(a0->field_764));
        return UTIL_SetPlayerModel(a0, &v1);
    }
    else
    {
        return v6;
    }
}

