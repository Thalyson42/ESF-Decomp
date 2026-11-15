// PickBotName__11CBotManagerPc @0x13e390 size=312
typedef struct st_53e390_3 {
    char padding_0[464];
    unsigned int field_1d0;
} st_53e390_3;

typedef struct st_53e390_0 {
    char padding_0[62];
    short field_3e;
} st_53e390_0;

typedef struct st_53e390_2 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_53e390_2;

typedef struct st_53e390_1 {
    unsigned int field_0;
} st_53e390_1;

extern st_53e390_1 *g_616928;
extern st_53e390_2 *gpGlobals;

int PickBotName__11CBotManagerPc(st_53e390_0 *a0, int a1)
{
    int v6;  // edi
    st_53e390_3 **v7;  // esi
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x44]
    st_53e390_0 *v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    char i;  // [bp-0x9]
    unsigned int v5;  // [bp-0x8]

    v3 = 0;
    v5 = g_616928(1, a0->field_3e) - 1;
    do
    {
        i = 0;
        v6 = 1;
        if (1 <= gpGlobals->field_90)
        {
            v2 = &a0[1].padding_0[33 * v5];
            do
            {
                v7 = sub_48a500(v6);
                *(unsigned short *)&v1 = 0;
                *(unsigned short *)&v0 = 0;
                if ((char)sub_489a70(v7, v0, v1) && !sub_488af0(v2, *v7->field_1d0 + gpGlobals->field_98))
                {
                    i = 1;
                    goto LABEL_53e46e;
                }
            } while ((v6 += 1, v6 <= gpGlobals->field_90));
        }
        if (!i)
            break;
LABEL_53e46e:
        v5 += 1;
        if (v5 == a0->field_3e)
            v5 = 0;
        v3 += 1;
        if (v3 == a0->field_3e)
            i = 0;
    } while (i);
    return sub_48e110(a1, &a0[1].padding_0[33 * v5]);
}

