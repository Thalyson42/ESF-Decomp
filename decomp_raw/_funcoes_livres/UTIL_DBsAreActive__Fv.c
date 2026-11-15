// UTIL_DBsAreActive__Fv @0x17f170 size=99
typedef struct st_57f170_0 {
    char padding_0[264];
    unsigned int field_108;
    unsigned int field_10c;
    unsigned int field_110;
} st_57f170_0;

char UTIL_DBsAreActive__Fv(void)
{
    st_57f170_0 **v1;  // esi
    char v2;  // dl
    unsigned int *v3;  // eax

    v1 = sub_487e80(0, "dragonball");
    if ((char)sub_48b140(v1))
        return 0;
    v2 = 0;
    v3 = *v1;
    if (v3[67] && v3[66] != 8)
        v2 = !v3[0x44];
    return v2;
}

