// StartFollowing__12CTalkMonsterP11CBaseEntity @0x127290 size=244
typedef struct st_527290_0 {
    char padding_0[360];
    struct st_527290_1 *field_168;
} st_527290_0;

typedef struct st_527290_1 {
    unsigned int field_0;
} st_527290_1;

typedef struct st_527290_2 {
    char padding_0[96];
    struct st_527290_0 *field_60;
    char padding_64[163];
    char field_107;
    char field_108;
    char padding_109[7];
    unsigned int field_110;
    unsigned int field_114;
    char padding_118[108];
    unsigned int field_184;
    char padding_188[284];
    int field_2a4;
    char padding_2a8[28];
    unsigned int field_2c4;
    char padding_2c8[72];
    unsigned int field_310;
    unsigned int field_314;
} st_527290_2;

extern st_527290_1 *g_61692c;

int StartFollowing__12CTalkMonsterP11CBaseEntity(double a0, st_527290_2 *a1, int a2)
{
    unsigned int v4;  // edx
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    float v3;  // [bp-0x3c]

    if (a1->field_2a4)
        sub_48a100(a1->field_2a4);
    if (sub_48d8b0(&a1->field_108))
        a1->field_184 = 3;
    sub_48d960(&a1->field_110, a2);
    v3 = 2.0f;
    v2 = 0x3f800000;
    strncpy(&v0, "333@", 4);
    g_61692c(v0, 3.200000047683716f);
    strncpy(&v1, "333@", 4);
    a1->field_60->field_168(a1, a1->field_2c4, v1);
    v4 = a1->field_114;
    a1->field_310 = a1->field_110;
    a1->field_314 = v4;
    a1->field_107 = a1->field_107 & 239;
    return sub_489f60(a1);
}

