// CleanUpShotList__12CScatterShot @0x111370 size=139
typedef struct st_511370_1 {
    unsigned int field_0;
} st_511370_1;

typedef struct st_511370_0 {
    char padding_0[508];
    struct st_511370_1 *field_1fc;
} st_511370_0;

typedef struct st_511370_2 {
    char padding_0[96];
    struct st_511370_0 *field_60;
    char padding_64[608];
    unsigned int field_2c4;
} st_511370_2;

char * CleanUpShotList__12CScatterShot(char *a0)
{
    char *v1;  // eax
    st_511370_2 **v2;  // edi
    st_511370_2 **v3;  // esi
    st_511370_2 *v4;  // edx
    char *v5;  // eax
    char *i;  // [bp-0x8]

    i = NULL;
    v1 = a0;
    if (i >= *(int *)&v1[228])
        return v1;
    v2 = v1 + 196;
    do
    {
        v3 = i * 4;
        v4 = *(int *)(v3 + v2);
        if (v4->field_2c4)
        {
            v4->field_60->field_1fc(v4);
            v5 = a0;
            *(unsigned int *)&v5[228] = *(int *)&v5[228] - 1;
            *(st_511370_2 **)(v3 + v2) = v2[*(int *)&v5[228]];
        }
        else
        {
            i += 1;
        }
    } while (i < *(int *)&a0[228]);
    return i;
}

