// IsSuperBot__4CBot @0x143840 size=21
typedef struct st_543840_0 {
    char padding_0[2980];
    unsigned short field_ba4;
} st_543840_0;

int IsSuperBot__4CBot(st_543840_0 *a0)
{
    unsigned int v0;  // 4124

    v0 = _ccall(15, 5, a0->field_ba4, 0, 0);
    return _INSERT(a0, 0, v0 & 1);
}

