// PopEnemy__12CBaseMonster @0xd5900 size=219
typedef struct st_4d5900_0 {
    char padding_0[140];
    struct st_4d5900_1 *field_8c;
} st_4d5900_0;

typedef struct st_4d5900_1 {
    unsigned int field_0;
} st_4d5900_1;

typedef struct st_4d5900_2 {
    char padding_0[96];
    struct st_4d5900_0 *field_60;
} st_4d5900_2;

unsigned int PopEnemy__12CBaseMonster(unsigned int *a0)
{
    int v0;  // edi
    int v1;  // edi
    int v2;  // esi
    st_4d5900_2 *v3;  // edx
    unsigned int v4;  // edx
    unsigned int *v5;  // edx

    v0 = 3;
    while (1)
    {
        v1 = v0;
        v2 = &a0[2 * v1 + 70];
        if (EHANDLE::__opi(v2))
        {
            v3 = EHANDLE::__rf(v2);
            if (v3->field_60->field_8c(v3))
            {
                v4 = a0[71 + 2 * v1];
                a0[66] = a0[70 + 2 * v1];
                a0[67] = v4;
                v5 = &a0[3 * v1];
                a0[148] = v5[78];
                a0[149] = v5[79];
                a0[150] = v5[80];
                return 1;
            }
            EHANDLE::__as(&a0[2 * v1 + 70], 0);
        }
        v0 = v1 - 1;
        if (v1 - 1 < 0)
            return 0;
    }
}

