// get_reg_addr @0x194f20 size=75
typedef struct st_594f20_0 {
    unsigned int field_0;
    char padding_4[12];
    struct st_594f20_1 *field_10;
} st_594f20_0;

typedef struct st_594f20_1 {
    char field_0;
} st_594f20_1;

unsigned int get_reg_addr(char *a0, st_594f20_0 *a1)
{
    char *v2;  // edx
    unsigned int v3;  // eax
    int v0;  // [bp-0x1c]
    int v1;  // [bp-0x18]

    sub_594f1c(v0, v1);
    v2 = a0;
    v3 = &a1[4].padding_4[8];
    if (v2[v3] == 2)
    {
        do
        {
            v2 = *(int *)((char *)a1 + 0x4 * v2 + 16);
        } while (v2[v3] == 2);
    }
    return (*(char *)(v2 + a1 + 92) == 1 ? *(int *)((char *)a1 + 0x4 * v2 + 16) + a1->field_0 : sub_48a650());
}

