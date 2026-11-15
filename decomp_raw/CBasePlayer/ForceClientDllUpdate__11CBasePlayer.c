// ForceClientDllUpdate__11CBasePlayer @0xfc410 size=111
typedef struct st_4fc410_2 {
    char padding_0[96];
    struct st_4fc410_0 *field_60;
    char padding_64[676];
    unsigned int field_308;
    char padding_30c[104];
    unsigned int field_374;
    char padding_378[1412];
    unsigned int field_8fc;
    char padding_900[4];
    char field_904;
    char padding_905[3];
    unsigned int field_908;
    char padding_90c[28];
    unsigned int field_928;
    unsigned int field_92c;
} st_4fc410_2;

typedef struct st_4fc410_1 {
    unsigned int field_0;
} st_4fc410_1;

typedef struct st_4fc410_0 {
    char padding_0[516];
    struct st_4fc410_1 *field_204;
} st_4fc410_0;

int ForceClientDllUpdate__11CBasePlayer(st_4fc410_2 *a0)
{
    a0->field_928 = 0xffffffff;
    a0->field_92c = 0xffffffff;
    a0->field_904 = a0->field_904 | 192;
    a0->field_908 = 0;
    a0->field_308 = 0;
    a0->field_8fc = 1;
    a0->field_374 = 1;
    return a0->field_60->field_204(a0);
}

