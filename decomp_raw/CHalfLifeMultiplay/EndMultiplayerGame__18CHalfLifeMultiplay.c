// EndMultiplayerGame__18CHalfLifeMultiplay @0xdee10 size=44
typedef struct st_4dee10_0 {
    char padding_0[272];
    struct st_4dee10_1 *field_110;
} st_4dee10_0;

typedef struct st_4dee10_1 {
    unsigned int field_0;
} st_4dee10_1;

typedef struct st_4dee10_2 {
    char padding_0[68];
    struct st_4dee10_0 *field_44;
} st_4dee10_2;

int EndMultiplayerGame__18CHalfLifeMultiplay(st_4dee10_2 *a0)
{
    return a0->field_44->field_110(a0);
}

