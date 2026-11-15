// SetHealth__4CBoti @0x143a90 size=30
typedef struct st_543a90_1 {
    char padding_0[352];
    float field_160;
} st_543a90_1;

typedef struct st_543a90_0 {
    char padding_0[352];
    unsigned int field_160;
} st_543a90_0;

st_543a90_0 * SetHealth__4CBoti(st_543a90_1 **a0, int a1)
{
    st_543a90_1 *v0;  // eax

    v0 = *a0;
    v0->field_160 = (float)a1;
    return v0;
}

