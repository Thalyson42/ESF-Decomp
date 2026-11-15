// MakeCombo__9CBaseTask10EComboType @0x182420 size=188
typedef struct st_582420_1 {
    char padding_0[4200];
    unsigned int field_1068;
    char padding_106c[4];
    unsigned int field_1070;
} st_582420_1;

typedef struct st_582420_0 {
    char padding_0[4];
    unsigned int field_4;
    struct st_582420_1 *field_8;
} st_582420_0;

unsigned int MakeCombo__9CBaseTask10EComboType(st_582420_0 *a0, int a1)
{
    int v2;  // edi
    unsigned int v3;  // eax
    char v0;  // [bp-0x9]
    unsigned int *v1;  // [bp-0x8]

    a0->field_4 = 2;
    a0->field_8->field_1068 = 12;
    v1 = a0->field_8;
    v2 = __builtin_new(24);
    v0 = 1;
    v3 = __9CBotComboP4CBot10EComboType(v2, a0->field_8, a1);
    v0 = 0;
    v1[1052] = v3;
    if (!v0)
        return v3;
    return __builtin_delete(v2);
}

