// SetEndAttachment__5CBeami @0xb7140 size=41
typedef struct st_4b7140_0 {
    char padding_0[272];
    unsigned int field_110;
} st_4b7140_0;

unsigned int SetEndAttachment__5CBeami(st_4b7140_0 **a0, unsigned int a1)
{
    *a0->field_110 = *a0->field_110 & 0xfff | (a1 & 15) * 0x1000;
    return (a1 & 15) * 0x1000;
}

