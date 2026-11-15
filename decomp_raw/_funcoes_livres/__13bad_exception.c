// __13bad_exception @0x195cc4 size=41
typedef struct st_595cc4_0 {
    char padding_0[515599];
    char field_7de0f;
    char padding_7de10[10171];
    unsigned int field_805cb;
    char padding_805cf[424];
    unsigned int field_80777;
} st_595cc4_0;

unsigned int * __13bad_exception(unsigned int *a0)
{
    st_595cc4_0 *v2;  // ebx
    unsigned int *v3;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_595cc0(v0, &v1);
    v3 = &v2->field_7de0f;
    *a0 = v3[2650];
    *a0 = v3[2543];
    return a0;
}

