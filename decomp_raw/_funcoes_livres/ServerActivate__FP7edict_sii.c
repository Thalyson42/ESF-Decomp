// ServerActivate__FP7edict_sii @0xa0ee0 size=260
typedef struct st_4a0ee0_4 {
    char padding_0[124];
    struct st_4a0ee0_3 *field_7c;
} st_4a0ee0_4;

typedef struct st_4a0ee0_1 {
    char padding_0[32];
    struct st_4a0ee0_2 *field_20;
} st_4a0ee0_1;

typedef struct st_4a0ee0_2 {
    unsigned int field_0;
} st_4a0ee0_2;

typedef struct st_4a0ee0_0 {
    char padding_0[420];
    unsigned int field_1a4;
} st_4a0ee0_0;

typedef struct st_4a0ee0_3 {
    struct st_4a0ee0_0 *field_0;
    char padding_4[92];
    struct st_4a0ee0_1 *field_60;
} st_4a0ee0_3;

typedef struct st_4a0ee0_5 {
    char padding_0[152];
    unsigned int field_98;
} st_4a0ee0_5;

extern unsigned int g_serveractive;
extern st_4a0ee0_2 *g_6168b4;
extern st_4a0ee0_2 *g_6168d4;
extern st_4a0ee0_5 *gpGlobals;
extern int BotManager;

int ServerActivate__FP7edict_sii(unsigned int *a0, int a1, int a2)
{
    int v6;  // esi
    unsigned int v7;  // eax
    st_4a0ee0_4 *v8;  // eax
    st_4a0ee0_3 *v9;  // edx
    unsigned int *v10;  // eax
    st_4a0ee0_3 *v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    int v3;  // [bp-0x1c]
    int v4;  // [bp-0x18]
    int v5;  // [bp-0x14]

    g_serveractive = 1;
    v6 = 0;
    if (0 < a1)
    {
        do
        {
            v7 = v6 * 804;
            if (!*(int *)((char *)a0 + v7) && v6 >= a2 && *(int *)((char *)a0 + v7 + 124))
            {
                v8 = v7 + (char *)a0;
                if (v7 + (char *)a0 || (v8 = g_6168d4(0), v8))
                    v9 = v8->field_7c;
                else
                    v9 = NULL;
                if (v9 && (int)v9->field_0->field_1a4 >= 0)
                {
                    v0 = v9;
                    v10 = v9->field_60->field_20;
                }
                else
                {
                    v2 = a0[32 + 201 * v6] + gpGlobals->field_98;
                    v1 = "Can't instance %s\n";
                    v0 = 0x1;
                    v10 = g_6168b4;
                }
                v10(v0, v1, v2);
            }
        } while ((v6 += 1, v6 < a1));
    }
    sub_48e030(v3, v4, v5);
    return sub_487c00(&BotManager);
}

