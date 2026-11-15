// next_stack_level @0x194fd8 size=109
typedef struct st_594fd8_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[76];
    unsigned short field_58;
} st_594fd8_0;

st_594fd8_0 * next_stack_level(int a0, unsigned int *a1, int a2)
{
    st_594fd8_0 *v3;  // esi
    unsigned int v4;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]
    int v2;  // [bp-0x14]

    sub_594fd4(v0, v1, v2);
    v3 = __frame_state_for(a0, a2);
    if (v3)
    {
        v4 = v3->field_58;
        v3->field_0 = (!*(v4 + (char *)a1 + 92) ? *a1 : *(int *)get_reg_addr(v4, a1, 0));
        v3->field_0 = v3->field_0 + v3->field_8;
        return v3;
    }
    return NULL;
}

