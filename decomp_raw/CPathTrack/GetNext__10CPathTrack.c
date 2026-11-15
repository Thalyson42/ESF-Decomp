// GetNext__10CPathTrack @0xe7140 size=44
typedef struct st_4e7140_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4e7140_0;

typedef struct st_4e7140_1 {
    struct st_4e7140_0 *field_0;
    char padding_4[104];
    unsigned int field_6c;
    char padding_70[4];
    unsigned int field_74;
} st_4e7140_1;

unsigned int GetNext__10CPathTrack(st_4e7140_1 *a0)
{
    if (a0->field_74 && (a0->field_0->field_1a0 & 32772) == 0x8000)
        return a0->field_74;
    return a0->field_6c;
}

