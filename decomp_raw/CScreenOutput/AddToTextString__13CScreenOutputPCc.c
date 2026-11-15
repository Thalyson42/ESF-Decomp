// AddToTextString__13CScreenOutputPCc @0x16cd60 size=198
typedef struct st_56cd60_0 {
    char padding_0[16];
    struct st_56cd60_1 *field_10;
} st_56cd60_0;

typedef struct st_56cd60_1 {
    unsigned int field_0;
} st_56cd60_1;

typedef struct st_56cd60_2 {
    char field_0;
    char field_1;
    char padding_2[510];
    struct st_56cd60_0 *field_200;
} st_56cd60_2;

int AddToTextString__13CScreenOutputPCc(st_56cd60_2 *a0, char *a1)
{
    char *v3;  // esi
    unsigned int v4;  // ecx
    st_56cd60_2 *v5;  // edi
    st_56cd60_2 *v6;  // edi
    unsigned int v7;  // ecx
    char *v8;  // edi
    char *v9;  // edi
    unsigned int v0;  // [bp-0x208]
    char v1;  // [bp-0x204]
    char v2;  // [bp-0x5]

    v3 = a1;
    v4 = 0xffffffff;
    v5 = a0;
    do
    {
        v6 = v5;
    } while (v4 && (v4 -= 1, v5 = &v6->field_1, v6->field_0));
    v0 = ~v4;
    v7 = 0xffffffff;
    v8 = v3;
    do
    {
        v9 = v8;
    } while (v7 && (v7 -= 1, v8 = v9 + 1, *v9));
    v1 = 0;
    if ((short)v0 + (short)~v7 - 2 > 0x200)
    {
        strncpy@GLIBC_2.0(&v1, v3, 0x1ff);
        v2 = 0;
    }
    else
    {
        strcpy@GLIBC_2.0(&v1, v3);
    }
    a0->field_200->field_10(a0, &v1);
    return strcat@GLIBC_2.0(a0, &v1);
}

