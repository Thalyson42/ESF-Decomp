// Illumination__11CBasePlayer @0xfdc90 size=73
typedef struct st_4fdc90_0 {
    char padding_0[520];
    unsigned int field_208;
} st_4fdc90_0;

typedef struct st_4fdc90_1 {
    struct st_4fdc90_0 *field_0;
    char padding_4[696];
    unsigned int field_2bc;
} st_4fdc90_1;

typedef struct st_4fdc90_2 {
    unsigned int field_0;
} st_4fdc90_2;

extern st_4fdc90_2 *g_6167fc;

int Illumination__11CBasePlayer(st_4fdc90_1 *a0)
{
    unsigned int v0;  // eax
    int v1;  // eax

    v0 = g_6167fc(a0->field_0->field_208);
    v1 = v0 + a0->field_2bc;
    if (v1 <= 0xff)
        return v1;
    return 0xff;
}

