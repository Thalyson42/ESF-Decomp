// RemoveChargeSprite__10CDeathBall @0xa9370 size=44
typedef struct st_4a9370_0 {
    char padding_0[468];
    int field_1d4;
} st_4a9370_0;

int RemoveChargeSprite__10CDeathBall(st_4a9370_0 *a0)
{
    return UTIL_Remove(a0->field_1d4);
}

