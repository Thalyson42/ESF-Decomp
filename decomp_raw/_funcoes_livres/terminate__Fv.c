// terminate__Fv @0x195594 size=28
typedef struct st_595594_2 {
    struct st_595594_0 *field_0;
} st_595594_2;

typedef struct st_595594_0 {
    unsigned int field_0;
} st_595594_0;

typedef struct st_595594_1 {
    char padding_0[525876];
    struct st_595594_2 *field_80634;
} st_595594_1;

void terminate__Fv(void)
{
    st_595594_1 *v1;  // ebx

    sub_595590(v1);
    (*(int *)v1->field_80634)(v1);
}

