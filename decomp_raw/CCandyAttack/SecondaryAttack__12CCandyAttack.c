// SecondaryAttack__12CCandyAttack @0x9ad40 size=44
typedef struct st_49ad40_0 {
    char padding_0[328];
    struct st_49ad40_1 *field_148;
} st_49ad40_0;

typedef struct st_49ad40_1 {
    unsigned int field_0;
} st_49ad40_1;

typedef struct st_49ad40_2 {
    char padding_0[96];
    struct st_49ad40_0 *field_60;
} st_49ad40_2;

int SecondaryAttack__12CCandyAttack(st_49ad40_2 *a0)
{
    return a0->field_60->field_148(a0);
}

