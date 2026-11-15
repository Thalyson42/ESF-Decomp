// AlertFriends__12CTalkMonster @0x125840 size=119
typedef struct st_525840_3 {
    char padding_0[140];
    struct st_525840_1 *field_8c;
} st_525840_3;

typedef struct st_525840_1 {
    unsigned int field_0;
} st_525840_1;

typedef struct st_525840_4 {
    char padding_0[96];
    struct st_525840_3 *field_60;
    char padding_64[484];
    char field_248;
} st_525840_4;

typedef struct st_525840_0 {
    char padding_0[76];
    struct st_525840_1 *field_4c;
} st_525840_0;

typedef struct st_525840_2 {
    char padding_0[96];
    struct st_525840_0 *field_60;
} st_525840_2;

st_525840_2 * AlertFriends__12CTalkMonster(int a0)
{
    st_525840_2 *v1;  // edi
    st_525840_4 *v2;  // esi
    int v0;  // [bp-0x8]

    v1 = NULL;
    v0 = 0;
    while (1)
    {
        v1 = sub_489900(a0, v1, v0, 1);
        if (v1)
        {
            v2 = v1->field_60->field_4c(v1);
            if (v2->field_60->field_8c(v2))
                v2->field_248 = v2->field_248 | 1;
        }
        else
        {
            v0 += 1;
            if (v0 > 2)
                break;
        }
    }
    return v1;
}

