// Push__6CStacki @0xe3730 size=76
typedef struct st_4e3730_0 {
    unsigned int field_0;
    char padding_4[396];
    int field_190;
} st_4e3730_0;

int Push__6CStacki(st_4e3730_0 *a0, unsigned int a1)
{
    if (a0->field_190 <= 99)
    {
        (&a0->field_0)[a0->field_190] = a1;
        a0->field_190 = a0->field_190 + 1;
        return a1;
    }
    return sub_48c360("Error!\n");
}

