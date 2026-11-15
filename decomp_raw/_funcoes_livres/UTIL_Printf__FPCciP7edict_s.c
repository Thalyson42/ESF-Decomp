// UTIL_Printf__FPCciP7edict_s @0x179c80 size=297
typedef struct st_579c80_1 {
    char padding_0[124];
    struct st_579c80_2 *field_7c;
} st_579c80_1;

typedef struct st_579c80_2 {
    struct st_579c80_0 *field_0;
} st_579c80_2;

typedef struct st_579c80_0 {
    char padding_0[520];
    int field_208;
} st_579c80_0;

typedef struct st_579c80_3 {
    unsigned int field_0;
} st_579c80_3;

extern st_579c80_3 *g_6168d4;
extern st_579c80_3 *g_616904;
extern st_579c80_3 *g_61698c;
extern st_579c80_1 *g_62468c;

int UTIL_Printf__FPCciP7edict_s(int a0, int a1, int a2)
{
    int v0;  // edi
    st_579c80_1 *v1;  // eax
    st_579c80_0 **v2;  // eax
    st_579c80_1 *v3;  // eax
    st_579c80_0 **v4;  // eax

    v0 = a2;
    if ((char)sub_48b960(v0))
    {
        if (!g_61698c() && !(v1 = g_62468c, !g_62468c && !(v1 = g_6168d4(0), v1)))
            v2 = v1->field_7c;
        else
            v2 = NULL;
        if (!(char)sub_48b140(v2))
        {
            if (!g_61698c() && !(v3 = g_62468c, !g_62468c && !(v3 = g_6168d4(0), v3)))
                v4 = v3->field_7c;
            else
                v4 = NULL;
            v0 = *v4->field_208;
        }
    }
    if ((unsigned int)(a1 - 1) > 1 && !(char)sub_48b960(v0))
        return sub_489e90(v0 + 128, a1, a0, 0, 0, 0, 0);
    return g_616904(a0);
}

