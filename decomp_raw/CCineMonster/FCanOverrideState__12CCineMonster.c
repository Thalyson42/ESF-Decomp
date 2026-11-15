// FCanOverrideState__12CCineMonster @0x114b70 size=30
typedef struct st_514b70_0 {
    char padding_0[416];
    char field_1a0;
} st_514b70_0;

unsigned int FCanOverrideState__12CCineMonster(st_514b70_0 **a0)
{
    return (!(*a0->field_1a0 & 64) ? 0 : 1);
}

