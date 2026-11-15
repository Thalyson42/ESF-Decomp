// __9type_infoPCc @0x198264 size=39
typedef struct st_598264_0 {
    char padding_0[513863];
    unsigned int field_7d747;
} st_598264_0;

unsigned int * __9type_infoPCc(unsigned int *a0, unsigned int a1)
{
    st_598264_0 *v2;  // ebx
    int v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    sub_598260(v0, &v1);
    a0[1] = *(int *)&(v2->padding_0)[1];
    *a0 = a1;
    return a0;
}

