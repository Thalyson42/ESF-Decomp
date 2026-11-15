// GetExplosionRadius__16CExplodingAttack @0xbc450 size=77
typedef struct st_4bc450_0 {
    char padding_0[480];
    float field_1e0;
} st_4bc450_0;

typedef struct st_4bc450_1 {
    struct st_4bc450_0 *field_0;
    char padding_4[716];
    int field_2d0;
} st_4bc450_1;

double GetExplosionRadius__16CExplodingAttack(st_4bc450_1 *a0)
{
    return ((double)a0->field_2d0 * a0->field_0->field_1e0 < 4000.0 ? (double)a0->field_2d0 * a0->field_0->field_1e0 : 4000.0);
}

