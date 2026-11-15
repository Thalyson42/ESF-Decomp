// SilenceBodySounds__15CControlledBeam @0xa8b40 size=82
typedef struct st_4a8b40_1 {
    char padding_0[128];
    struct st_4a8b40_2 *field_80;
} st_4a8b40_1;

typedef struct st_4a8b40_2 {
    struct st_4a8b40_0 *field_0;
} st_4a8b40_2;

typedef struct st_4a8b40_0 {
    char padding_0[520];
    int field_208;
} st_4a8b40_0;

int SilenceBodySounds__15CControlledBeam(st_4a8b40_1 *a0)
{
    return sub_489390(*(int *)(*(int *)a0->field_80 + 520), 4, "common/null.wav", 0x3f800000, 0.800000011920929f, 0, 100);
}

