// GetPrevious__10CPathTrack @0xe7170 size=44
typedef struct st_4e7170_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4e7170_0;

typedef struct st_4e7170_1 {
    struct st_4e7170_0 *field_0;
    char padding_4[108];
    unsigned int field_70;
    unsigned int field_74;
} st_4e7170_1;

unsigned int GetPrevious__10CPathTrack(st_4e7170_1 *a0)
{
    if (a0->field_74 && (a0->field_0->field_1a0 & 32772) == 32772)
        return a0->field_74;
    return a0->field_70;
}

