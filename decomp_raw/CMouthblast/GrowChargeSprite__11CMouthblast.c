// GrowChargeSprite__11CMouthblast @0xdb560 size=55
typedef struct st_4db560_1 {
    char padding_0[324];
    float field_144;
} st_4db560_1;

typedef struct st_4db560_0 {
    char padding_0[324];
    unsigned int field_144;
} st_4db560_0;

typedef struct st_4db560_3 {
    struct st_4db560_1 *field_0;
} st_4db560_3;

typedef struct st_4db560_2 {
    char padding_0[216];
    int field_d8;
    char padding_dc[304];
    struct st_4db560_3 *field_20c;
} st_4db560_2;

st_4db560_0 * GrowChargeSprite__11CMouthblast(st_4db560_2 *a0)
{
    st_4db560_1 *v0;  // eax

    v0 = *(int *)a0->field_20c;
    v0->field_144 = (float)((double)a0->field_d8 * 0.015);
    return v0;
}

