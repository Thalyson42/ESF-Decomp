// DoorActivate__9CBaseDoor @0xac430 size=250
typedef struct st_4ac430_0 {
    char padding_0[160];
    struct st_4ac430_1 *field_a0;
} st_4ac430_0;

typedef struct st_4ac430_1 {
    unsigned int field_0;
} st_4ac430_1;

typedef struct st_4ac430_4 {
    char padding_0[48];
    char field_30;
} st_4ac430_4;

typedef struct st_4ac430_2 {
    char padding_0[96];
    struct st_4ac430_0 *field_60;
} st_4ac430_2;

unsigned int DoorActivate__9CBaseDoor(float a0)
{
    int v2;  // eax
    st_4ac430_4 *v3;  // esi
    st_4ac430_2 *v4;  // edx
    st_4ac430_2 *v5;  // ecx
    unsigned short v0;  // [bp-0x6]

    v2 = sub_488810(*(unsigned int *)&a0 + 212);
    if (!sub_488a80(*(int *)(*(unsigned int *)&a0 + 0x100), v2))
        return 0;
    if (*(char *)(*(int *)a0 + 416) & 32 && !*(int *)(*(unsigned int *)&a0 + 128))
    {
        sub_489940(a0);
    }
    else
    {
        v3 = *(unsigned int *)&a0 + 212;
        if (sub_48d8b0(v3))
        {
            v4 = sub_489fd0(v3);
            if (v4->field_60->field_a0(v4))
            {
                v5 = sub_489fd0(v3);
                v0 = *(char *)(*(unsigned int *)&a0 + 260);
                (*(int *)&v5->field_60->padding_0[56])(v5, (float)v0, 0);
            }
        }
        sub_48dfe0(*(int *)a0, *(unsigned int *)&a0 + 264, 0, 0);
        sub_48bf20(a0);
    }
    return 1;
}

