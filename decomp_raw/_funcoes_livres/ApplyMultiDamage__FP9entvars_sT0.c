// ApplyMultiDamage__FP9entvars_sT0 @0x137330 size=80
typedef struct st_537330_1 {
    unsigned int field_0;
} st_537330_1;

typedef struct st_537330_0 {
    char padding_0[52];
    struct st_537330_1 *field_34;
} st_537330_0;

typedef struct st_537330_2 {
    char padding_0[96];
    struct st_537330_0 *field_60;
} st_537330_2;

extern st_537330_2 *gMultiDamage;
extern float gMultiDamage+4;
extern unsigned int gMultiDamage+8;

unsigned int ApplyMultiDamage__FP9entvars_sT0(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // eax

    if (gMultiDamage)
        v0 = gMultiDamage->field_60->field_34(gMultiDamage, a0, a1, gMultiDamage+4, gMultiDamage+8);
    return v0;
}

