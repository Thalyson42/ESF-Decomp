// SelectItem__11CBasePlayerPCc @0xfba90 size=357
typedef struct st_4fba90_3 {
    struct st_4fba90_3 *field_0;
    char padding_4[92];
    struct st_4fba90_1 *field_60;
    char padding_64[32];
    struct st_4fba90_3 *field_84;
    char padding_88[1776];
    unsigned int field_778;
    char padding_77c[8];
    unsigned int field_784;
    char padding_788[440];
    char field_940;
    char padding_941[39];
    struct st_4fba90_3 *field_968;
    char padding_96c[4];
    struct st_4fba90_3 *field_970;
} st_4fba90_3;

typedef struct st_4fba90_1 {
    char padding_0[248];
    struct st_4fba90_2 *field_f8;
    struct st_4fba90_2 *field_fc;
    struct st_4fba90_2 *field_100;
    struct st_4fba90_2 *field_104;
    struct st_4fba90_2 *field_108;
} st_4fba90_1;

typedef struct st_4fba90_2 {
    unsigned int field_0;
} st_4fba90_2;

typedef struct st_4fba90_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4fba90_0;

extern st_4fba90_0 *gpGlobals;

st_4fba90_3 * SelectItem__11CBasePlayerPCc(st_4fba90_3 *a0, int a1)
{
    st_4fba90_3 *v1;  // eax
    int v2;  // edi
    st_4fba90_3 *iter;  // esi
    st_4fba90_3 *v4;  // eax
    st_4fba90_3 *v5;  // eax
    st_4fba90_3 *v6;  // eax
    st_4fba90_3 *v7;  // eax
    st_4fba90_3 *v8;  // edx
    st_4fba90_3 *v9;  // eax
    st_4fba90_3 **v0;  // [bp-0x8]

    if (!a1)
        return v9;
    if (a0->field_968)
    {
        v1 = a0->field_968->field_60->field_100(a0->field_968);
        if (!v1)
            return v1;
    }
    v2 = 0;
    v0 = &a0->field_940;
    iter = NULL;
    do
    {
        v4 = v2 * 4;
        if (*(int *)(v4 + v0))
        {
            iter = *(int *)(v4 + v0);
            if (!iter)
                continue;
            do
            {
                v4 = sub_488af0((char *)iter->field_0->field_0 + gpGlobals->field_98, a1);
            } while (v4 && (iter = iter->field_84, iter));
        }
        if (iter)
            goto LABEL_4fbb49;
    } while ((v2 += 1, v2 <= 9));
    if (!iter)
        return v4;
LABEL_4fbb49:
    if (iter == a0->field_968)
        return a0;
    v5 = iter->field_60->field_f8(iter);
    if (!v5)
    {
        return v5;
    }
    else if (a0->field_968)
    {
        a0->field_968->field_60->field_104(a0->field_968, 0);
    }
    v6 = a0;
    v6->field_778 = 0;
    v6->field_784 = 0;
    v7 = v6->field_968;
    v8 = a0;
    v8->field_970 = v7;
    v8->field_968 = iter;
    if (!iter)
        return v7;
    iter->field_60->field_fc(iter);
    return a0->field_968->field_60->field_108(a0->field_968);
}

