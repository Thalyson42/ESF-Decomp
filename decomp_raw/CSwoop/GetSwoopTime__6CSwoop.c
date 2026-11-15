// GetSwoopTime__6CSwoop @0x124750 size=59
typedef struct st_524750_0 {
    char padding_0[16];
    float field_10;
} st_524750_0;

typedef struct st_524750_1 {
    float field_0;
} st_524750_1;

extern st_524750_1 *gpGlobals;

double GetSwoopTime__6CSwoop(st_524750_0 *a0)
{
    return (0.0 == a0->field_10 ? 0.0 : *(float *)gpGlobals - a0->field_10);
}

