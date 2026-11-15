// UpdateBlockClient__12CPlayerMeleeP12melee_move_s @0x106aa0 size=435
typedef struct st_506aa0_3 {
    char padding_0[1];
    char field_1;
    char padding_2[122];
    unsigned int field_7c;
    char padding_80[108];
    unsigned int field_ec;
    char padding_f0[52];
    struct st_506aa0_4 *field_124;
    char padding_128[8];
    struct st_506aa0_3 *field_130;
    struct st_506aa0_3 *field_134;
    char padding_138[16];
    struct st_506aa0_1 *field_148;
    struct st_506aa0_2 *field_14c;
} st_506aa0_3;

typedef struct st_506aa0_1 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[20];
    struct st_506aa0_1 *field_1c;
    struct st_506aa0_1 *field_20;
} st_506aa0_1;

typedef struct st_506aa0_2 {
    unsigned int field_0;
    int field_4;
    char padding_8[20];
    struct st_506aa0_2 *field_1c;
    struct st_506aa0_2 *field_20;
} st_506aa0_2;

typedef struct st_506aa0_4 {
    struct st_506aa0_0 *field_0;
} st_506aa0_4;

typedef struct st_506aa0_0 {
    char padding_0[520];
    unsigned int field_208;
} st_506aa0_0;

typedef struct st_506aa0_5 {
    unsigned int field_0;
} st_506aa0_5;

extern unsigned int gmsgMeleeAtkHud;
extern st_506aa0_5 *g_engfuncs.pfnMessageBegin;
extern st_506aa0_5 *g_engfuncs.pfnMessageEnd;
extern st_506aa0_5 *g_engfuncs.pfnWriteByte;
extern st_506aa0_5 *g_engfuncs.pfnAlertMessage;

st_506aa0_3 * UpdateBlockClient__12CPlayerMeleeP12melee_move_s(st_506aa0_3 *a0, st_506aa0_2 *a1)
{
    st_506aa0_3 *v3;  // eax
    st_506aa0_2 *iter;  // esi
    st_506aa0_1 *node;  // edi
    unsigned int v6;  // edi
    unsigned int v0;  // [bp-0x3c]
    st_506aa0_3 *v1;  // [bp-0xc]
    st_506aa0_3 *v2;  // [bp-0x8]

    v3 = a0;
    iter = v3->field_14c;
    node = NULL;
    if (v3->field_7c || a0->field_130 && (v3 = a0->field_130, a0->field_130->field_ec))
    {
LABEL_506af3:
        node = v3->field_148;
    }
    else if (a0->field_134)
    {
        v3 = a0->field_134;
        goto LABEL_506af3;
    }
    else
    {
        v3 = g_engfuncs.pfnAlertMessage(1, "ERROR: NON-VALID UPDATE BLOCK\n");
    }
    if (!iter)
    {
        return v3;
    }
    else if (node)
    {
        if (iter->field_1c)
        {
            do
            {
                iter = iter->field_1c;
            } while (iter->field_1c);
        }
        for (; node->field_1c; node = node->field_1c);
        if (!iter)
            return v3;
        v2 = 0x1;
        if (iter != a1)
        {
            do
            {
                iter = iter->field_20;
                if (!iter)
                    return v3;
            } while ((v2 = &v2->field_1, iter != a1));
        }
        if (!iter)
            return v3;
        v1 = NULL;
        while (1)
        {
            if (!node)
                return v3;
            v3 = CPlayerMelee::IsDirectionless(a0, node->field_4);
            if (!v3 && (v1 = &v1->field_1, v3 = v2, v1 == v3))
                break;
            node = node->field_20;
        }
        v6 = 2;
        if (CPlayerMelee::Block(a0, node->field_4, iter->field_4))
            v6 = 1;
        g_engfuncs.pfnMessageBegin(1, gmsgMeleeAtkHud, 0, *(int *)(*(int *)a0->field_124 + 520));
        g_engfuncs.pfnWriteByte(3);
        g_engfuncs.pfnWriteByte(v6);
        v0 = a1->field_0;
        g_engfuncs.pfnWriteByte(v0);
        return g_engfuncs.pfnMessageEnd(v0);
    }
    else
    {
        return v3;
    }
}

