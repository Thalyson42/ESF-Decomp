// EntityGetState__12CGlobalStatei @0x139e60 size=58
typedef struct st_539e60_0 {
    char padding_0[96];
    unsigned int field_60;
} st_539e60_0;

unsigned int EntityGetState__12CGlobalStatei(int a0, int a1)
{
    st_539e60_0 *v0;  // eax

    v0 = CGlobalState::Find(a0, a1);
    return (!v0 ? 0 : v0->field_60);
}

