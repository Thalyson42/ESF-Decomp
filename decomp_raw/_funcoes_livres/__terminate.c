// __terminate @0x194980 size=33
typedef struct st_594980_2 {
    struct st_594980_0 *field_0;
} st_594980_2;

typedef struct st_594980_0 {
    unsigned int field_0;
} st_594980_0;

typedef struct st_594980_1 {
    char padding_0[528968];
    struct st_594980_2 *field_81248;
} st_594980_1;

int __terminate(void)
{
    st_594980_1 *v2;  // ebx
    int v0;  // [bp-0x1c]

    sub_59497c(v0);
    return (*(int *)v2->field_81248)(v0);
}

