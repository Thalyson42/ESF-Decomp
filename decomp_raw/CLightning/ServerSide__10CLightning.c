// ServerSide__10CLightning @0xb7570 size=54
typedef struct st_4b7570_0 {
    char padding_0[416];
    char field_1a0;
} st_4b7570_0;

typedef struct st_4b7570_1 {
    struct st_4b7570_0 *field_0;
    char padding_4[108];
    float field_70;
} st_4b7570_1;

unsigned int ServerSide__10CLightning(st_4b7570_1 *a0)
{
    if (a0->field_70 == 0.0f && !(a0->field_0->field_1a0 & 8))
        return 1;
    return 0;
}

