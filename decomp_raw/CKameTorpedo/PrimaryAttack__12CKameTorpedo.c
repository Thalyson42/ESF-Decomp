// PrimaryAttack__12CKameTorpedo @0xcac10 size=98
typedef struct st_4cac10_1 {
    char padding_0[128];
    struct st_4cac10_0 *field_80;
    char padding_84[368];
    int field_1f4;
    unsigned int field_1f8;
} st_4cac10_1;

typedef struct st_4cac10_0 {
    char padding_0[820];
    unsigned int field_334;
} st_4cac10_0;

unsigned int PrimaryAttack__12CKameTorpedo(st_4cac10_1 *a0)
{
    unsigned int v0;  // eax

    if (a0->field_80->field_334)
        return sub_48a400(a0);
    v0 = sub_48c470(a0);
    if (a0->field_1f4 > 5)
        return v0;
    a0->field_1f8 = 0;
    return sub_48a400(a0);
}

