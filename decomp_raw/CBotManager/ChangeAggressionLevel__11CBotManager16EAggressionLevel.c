// ChangeAggressionLevel__11CBotManager16EAggressionLevel @0x13e940 size=284
typedef struct st_53e940_0 {
    char padding_0[3460];
    int field_d84;
} st_53e940_0;

typedef struct st_53e940_2 {
    unsigned int field_0;
} st_53e940_2;

typedef struct st_53e940_1 {
    char padding_0[20];
    struct st_53e940_2 *field_14;
} st_53e940_1;

extern char cout;
extern st_53e940_1 *g_625f80;

int ChangeAggressionLevel__11CBotManager16EAggressionLevel(st_53e940_0 *a0, int a1)
{
    char v2;  // cl
    char v3;  // cl
    char v0;  // [bp-0x24]
    char v1;  // [bp-0x23]

    v2 = 0;
    do
    {
        v3 = v2;
        (&a0->field_d84)[15 * v3] = a1;
        v2 = v3 + 1;
    } while (v3 + 1 <= 8);
    v0 = 0;
    sub_48d0e0(&v1, 0, 24);
    if (a1 == 1)
    {
        strcpy(&v0, "Normal");
    }
    else if (a1 <= 1)
    {
        if (!a1)
            strcpy(&v0, "Aggressive");
    }
    else
    {
        if (a1 == 2)
            strcpy(&v0, "Defensive");
    }
    g_625f80->field_14(&cout, "The personality setting aggression level is now for each personality ");
    g_625f80->field_14(&cout, &v0);
    return g_625f80->field_14(&cout, "\n");
}

