// SetStartAttachment__5CBeami @0xb7110 size=41
typedef struct st_4b7110_0 {
    char padding_0[296];
    unsigned int field_128;
} st_4b7110_0;

unsigned int SetStartAttachment__5CBeami(st_4b7110_0 **a0, unsigned int a1)
{
    *a0->field_128 = *a0->field_128 & 0xfff | (a1 & 15) * 0x1000;
    return (a1 & 15) * 0x1000;
}

