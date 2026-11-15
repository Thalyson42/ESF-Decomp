// DestroyItem__15CBasePlayerItem @0x138600 size=78
typedef struct st_538600_4 {
    char padding_0[96];
    struct st_538600_0 *field_60;
    char padding_64[28];
    struct st_538600_3 *field_80;
} st_538600_4;

typedef struct st_538600_0 {
    char padding_0[280];
    struct st_538600_1 *field_118;
} st_538600_0;

typedef struct st_538600_1 {
    unsigned int field_0;
} st_538600_1;

typedef struct st_538600_3 {
    char padding_0[96];
    struct st_538600_2 *field_60;
} st_538600_3;

typedef struct st_538600_2 {
    char padding_0[100];
    struct st_538600_1 *field_64;
} st_538600_2;

int DestroyItem__15CBasePlayerItem(st_538600_4 *a0)
{
    if (a0->field_80)
        a0->field_80->field_60->field_64(a0->field_80, a0);
    return a0->field_60->field_118(a0);
}

