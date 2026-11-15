// StopTalking__12CTalkMonster @0x127640 size=44
typedef struct st_527640_0 {
    char padding_0[368];
    struct st_527640_1 *field_170;
} st_527640_0;

typedef struct st_527640_1 {
    unsigned int field_0;
} st_527640_1;

typedef struct st_527640_2 {
    char padding_0[96];
    struct st_527640_0 *field_60;
} st_527640_2;

int StopTalking__12CTalkMonster(st_527640_2 *a0)
{
    return a0->field_60->field_170(a0);
}

