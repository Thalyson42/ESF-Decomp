// Precache__14CMomentaryDoor @0xad5a0 size=434
typedef struct st_4ad5a0_1 {
    struct st_4ad5a0_0 *field_0;
    char padding_4[256];
    char field_104;
} st_4ad5a0_1;

typedef struct st_4ad5a0_0 {
    char padding_0[492];
    unsigned int field_1ec;
} st_4ad5a0_0;

typedef struct st_4ad5a0_2 {
    unsigned int field_0;
} st_4ad5a0_2;

extern char _GLOBAL_OFFSET_TABLE_;
extern st_4ad5a0_2 *g_6168cc;

st_4ad5a0_0 * Precache__14CMomentaryDoor(st_4ad5a0_1 *a0)
{
    unsigned int v0;  // eax
    st_4ad5a0_0 *v1;  // eax

    if (a0->field_104 > 8)
    {
        v0 = g_6168cc("common/null.wav");
        v1 = a0->field_0;
        v1->field_1ec = v0;
        return v1;
    }
    goto *((void *)(&(&_GLOBAL_OFFSET_TABLE_)[-1 * *(int *)(&(&_GLOBAL_OFFSET_TABLE_)[4 * a0->field_104] - 1467644)]));
}

