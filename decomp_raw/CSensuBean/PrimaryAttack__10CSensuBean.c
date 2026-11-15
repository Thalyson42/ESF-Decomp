// PrimaryAttack__10CSensuBean @0x1179d0 size=146
typedef struct st_5179d0_1 {
    char padding_0[128];
    struct st_5179d0_2 *field_80;
    char padding_84[64];
    unsigned int field_c4;
} st_5179d0_1;

typedef struct st_5179d0_2 {
    struct st_5179d0_0 *field_0;
} st_5179d0_2;

typedef struct st_5179d0_0 {
    char padding_0[520];
    int field_208;
} st_5179d0_0;

unsigned int PrimaryAttack__10CSensuBean(st_5179d0_1 *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (a0->field_c4)
        return v1;
    v0 = sub_48daf0(a0->field_80);
    if (v0)
    {
        sub_48d680(a0->field_80, 5);
        v0 = sub_489390(*(int *)(*(int *)a0->field_80 + 520), 1, "weapons/sensu.wav", 0x3f800000, 0.800000011920929f, 0, 100);
    }
    a0->field_c4 = 1;
    return v0;
}

