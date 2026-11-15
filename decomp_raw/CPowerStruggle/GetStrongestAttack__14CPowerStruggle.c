// GetStrongestAttack__14CPowerStruggle @0x10da70 size=80
typedef struct st_50da70_3 {
    char padding_0[684];
    struct st_50da70_2 *field_2ac;
} st_50da70_3;

typedef struct st_50da70_1 {
    char padding_0[696];
    float field_2b8;
} st_50da70_1;

typedef struct st_50da70_0 {
    char padding_0[696];
    unsigned int field_2b8;
} st_50da70_0;

typedef struct st_50da70_2 {
    struct st_50da70_2 *field_0;
    struct st_50da70_1 *field_4;
} st_50da70_2;

st_50da70_0 * GetStrongestAttack__14CPowerStruggle(st_50da70_3 *a0)
{
    st_50da70_0 *v0;  // ecx
    double v1;  // mm7
    st_50da70_2 *v2;  // edx
    st_50da70_2 *v3;  // edx
    st_50da70_1 *v4;  // esi

    v0 = NULL;
    v1 = -1.0;
    v2 = a0->field_2ac;
    if (!a0->field_2ac)
        return NULL;
    do
    {
        v3 = v2;
        v4 = v3->field_4;
        if (v3->field_4->field_2b8 > v1)
        {
            v1 = v3->field_4->field_2b8;
            v0 = v4;
        }
    } while ((v2 = v3->field_0, v3->field_0));
    return v0;
}

