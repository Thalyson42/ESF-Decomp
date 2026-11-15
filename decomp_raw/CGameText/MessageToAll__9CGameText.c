// MessageToAll__9CGameText @0xd1100 size=21
typedef struct st_4d1100_0 {
    char padding_0[416];
    unsigned int field_1a0;
} st_4d1100_0;

unsigned int MessageToAll__9CGameText(st_4d1100_0 **a0)
{
    return *a0->field_1a0 & 1;
}

