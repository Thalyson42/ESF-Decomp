// AddToTextString__11CBaseOutputPCc @0x16d430 size=118
typedef struct st_56d430_0 {
    char padding_0[12];
    struct st_56d430_1 *field_c;
} st_56d430_0;

typedef struct st_56d430_1 {
    unsigned int field_0;
} st_56d430_1;

typedef struct st_56d430_2 {
    char padding_0[512];
    struct st_56d430_0 *field_200;
} st_56d430_2;

int AddToTextString__11CBaseOutputPCc(st_56d430_2 *a0, char *a1)
{
    char *v0;  // edx
    unsigned int v1;  // ecx
    char *v2;  // edi
    char *v3;  // edi

    v0 = a1;
    v1 = 0xffffffff;
    v2 = v0;
    do
    {
        v3 = v2;
    } while (v1 && (v1 -= 1, v2 = v3 + 1, *v3));
    if (~v1 - 1 <= 0x1ff)
    {
        strncpy@GLIBC_2.0(a0, v0, 0x200);
        *(char *)&a0->field_200 = (char)NULL;
    }
    else
    {
        strcpy@GLIBC_2.0(a0, v0);
    }
    return a0->field_200->field_c(a0);
}

