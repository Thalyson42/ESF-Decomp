// DispatchObjectCollsionBox__FP7edict_s @0x9cb90 size=71
typedef struct st_49cb90_3 {
    char padding_0[124];
    struct st_49cb90_2 *field_7c;
} st_49cb90_3;

typedef struct st_49cb90_0 {
    char padding_0[36];
    struct st_49cb90_1 *field_24;
} st_49cb90_0;

typedef struct st_49cb90_1 {
    unsigned int field_0;
} st_49cb90_1;

typedef struct st_49cb90_2 {
    char padding_0[96];
    struct st_49cb90_0 *field_60;
} st_49cb90_2;

unsigned int DispatchObjectCollsionBox__FP7edict_s(st_49cb90_3 *a0)
{
    st_49cb90_2 *v0;  // edx

    v0 = (!a0 ? NULL : a0->field_7c);
    return (!v0 ? SetObjectCollisionBox__FP9entvars_s(a0 + 1) : v0->field_60->field_24(v0));
}

