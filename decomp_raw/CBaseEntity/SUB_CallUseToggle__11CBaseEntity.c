// SUB_CallUseToggle__11CBaseEntity @0x9e0f0 size=50
typedef struct st_49e0f0_0 {
    char padding_0[184];
    struct st_49e0f0_1 *field_b8;
} st_49e0f0_0;

typedef struct st_49e0f0_1 {
    unsigned int field_0;
} st_49e0f0_1;

typedef struct st_49e0f0_2 {
    char padding_0[96];
    struct st_49e0f0_0 *field_60;
} st_49e0f0_2;

int SUB_CallUseToggle__11CBaseEntity(st_49e0f0_2 *a0)
{
    return a0->field_60->field_b8(a0, a0, a0, 3, 0);
}

