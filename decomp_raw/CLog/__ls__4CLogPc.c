// __ls__4CLogPc @0x16daa0 size=197
typedef struct st_56daa0_0 {
    char padding_0[1];
    char field_1;
    char padding_2[2];
    int field_4;
} st_56daa0_0;

st_56daa0_0 * __ls__4CLogPc(st_56daa0_0 *a0, int a1)
{
    int v2;  // edx
    char v0;  // [bp-0x104]
    char v1;  // [bp-0x103]

    if (!a0->field_1)
    {
        a0->field_1 = 1;
        v0 = 0;
        sub_48d0e0(&v1, 0, 0xff);
        sub_489050(&v0, "bot_log.txt", 0);
        v2 = sub_48d440(&v0, "a");
        a0->field_4 = v2;
        sub_488d60(v2, "\n----------------------------------------------------------\n\n");
    }
    if (a0->field_4)
    {
        sub_488d60(a0->field_4, "%s", a1);
        sub_488e60(a0->field_4);
    }
    return a0;
}

