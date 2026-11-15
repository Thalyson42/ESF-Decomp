// SecondaryAttack__9CEyelaser @0xbd1c0 size=44
typedef struct st_4bd1c0_0 {
    char padding_0[328];
    struct st_4bd1c0_1 *field_148;
} st_4bd1c0_0;

typedef struct st_4bd1c0_1 {
    unsigned int field_0;
} st_4bd1c0_1;

typedef struct st_4bd1c0_2 {
    char padding_0[96];
    struct st_4bd1c0_0 *field_60;
} st_4bd1c0_2;

int SecondaryAttack__9CEyelaser(st_4bd1c0_2 *a0)
{
    return a0->field_60->field_148(a0);
}

