// DropPlayerItem__11CBasePlayerPc @0xfdd50 size=260
typedef struct st_4fdd50_3 {
    struct st_4fdd50_1 *field_0;
    char padding_4[128];
    struct st_4fdd50_3 *field_84;
} st_4fdd50_3;

typedef struct st_4fdd50_4 {
    unsigned int field_0;
    char padding_4[2364];
    struct st_4fdd50_3 *field_940;
    char padding_944[36];
    struct st_4fdd50_3 *field_968;
} st_4fdd50_4;

typedef struct st_4fdd50_1 {
    unsigned int field_0;
} st_4fdd50_1;

typedef struct st_4fdd50_0 {
    char padding_0[20];
    struct st_4fdd50_1 *field_14;
    struct st_4fdd50_1 *field_18;
} st_4fdd50_0;

typedef struct st_4fdd50_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4fdd50_5;

typedef struct st_4fdd50_2 {
    char padding_0[68];
    struct st_4fdd50_0 *field_44;
} st_4fdd50_2;

extern float g_5bd0cc;
extern st_4fdd50_2 *g_pGameRules;
extern st_4fdd50_5 *gpGlobals;

int DropPlayerItem__11CBasePlayerPc(st_4fdd50_4 *a0, char *a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // ecx
    char *v3;  // edi
    char *v4;  // edi
    int idx;  // edi
    st_4fdd50_3 *iter;  // esi

    v0 = g_pGameRules->field_44->field_18(g_pGameRules);
    if (!v0)
        return v1;
    v1 = _INSERT(v0, 0, 0);
    if (0.0 < g_5bd0cc)
        return v1;
    v2 = 0xffffffff;
    v3 = a1;
    do
    {
        v4 = v3;
    } while (v2 && (v2 -= 1, v3 = v4 + 1, *v4));
    if (v2 == 0xfffffffe)
        a1 = NULL;
    idx = 0;
    while (1)
    {
        iter = (&a0->field_940)[idx];
        while (1)
        {
            if (!iter)
            {
LABEL_4fde40:
                idx += 1;
                if (idx > 9)
                    return v1;
                break;
            }
            if (a1)
            {
                if (!sub_488af0(a1, *(int *)iter->field_0 + gpGlobals->field_98))
                    goto LABEL_4fde0b;
            }
            else
            {
                if (iter == a0->field_968)
                {
LABEL_4fde0b:
                    if (iter)
                    {
                        g_pGameRules->field_44->field_14(g_pGameRules, a0, iter);
                        sub_48a800(a0->field_0 + 80);
                        return v1;
                    }
                    goto LABEL_4fde40;
                }
            }
            iter = iter->field_84;
        }
    }
}

