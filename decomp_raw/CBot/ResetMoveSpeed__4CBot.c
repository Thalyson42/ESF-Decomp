// ResetMoveSpeed__4CBot @0x16fcc0 size=94
typedef struct st_56fcc0_0 {
    char padding_0[384];
    char field_180;
    char field_181;
} st_56fcc0_0;

char * ResetMoveSpeed__4CBot(st_56fcc0_0 **a0)
{
    char *v0;  // eax

    memset(a0 + 858, 0, 12);
    *a0->field_180 = *a0->field_180 & 247;
    *a0->field_180 = *a0->field_180 & 239;
    *a0->field_181 = *a0->field_181 & 253;
    *a0->field_181 = *a0->field_181 & 251;
    *a0->field_180 = *a0->field_180 & 253;
    v0 = &*a0->padding_0[0];
    v0[384] = v0[384] & 251;
    return v0;
}

