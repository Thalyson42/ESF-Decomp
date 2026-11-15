// KeyValue__16CGamePlayerEquipP14KeyValueData_s @0xd0b80 size=468
typedef struct st_4d0b80_0 {
    unsigned int field_0;
    int field_4;
    int field_8;
    unsigned int field_c;
} st_4d0b80_0;

typedef struct st_4d0b80_1 {
    unsigned int field_0;
} st_4d0b80_1;

extern st_4d0b80_1 *g_6168cc;

st_4d0b80_0 * KeyValue__16CGamePlayerEquipP14KeyValueData_s(int *a0, st_4d0b80_0 *a1)
{
    st_4d0b80_0 *v3;  // eax
    int *v4;  // edi
    int v5;  // edx
    int *v6;  // eax
    int v7;  // eax
    st_4d0b80_0 *v0;  // [bp-0x8c]
    int idx;  // [bp-0x88]
    char v2;  // [bp-0x84]

    v3 = sub_489590(a0, a1);
    if (a1->field_c)
        return v3;
    idx = 0;
    while (1)
    {
        v0 = idx * 4;
        v4 = a0 + 26;
        if (!*(int *)(v0 + v4))
            break;
        idx += 1;
        if (idx > 31)
            return v0;
    }
    sub_48c9e0(a1->field_4, &v2);
    *(unsigned int *)(v0 + v4) = g_6168cc(&v2);
    v5 = sub_48b500(a1->field_8, 0, 10, 0);
    v6 = a0 + 58;
    v6[idx] = v5;
    v7 = v5;
    if (v7 < 1)
        v7 = 1;
    v6[idx] = v7;
    a1->field_c = 1;
    return a1;
}

