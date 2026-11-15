// EmitClassSound__11CBasePlayerPCc @0xf01d0 size=117
typedef struct st_4f01d0_4 {
    struct st_4f01d0_0 *field_0;
    char padding_4[1888];
    struct st_4f01d0_3 *field_764;
} st_4f01d0_4;

typedef struct st_4f01d0_2 {
    unsigned int field_0;
} st_4f01d0_2;

typedef struct st_4f01d0_0 {
    char padding_0[520];
    int field_208;
} st_4f01d0_0;

typedef struct st_4f01d0_3 {
    char padding_0[4];
    struct st_4f01d0_1 *field_4;
} st_4f01d0_3;

typedef struct st_4f01d0_1 {
    char padding_0[8];
    struct st_4f01d0_2 *field_8;
} st_4f01d0_1;

int EmitClassSound__11CBasePlayerPCc(st_4f01d0_4 *a0, unsigned int a1)
{
    int v1;  // eax
    unsigned int v0;  // [bp-0x24]

    v0 = a1;
    v1 = sub_488b00("%s/%s", a0->field_764->field_4->field_8(a0->field_764));
    return sub_489390(a0->field_0->field_208, 2, v1, 0x3f800000, 0.800000011920929f, 0, 100);
}

