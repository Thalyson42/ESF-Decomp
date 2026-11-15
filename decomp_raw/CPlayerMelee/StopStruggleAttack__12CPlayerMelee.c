// StopStruggleAttack__12CPlayerMelee @0x10b140 size=292
typedef struct st_50b140_1 {
    char padding_0[108];
    char field_6c;
    char padding_6d[175];
    unsigned int field_11c;
    char padding_120[4];
    struct st_50b140_2 *field_124;
    char padding_128[8];
    int field_130;
} st_50b140_1;

typedef struct st_50b140_2 {
    struct st_50b140_0 *field_0;
} st_50b140_2;

typedef struct st_50b140_0 {
    char padding_0[648];
    unsigned int field_288;
    unsigned int field_28c;
    unsigned int field_290;
} st_50b140_0;

unsigned int StopStruggleAttack__12CPlayerMelee(st_50b140_1 *a0)
{
    unsigned int *v3;  // edx
    unsigned int *v4;  // edx
    unsigned int v5;  // eax
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    if (a0->field_11c == 9)
    {
        memset(&a0->field_6c, 0, 20);
        sub_48c1e0(a0);
        sub_4887c0(a0);
        v3 = *(int *)a0->field_124;
        v0 = 0;
        v1 = 0;
        v2 = 0;
        v3[162] = v0;
        v3[163] = v1;
        v3[164] = v2;
        return sub_4899e0(a0->field_130);
    }
    else if (a0->field_11c == 11)
    {
        memset(&a0->field_6c, 0, 20);
        sub_48c1e0(a0);
        sub_4887c0(a0);
        v4 = *(int *)a0->field_124;
        v0 = 0;
        v1 = 0;
        v2 = 0;
        v4[162] = v0;
        v4[163] = v1;
        v4[164] = v2;
        return v2;
    }
    else
    {
        return v5;
    }
}

