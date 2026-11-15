// PlayMedPriorityAnim__12CPlayerMelee @0xffe50 size=88
typedef struct st_4ffe50_1 {
    char padding_0[812];
    unsigned int field_32c;
    char padding_330[4];
    unsigned int field_334;
    unsigned int field_338;
    unsigned int field_33c;
    unsigned int field_340;
    char padding_344[888];
    unsigned int field_6bc;
    char padding_6c0[176];
    unsigned int field_770;
} st_4ffe50_1;

typedef struct st_4ffe50_0 {
    char padding_0[292];
    struct st_4ffe50_1 *field_124;
} st_4ffe50_0;

unsigned int PlayMedPriorityAnim__12CPlayerMelee(st_4ffe50_0 *a0)
{
    unsigned int *v0;  // eax

    v0 = a0->field_124;
    if (!v0[203] && !v0[205] && !v0[206] && !v0[207] && !v0[208] && !v0[476] && !v0[431])
        return 1;
    return 0;
}

