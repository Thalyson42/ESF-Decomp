// EntityAdd__12CGlobalStateii12GLOBALESTATE @0x139d70 size=121
typedef struct st_539d70_1 {
    struct st_539d70_0 *field_0;
    unsigned int field_4;
} st_539d70_1;

typedef struct st_539d70_0 {
    char padding_0[64];
    char field_40;
    char padding_41[31];
    unsigned int field_60;
    struct st_539d70_0 *field_64;
} st_539d70_0;

typedef struct st_539d70_2 {
    char padding_0[152];
    unsigned int field_98;
} st_539d70_2;

extern st_539d70_2 *gpGlobals;

int EntityAdd__12CGlobalStateii12GLOBALESTATE(st_539d70_1 *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    st_539d70_0 *v0;  // edi

    v0 = calloc@GLIBC_2.0(104, 1);
    v0->field_64 = a0->field_0;
    a0->field_0 = v0;
    strcpy@GLIBC_2.0(v0, a1 + gpGlobals->field_98);
    strcpy@GLIBC_2.0(&v0->field_40, a2 + gpGlobals->field_98);
    v0->field_60 = a3;
    a0->field_4 = a0->field_4 + 1;
    return a3;
}

