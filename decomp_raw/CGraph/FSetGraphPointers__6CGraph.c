// FSetGraphPointers__6CGraph @0xe41f0 size=321
typedef struct st_4e41f0_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[8];
    int field_1c;
} st_4e41f0_0;

typedef struct st_4e41f0_2 {
    char padding_0[420];
    char field_1a4[4];
    char field_1a6;
} st_4e41f0_2;

typedef struct st_4e41f0_1 {
    unsigned int field_0;
} st_4e41f0_1;

extern st_4e41f0_1 *g_6167f8;
extern st_4e41f0_1 *g_6168b4;
extern st_4e41f0_1 *g_6168d8;

unsigned int FSetGraphPointers__6CGraph(st_4e41f0_0 *a0)
{
    unsigned int v4;  // eax
    unsigned int v5;  // esi
    unsigned int v6;  // edx
    st_4e41f0_2 *v7;  // eax
    unsigned int v0;  // [bp-0x2c]
    int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    char v3;  // [bp-0x20]

    v1 = 0;
    if (v1 < a0->field_1c)
    {
        do
        {
            v4 = v1 * 24;
            if (*(int *)(a0->field_10 + v4 + 8))
            {
                v2 = *(int *)(a0->field_10 + v4 + 12);
                v3 = 0;
                v5 = g_6167f8(0, "model", &v2);
                v0 = 0;
                if (!v5 || !g_6168d8(v5))
                    v0 = 1;
                if (v0)
                {
                    g_6168b4(2, "**Could not find model %s\n", &v2);
                    *(unsigned int *)(a0->field_10 + v1 * 24 + 8) = 0;
                }
                else
                {
                    v6 = v1 * 24;
                    *(unsigned int *)(a0->field_10 + v6 + 8) = (!v5 ? 0 : v5 + 128);
                    v7 = *(int *)(a0->field_10 + v6 + 8);
                    if (!(v7->field_1a4[2] & 1))
                        v7->field_1a4 = v7->field_1a4 + 0x10000;
                }
            }
        } while ((v1 += 1, v1 < a0->field_1c));
    }
    a0->field_4 = 1;
    return 1;
}

