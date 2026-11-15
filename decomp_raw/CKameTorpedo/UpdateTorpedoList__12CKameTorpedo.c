// UpdateTorpedoList__12CKameTorpedo @0xca7e0 size=139
typedef struct st_4ca7e0_1 {
    unsigned int field_0;
} st_4ca7e0_1;

typedef struct st_4ca7e0_0 {
    char padding_0[508];
    struct st_4ca7e0_1 *field_1fc;
} st_4ca7e0_0;

typedef struct st_4ca7e0_2 {
    char padding_0[96];
    struct st_4ca7e0_0 *field_60;
    char padding_64[608];
    unsigned int field_2c4;
} st_4ca7e0_2;

char * UpdateTorpedoList__12CKameTorpedo(char *a0)
{
    char *v1;  // eax
    st_4ca7e0_2 **v2;  // edi
    st_4ca7e0_2 **v3;  // esi
    st_4ca7e0_2 *v4;  // edx
    char *v5;  // eax
    char *i;  // [bp-0x8]

    i = NULL;
    v1 = a0;
    if (i >= *(int *)&v1[500])
        return v1;
    v2 = v1 + 468;
    do
    {
        v3 = i * 4;
        v4 = *(int *)(v3 + v2);
        if (v4->field_2c4)
        {
            v4->field_60->field_1fc(v4);
            v5 = a0;
            *(unsigned int *)&v5[500] = *(int *)&v5[500] - 1;
            *(st_4ca7e0_2 **)(v3 + v2) = v2[*(int *)&v5[500]];
        }
        else
        {
            i += 1;
        }
    } while (i < *(int *)&a0[500]);
    return i;
}

