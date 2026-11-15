// LinkEntForLink__6CGraphP5CLinkP5CNode @0xdf260 size=493
typedef struct st_4df260_0 {
    unsigned int field_0;
    char padding_4[124];
    char field_80;
    char padding_81[288];
    char field_1a1;
    char padding_1a2[42];
    unsigned int field_1cc;
} st_4df260_0;

typedef struct st_4df260_1 {
    char padding_0[8];
    struct st_4df260_0 *field_8;
} st_4df260_1;

typedef struct st_4df260_2 {
    char padding_0[152];
    unsigned int field_98;
} st_4df260_2;

typedef struct st_4df260_3 {
    unsigned int field_0;
} st_4df260_3;

extern st_4df260_3 *g_engfuncs.pfnFindEntityByString;
extern st_4df260_3 *g_engfuncs.pfnAlertMessage;
extern st_4df260_3 *g_engfuncs.pfnEntOffsetOfPEntity;
extern st_4df260_2 *gpGlobals;
extern int g_pBodyQueueHead;

st_4df260_0 * LinkEntForLink__6CGraphP5CLinkP5CNode(unsigned int a0, st_4df260_1 *a1, int a2)
{
    unsigned int *v5;  // edi
    unsigned int v6;  // edi
    unsigned int *i;  // esi
    char *v0;  // [bp-0x6c]
    st_4df260_0 *v1;  // [bp-0x68]
    char v2;  // [bp-0x64]
    char v3;  // [bp-0x44]
    st_4df260_0 *v4;  // [bp-0x14]

    v1 = a1->field_8;
    if (!a1->field_8)
        return NULL;
    v5 = NULL;
    if (strcmp@GLIBC_2.0(v1->field_0 + gpGlobals->field_98, "func_door") && strcmp@GLIBC_2.0(v1->field_0 + gpGlobals->field_98, "func_door_rotating"))
    {
        g_engfuncs.pfnAlertMessage(2, "Unsupported PathEnt:\n'%s'\n", v1->field_0 + gpGlobals->field_98);
    }
    else if (!(v1->field_1a1 & 1))
    {
        v0 = &v2;
        do
        {
            do
            {
                v5 = g_engfuncs.pfnFindEntityByString(v5, "target", v1->field_1cc + gpGlobals->field_98);
                v6 = 0;
                if (!v5 || !g_engfuncs.pfnEntOffsetOfPEntity(v5))
                    v6 = 1;
                if (v6)
                    return v1;
                i = (!v5 ? NULL : v5 + 32);
            } while (strcmp@GLIBC_2.0(*i + gpGlobals->field_98, "func_button") && strcmp@GLIBC_2.0(*i + gpGlobals->field_98, "func_rot_button"));
            VecBModelOrigin(v0, i);
            UTIL_TraceLine(a2, v0, 1, g_pBodyQueueHead, &v3);
        } while ((!v4 ? 0 : (struct st_4df260_0 *)&v4->field_80) != i);
        if (v4)
            return &v4->field_80;
    }
    else
    {
        return v1;
    }
    return NULL;
}

