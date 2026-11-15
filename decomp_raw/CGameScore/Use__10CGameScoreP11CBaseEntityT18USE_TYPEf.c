// Use__10CGameScoreP11CBaseEntityT18USE_TYPEf @0xcf200 size=213
typedef struct st_4cf200_0 {
    char padding_0[88];
    struct st_4cf200_1 *field_58;
    struct st_4cf200_1 *field_5c;
    char padding_60[64];
    struct st_4cf200_1 *field_a0;
} st_4cf200_0;

typedef struct st_4cf200_1 {
    unsigned int field_0;
} st_4cf200_1;

typedef struct st_4cf200_2 {
    char padding_0[96];
    struct st_4cf200_0 *field_60;
} st_4cf200_2;

unsigned int Use__10CGameScoreP11CBaseEntityT18USE_TYPEf(void* *a0, st_4cf200_2 *a1)
{
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    void* v5;  // ecx
    int v0;  // [bp-0x24]
    unsigned short v1;  // [bp-0x20]
    unsigned short v2;  // [bp-0x1e]

    v3 = sub_48aa30(a0, a1);
    if (!v3)
        return v3;
    v4 = a1->field_60->field_a0(a1);
    if (!v4)
        return v4;
    v5 = *a0;
    if (!((char)v5[416] & 2))
    {
        v2 = __fnstcw();
        v1 = v2 | 0xc00;
        v0 = (int)(float)(*a0)[356];
        return a1->field_60->field_58(a1, v0, (int)(*a0)[416] & 1);
    }
    v2 = __fnstcw();
    v1 = v2 | 0xc00;
    v0 = (int)(float)v5[356];
    return a1->field_60->field_5c(a1, v0, (int)v5[416] & 1);
}

