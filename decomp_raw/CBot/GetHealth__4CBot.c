// GetHealth__4CBot @0x143a50 size=49
typedef struct st_543a50_0 {
    char padding_0[352];
    float field_160;
} st_543a50_0;

int GetHealth__4CBot(st_543a50_0 **a0)
{
    int v0;  // [bp-0xc]

    __fnstcw();
    v0 = (int)*a0->field_160;
    return v0;
}

