// SequencePrecache__FPvPCc @0x8f110 size=356
typedef struct st_48f110_0 {
    char padding_0[1];
    char field_1;
    char padding_2[162];
    struct st_48f110_0 *field_a4;
    unsigned int field_a8;
} st_48f110_0;

typedef struct st_48f110_1 {
    char padding_0[48];
    struct st_48f110_0 *field_30;
    unsigned int field_34;
} st_48f110_1;

typedef struct st_48f110_3 {
    char padding_0[152];
    unsigned int field_98;
} st_48f110_3;

typedef struct st_48f110_2 {
    unsigned int field_0;
} st_48f110_2;

extern st_48f110_2 *g_6167c4;
extern st_48f110_2 *g_6168b4;
extern st_48f110_2 *g_6168cc;
extern st_48f110_3 *gpGlobals;

st_48f110_0 * SequencePrecache__FPvPCc(st_48f110_0 *a0, int a1)
{
    st_48f110_0 *v4;  // edx
    unsigned int v5;  // esi
    char *v6;  // edx
    unsigned int v7;  // ecx
    char *v8;  // edi
    unsigned int v9;  // eax
    char *v0;  // [bp-0x18]
    st_48f110_0 *v1;  // [bp-0x14]
    st_48f110_0 *v2;  // [bp-0x10]
    st_48f110_1 *v3;  // [bp-0xc]

    v4 = sub_48a6a0(a0, a1);
    if (v4 < NULL)
    {
        return v4;
    }
    else if (!a0)
    {
        return v4;
    }
    else if (v4 < a0->field_a4)
    {
        v3 = &(a0->padding_0)[a0->field_a8] + 0xb0 * v4;
        v2 = &(a0->padding_0)[v3->field_34];
        v1 = NULL;
        if (v1 >= v3->field_30)
            return v2;
        do
        {
            v5 = v1 * 76;
            if (*(int *)&v2->padding_2[2 + v5] <= 4999 && sub_489fb0(*(int *)&v2->padding_2[2 + v5]))
            {
                v6 = &v2->padding_2[10 + v5];
                v0 = v6;
                v7 = 0xffffffff;
                do
                {
                    v8 = v6;
                } while (v7 && (v7 -= 1, v6 = v8 + 1, *v8));
                if (v7 == 0xfffffffe)
                    g_6168b4(4, "Bad sound event %d in sequence %s :: %s (sound is \"%s\")\n", *(int *)&v2->padding_2[2 + v5], &a0->padding_2[6], a1, v0);
                v9 = g_6168cc((char *)v2 + 0x4c * v1 + 12);
                g_6167c4(v9 + gpGlobals->field_98);
            }
        } while ((v1 = &v1->field_1, v1 < v3->field_30));
        return v1;
    }
    else
    {
        return v4;
    }
}

