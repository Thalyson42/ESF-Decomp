// _._10bad_typeid @0x19836c size=59
typedef struct st_59836c_0 {
    char padding_0[505700];
    char field_7b764;
    char padding_7b765[9075];
    unsigned int field_7dad8;
    char padding_7dadc[1520];
    unsigned int field_7e0cc;
} st_59836c_0;

unsigned int _._10bad_typeid(unsigned int *a0, char a1)
{
    st_59836c_0 *v1;  // ebx
    unsigned int *v2;  // ebx
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]

    sub_598368(v0);
    v2 = &v1->field_7b764;
    *a0 = v2[2269];
    v3 = v2[2650];
    *a0 = v3;
    if (!(a1 & 1))
        return v3;
    return __builtin_delete(a0);
}

