// Activate__10CPathTrack @0xe6f90 size=49
typedef struct st_4e6f90_0 {
    char padding_0[460];
    unsigned int field_1cc;
} st_4e6f90_0;

st_4e6f90_0 * Activate__10CPathTrack(st_4e6f90_0 **a0)
{
    st_4e6f90_0 *v0;  // eax

    v0 = *a0;
    if (*a0->field_1cc)
        v0 = CPathTrack::Link(a0);
    return v0;
}

