// GetSwoopBoostSpeed__6CSwoop @0x123e40 size=68
typedef struct st_523e40_0 {
    char padding_0[12];
    struct st_523e40_1 *field_c;
} st_523e40_0;

typedef struct st_523e40_3 {
    char padding_0[1892];
    struct st_523e40_2 *field_764;
} st_523e40_3;

typedef struct st_523e40_1 {
    unsigned int field_0;
} st_523e40_1;

typedef struct st_523e40_2 {
    char padding_0[4];
    struct st_523e40_0 *field_4;
} st_523e40_2;

typedef struct st_523e40_4 {
    char padding_0[120];
    struct st_523e40_3 *field_78;
} st_523e40_4;

float GetSwoopBoostSpeed__6CSwoop(st_523e40_4 *a0)
{
    float v0;  // [bp-0xc]
    int v1;  // [bp-0x8]

    v1 = a0->field_78->field_764->field_4->field_c(a0->field_78->field_764);
    v0 = (float)((double)v1 * 4.6);
    return v0;
}

