// Spawn__6CBlood @0xb5290 size=88
typedef struct st_4b5290_0 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    char padding_110[8];
    unsigned int field_118;
    char padding_11c[20];
    unsigned int field_130;
} st_4b5290_0;

int Spawn__6CBlood(st_4b5290_0 **a0)
{
    *a0->field_10c = 0;
    *a0->field_108 = 0;
    *a0->field_118 = 0;
    *a0->field_130 = 0;
    return sub_48ccb0(*a0);
}

