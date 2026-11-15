// EntitySetState__12CGlobalStatei12GLOBALESTATE @0x139df0 size=54
typedef struct st_539df0_0 {
    char padding_0[96];
    struct st_539df0_0 *field_60;
} st_539df0_0;

st_539df0_0 * EntitySetState__12CGlobalStatei12GLOBALESTATE(int a0, int a1, st_539df0_0 *a2)
{
    st_539df0_0 *v0;  // edx

    v0 = sub_48d370(a0, a1);
    if (!v0)
        return v0;
    v0->field_60 = a2;
    return a2;
}

