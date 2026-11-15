// ItemShouldRespawn__18CHalfLifeMultiplayP5CItem @0xdd8e0 size=33
typedef struct st_4dd8e0_0 {
    char padding_0[419];
    char field_1a3;
} st_4dd8e0_0;

unsigned int ItemShouldRespawn__18CHalfLifeMultiplayP5CItem(unsigned int a0, st_4dd8e0_0 **a1)
{
    return (!(*a1->field_1a3 & 64) ? 5 : 6);
}

