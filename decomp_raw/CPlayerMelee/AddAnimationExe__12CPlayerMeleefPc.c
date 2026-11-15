// AddAnimationExe__12CPlayerMeleefPc @0x100000 size=276
typedef struct st_500000_1 {
    char padding_0[304];
    int field_130;
    char padding_134[72];
    struct st_500000_0 *field_17c;
} st_500000_1;

typedef struct st_500000_2 {
    char padding_0[660];
    unsigned int field_294;
} st_500000_2;

typedef struct st_500000_0 {
    char padding_0[52];
    int field_34;
    char padding_38[28];
    unsigned int field_54;
} st_500000_0;

typedef struct st_500000_3 {
    float field_0;
} st_500000_3;

extern st_500000_3 *gpGlobals;

st_500000_2 * AddAnimationExe__12CPlayerMeleefPc(st_500000_1 *a0, int a1, int a2)
{
    st_500000_2 *v4;  // edi
    st_500000_2 *v5;  // edi
    int v0;  // [bp-0x58]
    char *v1;  // [bp-0x4c]
    int v2;  // [bp-0x48]
    char v3;  // [bp-0x24]

    v4 = CPlayerMelee::GetCurrentAnim(a0);
    if (v4 && v4->field_294)
        CPlayerMelee::RemoveAnim(a0, v4);
    *(unsigned short *)&v0 = 0;
    v5 = CPlayerMelee::AddAnimation(a0, v0, a1, 1, a2);
    v5->field_294 = 1;
    if (!a0->field_17c)
        return NULL;
    a0->field_17c->field_34 = a1;
    if (!a0->field_130)
        return v5;
    strcpy@GLIBC_2.0(&v3, a2);
    if (a0->field_17c->field_54 == 1)
    {
        v2 = "_block";
        v1 = &v3;
    }
    else
    {
        v2 = "_hit";
        v1 = &v3;
    }
    strcat@GLIBC_2.0(v1, v2);
    *(unsigned short *)&v0 = 1;
    CPlayerMelee::AddAnimation(a0->field_130, v0, *(float *)gpGlobals, 1, &v3);
    return v5;
}

