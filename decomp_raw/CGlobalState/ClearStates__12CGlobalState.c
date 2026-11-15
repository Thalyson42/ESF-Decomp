// ClearStates__12CGlobalState @0x13a090 size=72
typedef struct st_53a090_0 {
    char padding_0[100];
    struct st_53a090_0 *field_64;
} st_53a090_0;

int ClearStates__12CGlobalState(st_53a090_0 **a0)
{
    st_53a090_0 *v0;  // eax
    st_53a090_0 *v1;  // eax

    v0 = *a0;
    if (*a0)
    {
        do
        {
            v1 = v0;
            sub_48cf10(v1);
            v0 = v1->field_64;
        } while (v1->field_64);
    }
    return sub_4890d0(a0);
}

