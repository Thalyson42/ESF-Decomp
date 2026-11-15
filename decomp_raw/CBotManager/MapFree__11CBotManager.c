// MapFree__11CBotManager @0x143160 size=249
typedef struct st_543160_2 {
    char padding_0[164];
    struct st_543160_3 *field_a4;
} st_543160_2;

typedef struct st_543160_3 {
    unsigned int field_0;
} st_543160_3;

typedef struct st_543160_1 {
    char padding_0[421];
    char field_1a5;
    char padding_1a6[42];
    unsigned int field_1d0;
} st_543160_1;

typedef struct st_543160_4 {
    struct st_543160_1 *field_0;
    char padding_4[92];
    struct st_543160_2 *field_60;
} st_543160_4;

typedef struct st_543160_0 {
    char padding_0[144];
    int field_90;
    char padding_94[4];
    unsigned int field_98;
} st_543160_0;

extern st_543160_3 *g_61685c;
extern st_543160_0 *gpGlobals;

unsigned int * MapFree__11CBotManager(void)
{
    int v9;  // edi
    st_543160_4 *v10;  // esi
    int v0;  // [bp-0x88]
    int v1;  // [bp-0x84]
    int v2;  // [bp-0x6c]
    int v3;  // [bp-0x68]
    int v4;  // [bp-0x64]
    char *v5;  // [bp-0x4c]
    char v6;  // [bp-0x45]
    char v7;  // [bp-0x44]

    sub_4889c0(v2, v3, v4);
    v9 = 1;
    if (1 > gpGlobals->field_90)
        return gpGlobals;
    v5 = &v7;
    do
    {
        v10 = sub_48a500(v9);
        *(unsigned short *)&v1 = 0;
        *(unsigned short *)&v0 = 0;
        if ((char)sub_489a70(v10, v0, v1))
        {
            v6 = 0;
            if (!v10->field_60->field_a4(v10))
                v6 = (v10->field_0->field_1a5 & 32) != 0;
            if (v6 && v10)
            {
                sub_48d990(v5, "kick \"%s\"\n", v10->field_0->field_1d0 + gpGlobals->field_98);
                g_61685c(v5);
            }
        }
    } while ((v9 += 1, v9 <= gpGlobals->field_90));
    return gpGlobals;
}

