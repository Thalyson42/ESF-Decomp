// HandleBotCommands__11CBotManagerP7edict_s @0x1665c0 size=178
typedef struct st_5665c0_2 {
    char padding_0[124];
    struct st_5665c0_3 *field_7c;
} st_5665c0_2;

typedef struct st_5665c0_4 {
    char padding_0[12];
    struct st_5665c0_2 *field_c;
    char padding_10[3381];
    char field_d45;
} st_5665c0_4;

typedef struct st_5665c0_3 {
    struct st_5665c0_1 *field_0;
} st_5665c0_3;

typedef struct st_5665c0_1 {
    char padding_0[520];
    unsigned int field_208;
} st_5665c0_1;

typedef struct st_5665c0_0 {
    unsigned int field_0;
} st_5665c0_0;

extern st_5665c0_0 *g_6168d4;
extern st_5665c0_0 *g_61698c;

char HandleBotCommands__11CBotManagerP7edict_s(st_5665c0_4 *a0, unsigned int a1)
{
    st_5665c0_2 *v2;  // eax
    st_5665c0_1 **v3;  // eax
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]

    if (!g_61698c(v0, v1))
    {
        if (!g_61698c() && !(v2 = a0->field_c, !a0->field_c && !(v2 = g_6168d4(0), v2)))
            v3 = v2->field_7c;
        else
            v3 = NULL;
        if (!v3 || *v3->field_208 == a1)
        {
            sub_489850(a0);
            if (a0->field_d45 || !(sub_48c3d0(), !a0->field_d45))
            {
                a0->field_d45 = 0;
                return 1;
            }
        }
    }
    return 0;
}

