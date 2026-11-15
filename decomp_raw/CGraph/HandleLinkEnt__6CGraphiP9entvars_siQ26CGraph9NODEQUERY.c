// HandleLinkEnt__6CGraphiP9entvars_siQ26CGraph9NODEQUERY @0xdf450 size=504
typedef struct st_4df450_3 {
    char padding_0[124];
    struct st_4df450_2 *field_7c;
} st_4df450_3;

typedef struct st_4df450_1 {
    unsigned int field_0;
} st_4df450_1;

typedef struct st_4df450_4 {
    unsigned int field_0;
    char padding_4[412];
    char field_1a0;
    char field_1a1;
    char padding_1a2[102];
    struct st_4df450_3 *field_208;
} st_4df450_4;

typedef struct st_4df450_0 {
    char padding_0[84];
    struct st_4df450_1 *field_54;
} st_4df450_0;

typedef struct st_4df450_2 {
    char padding_0[96];
    struct st_4df450_0 *field_60;
} st_4df450_2;

typedef struct st_4df450_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4df450_5;

extern st_4df450_1 *g_6168b4;
extern st_4df450_1 *g_6168d4;
extern st_4df450_1 *g_6168d8;
extern st_4df450_5 *gpGlobals;

unsigned int HandleLinkEnt__6CGraphiP9entvars_siQ26CGraph9NODEQUERY(unsigned int *a0, unsigned int a1, st_4df450_4 *a2, unsigned short a3, unsigned int a4)
{
    unsigned int v3;  // edi
    unsigned int *v4;  // eax
    st_4df450_3 *v5;  // eax
    st_4df450_2 *v6;  // eax
    st_4df450_2 *v7;  // edx
    unsigned int v0;  // [bp-0x6c]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]

    if (!*a0 || !a0[1])
    {
        v1 = "Graph not ready!\n";
        v0 = 2;
        v4 = g_6168b4;
        goto LABEL_4df63a;
    }
    v3 = 0;
    if (!a2 || !g_6168d8(a2->field_208))
        v3 = 1;
    if (v3)
    {
        g_6168b4(2, "dead path ent!\n");
    }
    else if (!sub_488af0(a2->field_0 + gpGlobals->field_98, "func_door") || !sub_488af0(a2->field_0 + gpGlobals->field_98, "func_door_rotating"))
    {
        v5 = a2->field_208;
        if (a2->field_208 || (v5 = g_6168d4(0), v5))
            v6 = v5->field_7c;
        else
            v6 = NULL;
        v7 = v6;
        if (a2->field_1a1 & 1)
        {
            if (!(*(char *)((void*)&a3 + 1) & 2) && (v7->field_60->field_54(v7) || !(a2->field_1a0 & 32)))
                goto LABEL_4df63c;
        }
        else
        {
            if ((v7->field_60->field_54(v7) || !(a2->field_1a0 & 32)) && (!(*(char *)((void*)&a3 + 1) & 2) || a2->field_1a1 & 2 && a4 != 1))
                goto LABEL_4df63c;
        }
    }
    else if (sub_488af0(a2->field_0 + gpGlobals->field_98, "func_breakable") || a4 != 1)
    {
        v2 = a2->field_0 + gpGlobals->field_98;
        v1 = "Unhandled Ent in Path %s\n";
        v0 = 2;
        v4 = g_6168b4;
LABEL_4df63a:
        v4(v0, v1);
LABEL_4df63c:
        return 0;
    }
    return 1;
}

