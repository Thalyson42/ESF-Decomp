// GetType__5CBeam @0xb7280 size=21
typedef struct st_4b7280_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4b7280_0;

unsigned int GetType__5CBeam(st_4b7280_0 **a0)
{
    return *a0->field_148 & 15;
}

