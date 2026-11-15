// SearchGatheredSpot__4CBot @0x169f70 size=350
typedef struct st_569f70_6 {
    char padding_0[8];
    float field_8;
    float field_c;
    float field_10;
} st_569f70_6;

typedef struct st_569f70_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_569f70_3;

typedef struct st_569f70_1 {
    char padding_0[228];
    struct st_569f70_2 *field_e4;
} st_569f70_1;

typedef struct st_569f70_2 {
    unsigned int field_0;
} st_569f70_2;

typedef struct st_569f70_5 {
    struct st_569f70_3 *field_0;
} st_569f70_5;

typedef struct st_569f70_4 {
    struct st_569f70_0 *field_0;
    char padding_4[92];
    struct st_569f70_1 *field_60;
    char padding_64[2764];
    struct st_569f70_5 *field_b30;
    char padding_b34[5];
    char field_b39;
    char padding_b3a[1258];
    struct st_569f70_2 *field_1024;
} st_569f70_4;

typedef struct st_569f70_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[408];
    int field_1ac;
    char padding_1b0[88];
    int field_208;
} st_569f70_0;

extern unsigned int num_waypoints;

int SearchGatheredSpot__4CBot(float a0)
{
    st_569f70_4 *v5;  // esi
    unsigned int *v6;  // eax
    unsigned int *v7;  // edx
    unsigned int *v9;  // edi
    st_569f70_0 *v10;  // edx
    unsigned int *v11;  // eax
    unsigned int *v12;  // edx
    st_569f70_6 **v0;  // [bp-0x48]
    uint33088_t v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]

    *(uint33088_t **)((char *)&v1 + 64) = (char *)&v1 + 0x44;
    v5 = *(unsigned int *)((void*)&v1 + 72);
    if (!v5->field_b39)
    {
        v0 = UTIL_FindEntityByClassname(0, "dragonball");
        v6 = IsNull(v0);
        if (!(char)v6)
        {
            v7 = &*v0->field_8;
            *(float *)((char *)&v1 + 32) = *v0->field_8;
            *(float *)((char *)&v1 + 36) = *(float *)&v7[1];
            *(float *)((char *)&v1 + 40) = *(float *)&v7[2];
            if (v5->field_60->field_e4(v5, (char *)&v1 + 32))
            {
                v5->field_b30 = v0;
                return _INSERT(v0, 0, 1);
            }
            v9 = 0xffffffff;
            v6 = &num_waypoints;
            if (num_waypoints)
            {
                v2 = *(unsigned int *)((void*)&v1 + 32);
                v3 = *(unsigned int *)((void*)&v1 + 36);
                v4 = *(unsigned int *)((void*)&v1 + 40);
                v6 = WaypointFindNearest(&v2, v5->field_0->field_208, 1750.0f, v5->field_0->field_1ac);
                v1 = v2;
                v9 = v6;
            }
            if (v9 != 0xffffffff)
            {
                v10 = v5->field_0;
                v11 = &v10->field_8;
                v1 = _INSERT(CONCAT((unsigned int)v1, 0), 0, *(float *)&v10->field_8);
                *(float *)((char *)&v1 + 4) = *(float *)&v11[1];
                *(float *)((char *)&v1 + 8) = *(float *)&v11[2];
                v6 = WaypointFindNearest(&v1, v10->field_208, 1750.0f, v10->field_1ac);
                v12 = v6;
                if (v12 != 0xffffffff)
                {
                    v6 = WaypointRouteFromTo(v12, v9, v5->field_0->field_1ac);
                    if ((unsigned short)v6 != 0xffff)
                    {
                        v5->field_1024 = v9;
                        v5->field_b30 = v0;
                        return _INSERT(v6, 0, 1);
                    }
                }
            }
        }
    }
    return _INSERT(v6, 0, 0);
}

