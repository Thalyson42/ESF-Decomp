// ChangeFriction__17CFrictionModifierP11CBaseEntity @0x12a860 size=42
typedef struct st_52a860_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[20];
    unsigned int field_120;
} st_52a860_1;

typedef struct st_52a860_0 {
    struct st_52a860_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_52a860_0;

st_52a860_0 * ChangeFriction__17CFrictionModifierP11CBaseEntity(st_52a860_0 *a0, st_52a860_0 *a1)
{
    st_52a860_0 *v0;  // eax
    unsigned int *v1;  // edx

    v0 = a1;
    v1 = v0->field_0;
    if (v1[66] != 16 && v1[66] != 10)
    {
        v0 = a0;
        *(float *)&v1[72] = *(float *)&v0->field_64;
    }
    return v0;
}

