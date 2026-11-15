// TaskThink__17CRecoverMeleeTask @0x1845e0 size=59
typedef struct st_5845e0_1 {
    char padding_0[4];
    unsigned int field_4;
    struct st_5845e0_0 *field_8;
    struct st_5845e0_0 *field_c;
} st_5845e0_1;

typedef struct st_5845e0_0 {
    char padding_0[512];
    char field_200;
    char padding_201[379];
    unsigned int field_37c;
    char padding_380[100];
    unsigned int field_3e4;
    char padding_3e8[180];
    unsigned int field_49c;
} st_5845e0_0;

st_5845e0_0 * TaskThink__17CRecoverMeleeTask(st_5845e0_1 *a0)
{
    st_5845e0_0 *v0;  // eax
    st_5845e0_0 *v1;  // eax

    v0 = a0->field_8;
    if (v0->field_37c && (v0->field_49c == 6 || v0->field_3e4))
    {
        v1 = a0->field_c;
        v1->field_200 = v1->field_200 | 3;
        return v1;
    }
    a0->field_4 = 2;
    return v0;
}

