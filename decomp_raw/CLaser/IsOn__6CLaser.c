// IsOn__6CLaser @0xb3180 size=30
typedef struct st_4b3180_0 {
    char padding_0[280];
    char field_118;
} st_4b3180_0;

unsigned int IsOn__6CLaser(st_4b3180_0 **a0)
{
    return (*a0->field_118 < 0 ? 0 : 1);
}

