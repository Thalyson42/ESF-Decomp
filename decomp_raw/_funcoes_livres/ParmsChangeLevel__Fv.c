// ParmsChangeLevel__Fv @0xa1080 size=64
typedef struct st_4a1080_1 {
    char padding_0[156];
    struct st_4a1080_0 *field_9c;
} st_4a1080_1;

typedef struct st_4a1080_0 {
    char padding_0[36];
    struct st_4a1080_1 *field_24;
} st_4a1080_0;

extern st_4a1080_1 *gpGlobals;

st_4a1080_1 * ParmsChangeLevel__Fv(void)
{
    st_4a1080_0 *v1;  // esi
    st_4a1080_1 *v2;  // eax

    v1 = gpGlobals->field_9c;
    if (!v1)
        return gpGlobals;
    v2 = BuildChangeList(&v1[1].padding_0[4], 16);
    v1->field_24 = v2;
    return v2;
}

