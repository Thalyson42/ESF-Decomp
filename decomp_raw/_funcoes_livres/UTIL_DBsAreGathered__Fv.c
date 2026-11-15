// UTIL_DBsAreGathered__Fv @0x17f120 size=77
typedef struct st_57f120_0 {
    char padding_0[348];
    unsigned int field_15c;
} st_57f120_0;

int UTIL_DBsAreGathered__Fv(void)
{
    st_57f120_0 **v1;  // esi
    unsigned int v2;  // eax

    v1 = UTIL_FindEntityByClassname(0, "dragonball");
    v2 = IsNull(v1);
    return (!(char)v2 ? _INSERT(*v1, 0, *v1->field_15c == 19) : _INSERT(v2, 0, 0));
}

