// UnGlow__11CDragonBall @0xae450 size=88
typedef struct st_4ae450_0 {
    char padding_0[348];
    unsigned int field_15c;
    char padding_160[168];
    int field_208;
} st_4ae450_0;

int UnGlow__11CDragonBall(st_4ae450_0 **a0)
{
    *a0->field_15c = 0;
    return sub_489390(*a0->field_208, 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

