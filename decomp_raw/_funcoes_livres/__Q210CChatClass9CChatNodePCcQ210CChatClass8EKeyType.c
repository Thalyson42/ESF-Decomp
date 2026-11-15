// __Q210CChatClass9CChatNodePCcQ210CChatClass8EKeyType @0x143dd0 size=166
typedef struct st_543dd0_0 {
    struct st_543dd0_1 *field_0;
    struct st_543dd0_2 *field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_543dd0_0;

typedef struct st_543dd0_2 {
    char field_0;
    char field_1;
} st_543dd0_2;

typedef struct st_543dd0_1 {
    unsigned int field_0;
    unsigned int field_4;
} st_543dd0_1;

st_543dd0_0 * __Q210CChatClass9CChatNodePCcQ210CChatClass8EKeyType(st_543dd0_0 *a0, char *a1, unsigned int a2)
{
    unsigned int *v0;  // eax
    char *v1;  // edx
    int v2;  // ecx
    char *v3;  // edi
    char *v4;  // edi
    char *v5;  // eax

    v0 = __builtin_new(8);
    *v0 = 0;
    v0[1] = 0;
    a0->field_0 = v0;
    a0->field_4 = NULL;
    a0->field_8 = a2;
    a0->field_c = 0;
    a0->field_10 = 0;
    if (a2 == 2)
    {
        v1 = __builtin_vec_new(2);
        a0->field_4 = v1;
        *v1 = *a1;
        v1[1] = 0;
        return a0;
    }
    v2 = -0x1;
    v3 = a1;
    do
    {
        v4 = v3;
    } while (v2 && (v2 -= 1, v3 = v4 + 1, *v4));
    v5 = __builtin_vec_new(~v2);
    a0->field_4 = v5;
    strcpy@GLIBC_2.0(v5, a1);
    return a0;
}

