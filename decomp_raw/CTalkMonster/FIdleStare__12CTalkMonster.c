// FIdleStare__12CTalkMonster @0x1261b0 size=178
typedef struct st_5261b0_0 {
    unsigned int field_0;
} st_5261b0_0;

extern st_5261b0_0 *g_61692c;

unsigned int FIdleStare__12CTalkMonster(float a0)
{
    unsigned int v0;  // [bp-0x30]
    float v1;  // [bp-0x2c]

    if (!sub_48a4a0(a0))
        return 0;
    v1 = 2.0f;
    v0 = 0x3f800000;
    g_61692c(5.0f, 7.5f);
    (*(int *)(*(int *)(*(unsigned int *)&a0 + 96) + 360))(a0, *(int *)(*(unsigned int *)&a0 + 704), 5.0f);
    sub_48d960(*(unsigned int *)&a0 + 784, sub_48a530(a0, 1));
    return 1;
}

