// SetKi__4CBoti @0x143a30 size=30
typedef struct st_543a30_1 {
    char padding_0[608];
    float field_260;
} st_543a30_1;

typedef struct st_543a30_0 {
    char padding_0[608];
    unsigned int field_260;
} st_543a30_0;

st_543a30_0 * SetKi__4CBoti(st_543a30_1 **a0, int a1)
{
    st_543a30_1 *v0;  // eax

    v0 = *a0;
    v0->field_260 = (float)a1;
    return v0;
}

