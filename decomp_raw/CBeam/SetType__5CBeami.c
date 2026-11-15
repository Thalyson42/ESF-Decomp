// SetType__5CBeami @0xb7070 size=38
typedef struct st_4b7070_0 {
    char padding_0[328];
    unsigned int field_148;
} st_4b7070_0;

unsigned int SetType__5CBeami(st_4b7070_0 **a0, unsigned int a1)
{
    *a0->field_148 = *a0->field_148 & 240 | a1 & 15;
    return a1 & 15;
}

