// Holster__12CCandyAttacki @0x9a8c0 size=134
typedef struct st_49a8c0_1 {
    char padding_0[128];
    struct st_49a8c0_2 *field_80;
    char padding_84[64];
    int field_c4;
    int field_c8;
    char field_cc;
} st_49a8c0_1;

typedef struct st_49a8c0_2 {
    struct st_49a8c0_0 *field_0;
} st_49a8c0_2;

typedef struct st_49a8c0_0 {
    char padding_0[520];
    int field_208;
} st_49a8c0_0;

unsigned int Holster__12CCandyAttacki(st_49a8c0_1 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    UTIL_Remove(a0->field_c4);
    v0 = UTIL_Remove(a0->field_c8);
    if (!a0->field_cc)
        return v0;
    v1 = EMIT_SOUND_DYN(*(int *)(*(int *)a0->field_80 + 520), 1, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    a0->field_cc = 0;
    return v1;
}

