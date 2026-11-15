// FIsSound__6CSound @0x11edd0 size=25
typedef struct st_51edd0_0 {
    char padding_0[12];
    char field_c;
} st_51edd0_0;

unsigned int FIsSound__6CSound(st_51edd0_0 *a0)
{
    return (!(a0->field_c & 39) ? 0 : 1);
}

