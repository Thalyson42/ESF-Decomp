// SetFlags__5CBeami @0xb70a0 size=37
typedef struct st_4b70a0_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4b70a0_0;

unsigned int SetFlags__5CBeami(st_4b70a0_0 **a0, unsigned int a1)
{
    *a0->field_148 = *a0->field_148 & 15 | a1 & 240;
    return a1 & 240;
}

