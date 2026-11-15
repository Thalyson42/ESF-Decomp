// DropItem__12CBaseMonsterPcRC6VectorT2 @0xda5d0 size=214
typedef struct st_4da5d0_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[476];
    int field_208;
} st_4da5d0_0;

typedef struct st_4da5d0_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[48];
    unsigned int field_5c;
    float field_60;
    unsigned int field_64;
} st_4da5d0_1;

typedef struct st_4da5d0_2 {
    unsigned int field_0;
} st_4da5d0_2;

extern st_4da5d0_2 *g_engfuncs.pfnAlertMessage;
extern st_4da5d0_2 *g_engfuncs.pfnRandomFloat;

st_4da5d0_1 ** DropItem__12CBaseMonsterPcRC6VectorT2(st_4da5d0_0 **a0, int a1, int a2, int a3)
{
    unsigned int v3;  // edx
    st_4da5d0_1 **v4;  // edi
    unsigned int *v5;  // ecx
    st_4da5d0_0 *v6;  // edx
    unsigned int *v7;  // esi
    unsigned int v0;  // [bp-0x24]
    float v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (!a1)
    {
        v3 = "DropItem() - No item name!\n";
    }
    else
    {
        v4 = CBaseEntity::Create(a1, a2, a3, *a0->field_208);
        if (v4)
        {
            v5 = *v4;
            v6 = *a0;
            v5[8] = v6->field_20;
            v5[9] = v6->field_24;
            v5[10] = v6->field_28;
            v7 = *v4;
            g_engfuncs.pfnRandomFloat(0, 100.0f);
            v0 = 0;
            v1 = 100.0f;
            v2 = 0;
            v7[23] = v0;
            *(float *)&v7[24] = v1;
            v7[25] = v2;
            return v4;
        }
        v3 = "DropItem() - Didn't create!\n";
    }
    g_engfuncs.pfnAlertMessage(1, v3);
    return NULL;
}

