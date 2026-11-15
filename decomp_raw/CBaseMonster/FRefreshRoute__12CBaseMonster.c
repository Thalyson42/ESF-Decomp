// FRefreshRoute__12CBaseMonster @0xd4760 size=425
typedef struct st_4d4760_0 {
    char padding_0[172];
    struct st_4d4760_1 *field_ac;
} st_4d4760_0;

typedef struct st_4d4760_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4d4760_3;

typedef struct st_4d4760_5 {
    char padding_0[260];
    unsigned int field_104;
} st_4d4760_5;

typedef struct st_4d4760_1 {
    unsigned int field_0;
} st_4d4760_1;

typedef struct st_4d4760_4 {
    char padding_0[4];
    struct st_4d4760_2 *field_4;
} st_4d4760_4;

typedef struct st_4d4760_2 {
    struct st_4d4760_3 *field_0;
    char padding_4[92];
    struct st_4d4760_0 *field_60;
} st_4d4760_2;

unsigned int FRefreshRoute__12CBaseMonster(float a0)
{
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    st_4d4760_5 *v10;  // esi
    unsigned int v11;  // eax
    float *v12;  // edx
    st_4d4760_4 *v13;  // eax
    st_4d4760_2 *v14;  // esi
    char *v15;  // edi
    unsigned int *v16;  // ecx
    unsigned int *v17;  // edx
    unsigned int v0;  // [bp-0x64]
    unsigned int v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x2c]
    int v3;  // [bp-0x28]
    float v4;  // [bp-0x24]
    float v5;  // [bp-0x20]
    float v6;  // [bp-0x1c]

    CBaseMonster::RouteNew(a0);
    v8 = *(int *)(*(unsigned int *)&a0 + 532);
    if (v8 != 16)
    {
        if ((int)v8 <= 16)
        {
            if (v8 != 1)
            {
                if (v8 == 2)
                {
                    v1 = EHANDLE::__opP11CBaseEntity(*(unsigned int *)&a0 + 264);
                    v0 = 2;
                    v9 = *(unsigned int *)&a0 + 592;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                v10 = *(unsigned int *)&a0 + 272;
                if (!EHANDLE::__opi(v10))
                    return 0;
                v1 = EHANDLE::__opP11CBaseEntity(v10);
                v0 = 1;
                v9 = *(int *)EHANDLE::__rf(v10) + 8;
            }
            v11 = CBaseMonster::BuildRoute(a0, v9);
        }
        else if (v8 == 32)
        {
            v12 = (float *)a0;
            v4 = v12[0x88];
            v5 = v12[137];
            v6 = v12[138];
            v11 = CBaseMonster::FGetNodeRoute(v12, &v4);
        }
        else if (v8 == 64)
        {
            v11 = CBaseMonster::BuildRoute(a0, *(unsigned int *)&a0 + 544, 64, 0);
        }
        else
        {
            return 0;
        }
        return v11;
    }
    else
    {
        v13 = (st_4d4760_4 *)a0;
        v14 = v13->field_4;
        v3 = 0;
        if (!v14)
            return 1;
        v2 = v13 + 52;
        do
        {
            v15 = v3 * 16;
            *(unsigned int *)&v15[v2] = 16;
            v16 = &v15[*(unsigned int *)&a0];
            v17 = v14->field_0;
            v16[101] = v17[2];
            v16[0x66] = v17[3];
            v16[103] = v17[4];
            v14 = v14->field_60->field_ac(v14);
            if (!v14)
                v15[v2] = v15[v2] | 128;
        } while ((v3 += 1, v14 && v3 <= 7));
        return 1;
    }
}

