// FIsScent__6CSound @0x11edf0 size=25
typedef struct st_51edf0_0 {
    char padding_0[12];
    char field_c;
} st_51edf0_0;

unsigned int FIsScent__6CSound(st_51edf0_0 *a0)
{
    return (!(a0->field_c & 88) ? 0 : 1);
}

