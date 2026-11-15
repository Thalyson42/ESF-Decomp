// IsFollowing__12CTalkMonster @0x127670 size=99
typedef struct st_527670_0 {
    char padding_0[160];
    struct st_527670_1 *field_a0;
} st_527670_0;

typedef struct st_527670_1 {
    unsigned int field_0;
} st_527670_1;

typedef struct st_527670_2 {
    char padding_0[96];
    struct st_527670_0 *field_60;
} st_527670_2;

unsigned int IsFollowing__12CTalkMonster(int a0)
{
    int v0;  // esi
    st_527670_2 *v1;  // edx

    v0 = a0 + 272;
    if (!sub_48d8b0(v0))
        return 0;
    v1 = sub_489fd0(v0);
    return v1->field_60->field_a0(v1) != 0;
}

