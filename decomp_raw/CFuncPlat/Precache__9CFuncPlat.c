// Precache__9CFuncPlat @0xe8d10 size=74
typedef struct st_4e8d10_0 {
    char padding_0[236];
    struct st_4e8d10_1 *field_ec;
} st_4e8d10_0;

typedef struct st_4e8d10_1 {
    unsigned int field_0;
} st_4e8d10_1;

typedef struct st_4e8d10_2 {
    int field_0;
    char padding_4[92];
    struct st_4e8d10_0 *field_60;
} st_4e8d10_2;

unsigned int Precache__9CFuncPlat(st_4e8d10_2 *a0)
{
    unsigned int v0;  // eax

    sub_48d4c0(a0);
    v0 = a0->field_60->field_ec(a0);
    if (v0)
        return v0;
    return PlatSpawnInsideTrigger__FP9entvars_s(a0->field_0);
}

