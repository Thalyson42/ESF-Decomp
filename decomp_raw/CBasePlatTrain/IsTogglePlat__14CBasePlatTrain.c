// IsTogglePlat__14CBasePlatTrain @0xee4d0 size=25
typedef struct st_4ee4d0_0 {
    char padding_0[416];
    char field_1a0;
} st_4ee4d0_0;

int IsTogglePlat__14CBasePlatTrain(st_4ee4d0_0 **a0)
{
    return *a0->field_1a0 & 1;
}

