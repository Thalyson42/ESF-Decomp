// dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3 @0x1980b4 size=92
typedef struct st_5980b4_0 {
    char padding_0[12];
    struct st_5980b4_1 *field_c;
} st_5980b4_0;

typedef struct st_5980b4_1 {
    unsigned int field_0;
} st_5980b4_1;

typedef struct st_5980b4_2 {
    char padding_0[4];
    struct st_5980b4_0 *field_4;
} st_5980b4_2;

typedef struct st_5980b4_3 {
    char padding_0[8];
    struct st_5980b4_2 *field_8;
} st_5980b4_3;

int dcast__C14__si_type_infoRC9type_infoiPvPC9type_infoT3(st_5980b4_3 *a0, int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]

    sub_5980b0(v0, v1, v2);
    if ((char)type_info::__eq(a0, a1))
        return a3;
    return a0->field_8->field_4->field_c(a0->field_8, a1, a2, a3, a4, a5);
}

