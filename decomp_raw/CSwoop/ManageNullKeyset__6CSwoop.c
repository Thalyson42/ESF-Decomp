// ManageNullKeyset__6CSwoop @0x124490 size=179
typedef struct st_524490_0 {
    char padding_0[384];
    unsigned int field_180;
} st_524490_0;

st_524490_0 * ManageNullKeyset__6CSwoop(void* a0)
{
    char *v0;  // edi
    st_524490_0 *v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v0 = NULL;
    do
    {
        v1 = v0 - 2;
        if (v1 > 0x1)
        {
            v2 = CSwoop::DirectionsToFlags(a0, v0);
            v1 = v2 & (int)a0[12];
            if (v1)
            {
                v3 = CSwoop::DirectionsToFlags(a0, v0);
                v1 = v3 & *(int *)(*(int *)(int)a0[120] + 384);
                if (!v1)
                    v1 = CSwoop::RemoveFromNullKeyset(a0, CSwoop::DirectionsToFlags(a0, v0));
            }
        }
    } while ((v0 += 1, v0 <= 0x5));
    if ((char)a0[12] < 0)
    {
        v1 = *(int *)(int)a0[120];
        if (!(*((char *)&v1->field_180 + 1) & 2))
            *(char *)&a0[12] = (char)a0[12] & 127;
    }
    if ((char)a0[13] & 1)
    {
        v1 = *(int *)(int)a0[120];
        if (!(*((char *)&v1->field_180 + 1) & 4))
            *(char *)&a0[13] = (char)a0[13] & 254;
    }
    return v1;
}

