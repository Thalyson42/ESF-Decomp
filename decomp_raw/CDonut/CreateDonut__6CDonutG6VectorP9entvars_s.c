// CreateDonut__6CDonutG6VectorP9entvars_s @0x9a050 size=178
typedef struct st_49a050_1 {
    unsigned int field_0;
} st_49a050_1;

typedef struct st_49a050_4 {
    char padding_0[520];
    unsigned int field_208;
} st_49a050_4;

typedef struct st_49a050_3 {
    char padding_0[408];
    unsigned int field_198;
    char padding_19c[108];
    unsigned int field_208;
} st_49a050_3;

typedef struct st_49a050_2 {
    struct st_49a050_3 *field_0;
    char padding_4[92];
    struct st_49a050_0 *field_60;
} st_49a050_2;

typedef struct st_49a050_0 {
    char padding_0[8];
    struct st_49a050_1 *field_8;
} st_49a050_0;

extern st_49a050_1 *g_6167c8;

st_49a050_2 * CreateDonut__6CDonutG6VectorP9entvars_s(int a0, st_49a050_4 *a1)
{
    st_49a050_2 *v6;  // edi
    float v0;  // [bp-0x44]
    float v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    float v3;  // [bp-0x24]
    float v4;  // [bp-0x20]
    float v5;  // [bp-0x1c]

    v6 = sub_48a580(0);
    v6->field_60->field_8(v6);
    v6->field_0->field_198 = a1->field_208;
    g_6167c8(v6->field_0->field_208, "models/donut.mdl");
    v3 = 5.0f;
    v4 = 5.0f;
    v5 = 5.0f;
    v0 = -5.0f;
    v1 = -5.0f;
    v2 = 0;
    sub_48a0d0(v6->field_0, &v0, &v3);
    sub_48db50(v6->field_0, a0);
    return v6;
}

