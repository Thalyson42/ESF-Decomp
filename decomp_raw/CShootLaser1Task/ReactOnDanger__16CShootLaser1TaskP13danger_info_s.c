// ReactOnDanger__16CShootLaser1TaskP13danger_info_s @0x187480 size=18
typedef struct st_587480_0 {
    char padding_0[24];
    unsigned short field_18;
} st_587480_0;

int ReactOnDanger__16CShootLaser1TaskP13danger_info_s(unsigned int a0, st_587480_0 *a1)
{
    unsigned int v0;  // 4124

    v0 = _ccall(15, 5, a1->field_18, 59, 0);
    return _INSERT(a1, 0, v0 & 1);
}

