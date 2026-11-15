// CreateBag__10CPlayerBagiP11CBasePlayer @0xefad0 size=130
typedef struct st_4efad0_1 {
    unsigned int field_0;
} st_4efad0_1;

typedef struct st_4efad0_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    char padding_14[12];
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
} st_4efad0_3;

typedef struct st_4efad0_2 {
    struct st_4efad0_3 *field_0;
    char padding_4[92];
    struct st_4efad0_0 *field_60;
    unsigned int field_64;
} st_4efad0_2;

typedef struct st_4efad0_0 {
    char padding_0[8];
    struct st_4efad0_1 *field_8;
} st_4efad0_0;

st_4efad0_2 * CreateBag__10CPlayerBagiP11CBasePlayer(unsigned int a0, st_4efad0_3 **a1)
{
    st_4efad0_2 *v0;  // edi
    unsigned int *v1;  // ecx
    unsigned int *v2;  // edx
    unsigned int *v3;  // ecx
    unsigned int *v4;  // edx

    v0 = GetClassPtr__H1Z10CPlayerBag_PX01_PX01(0);
    v0->field_60->field_8(v0);
    v1 = v0->field_0;
    v2 = *a1;
    v1[2] = v2[2];
    v1[3] = v2[3];
    v1[4] = v2[4];
    UTIL_SetOrigin(v0->field_0, &v0->field_0->field_8);
    v3 = v0->field_0;
    v4 = *a1;
    v3[8] = v4[8];
    v3[9] = v4[9];
    v3[10] = v4[10];
    v0->field_64 = a0;
    return v0;
}

