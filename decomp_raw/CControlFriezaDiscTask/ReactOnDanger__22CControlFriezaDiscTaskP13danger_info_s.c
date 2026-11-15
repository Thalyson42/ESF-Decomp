// ReactOnDanger__22CControlFriezaDiscTaskP13danger_info_s @0x15a060 size=18
typedef struct st_55a060_0 {
    char padding_0[24];
    unsigned short field_18;
} st_55a060_0;

int ReactOnDanger__22CControlFriezaDiscTaskP13danger_info_s(unsigned int a0, st_55a060_0 *a1)
{
    unsigned int v0;  // 4124

    v0 = _ccall(15, 5, a1->field_18, 59, 0);
    return _INSERT(a1, 0, v0 & 1);
}

