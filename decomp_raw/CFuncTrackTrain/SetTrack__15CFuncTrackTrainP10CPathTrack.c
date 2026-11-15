// SetTrack__15CFuncTrackTrainP10CPathTrack @0xee460 size=74
typedef struct st_4ee460_1 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
} st_4ee460_1;

typedef struct st_4ee460_0 {
    struct st_4ee460_1 *field_0;
    char padding_4[96];
    unsigned int field_64;
} st_4ee460_0;

unsigned int SetTrack__15CFuncTrackTrainP10CPathTrack(st_4ee460_0 *a0, int a1)
{
    unsigned int *v3;  // edx
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    v3 = &a0->field_0->field_8;
    *(float *)&v0 = *(float *)&a0->field_0->field_8;
    *(float *)&v1 = *(float *)&v3[1];
    *(float *)&v2 = *(float *)&v3[2];
    v4 = sub_489b20(a1, &v0);
    a0->field_64 = v4;
    return v4;
}

