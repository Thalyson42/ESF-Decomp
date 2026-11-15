// ValidPath__10CPathTrackP10CPathTracki @0xe6fd0 size=38
typedef struct st_4e6fd0_0 {
    char padding_0[416];
    char field_1a0;
} st_4e6fd0_0;

st_4e6fd0_0 ** ValidPath__10CPathTrackP10CPathTracki(unsigned int a0, st_4e6fd0_0 **a1, unsigned int a2)
{
    if (a1 && (!a2 || !(*a1->field_1a0 & 1)))
        return a1;
    return NULL;
}

