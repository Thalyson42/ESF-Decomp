// ManageEnemies__9CBaseTask @0x149b90 size=172
typedef struct st_549b90_2 {
    char padding_0[8];
    struct st_549b90_0 *field_8;
    char padding_c[4];
    int field_10;
} st_549b90_2;

typedef struct st_549b90_0 {
    char padding_0[2560];
    struct st_549b90_1 *field_a00;
    char padding_a04[312];
    unsigned int field_b3c;
    char padding_b40[44];
    int field_b6c;
} st_549b90_0;

typedef struct st_549b90_1 {
    char padding_0[48];
    unsigned int field_30;
    unsigned int field_34;
} st_549b90_1;

typedef struct st_549b90_4 {
    float field_0;
} st_549b90_4;

typedef struct st_549b90_3 {
    unsigned int field_0;
} st_549b90_3;

extern st_549b90_3 *g_61692c;
extern st_549b90_4 *gpGlobals;

float ManageEnemies__9CBaseTask(st_549b90_2 *a0)
{
    int v2;  // edi
    unsigned int v3;  // edx
    st_549b90_0 *v4;  // eax
    unsigned long long v5;  // mm7
    unsigned long long v7;  // mm7
    int v0;  // [bp-0x28]
    int v1;  // [bp-0x24]

    v2 = a0->field_8->field_b6c;
    v3 = sub_48ad00(a0->field_8);
    v4 = a0->field_8;
    a0->field_10 = v3;
    v4->field_b6c = v3;
    if (a0->field_8->field_b6c)
        return v7;
    *(unsigned short *)&v1 = 1;
    *(unsigned short *)&v0 = 0;
    if (!(char)sub_489a70(v2, v0, v1))
        return v5;
    g_61692c(*(float *)&a0->field_8->field_a00->field_30, *(float *)&a0->field_8->field_a00->field_34);
    *(float *)&a0->field_8->field_b3c = *(float *)&a0->field_8->field_a00->field_30 + *(float *)gpGlobals;
    return v5;
}

