// Spawn__12CMagicAttack @0xce650 size=118
typedef struct st_4ce650_1 {
    char padding_0[328];
    unsigned int field_148;
} st_4ce650_1;

typedef struct st_4ce650_0 {
    char padding_0[152];
    unsigned int field_98;
} st_4ce650_0;

extern st_4ce650_0 *gpGlobals;

int Spawn__12CMagicAttack(float a0)
{
    st_4ce650_1 *v1;  // eax

    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 12))(a0);
    *(float *)(*(int *)a0 + 284) = 9.999999974752427e-07f;
    *(char **)(*(int *)a0 + 4) = -1 * gpGlobals->field_98 + 5903861;
    *(unsigned int *)(*(int *)a0 + 328) = 5;
    *(float *)(*(int *)a0 + 332) = 254.0f;
    v1 = *(int *)a0;
    v1->padding_0[280] = v1->padding_0[280] | 4;
    return v1;
}

