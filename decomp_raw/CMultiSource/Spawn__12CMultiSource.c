// Spawn__12CMultiSource @0x95a50 size=104
typedef struct st_495a50_1 {
    struct st_495a50_0 *field_0;
    char padding_4[8];
    unsigned int field_c;
    unsigned int field_10;
} st_495a50_1;

typedef struct st_495a50_0 {
    char padding_0[260];
    float field_104;
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[144];
    char field_1a0;
} st_495a50_0;

typedef struct st_495a50_2 {
    float field_0;
} st_495a50_2;

extern char Register__12CMultiSource;
extern st_495a50_2 *gpGlobals;

unsigned int Spawn__12CMultiSource(st_495a50_1 *a0)
{
    st_495a50_0 *v0;  // eax
    unsigned int v1;  // eax

    a0->field_0->field_10c = 0;
    a0->field_0->field_108 = 0;
    a0->field_0->field_104 = (float)(0.1 + *(float *)gpGlobals);
    v0 = a0->field_0;
    v0->field_1a0 = v0->field_1a0 | 1;
    v1 = _INSERT(v0, 0, 0);
    a0->field_c = v1 | 0xffff0000;
    a0->field_10 = &Register__12CMultiSource;
    return v1 | 0xffff0000;
}

